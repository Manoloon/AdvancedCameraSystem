// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#include "Modifiers/KeepLineOfSight.h"
#include "PlayerCameraManagerACS.h"

bool UKeepLineOfSight::IsInLineOfSight(const FVector& Origin, const FVector& Target) const
{
	if (!GetWorld())
	{
		return false;
	}
	if (const TObjectPtr<APlayerCameraManagerACS> CameraManager = Cast<APlayerCameraManagerACS>(CameraOwner))
	{
		FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(SpringArm), false, GetViewTarget());
		FHitResult Result;
		GetWorld()->SweepSingleByChannel(Result, Origin, Target, FQuat::Identity, LOS_ProbeChannel,
			FCollisionShape::MakeSphere(CameraManager->LineOfSightProbeSize), QueryParams);
		if (bDebug)
		{
			DrawDebugLine(GetWorld(), Origin, Target, FColor::Green, false, 0.2, 0, 0.5);
			DrawDebugSphere(GetWorld(), Target, CameraManager->LineOfSightProbeSize, 6, FColor::Cyan, false, 0.3, 0, 0.5);
		}
		return !Result.bBlockingHit;
	}
	return false;
}

void UKeepLineOfSight::RotateAroundLocation(const FVector& TargetLocation, FVector& InOutViewLocation,
	FRotator& InOutViewRotation, const float AngleInRadians) const
{
	FRotator TempRot = InOutViewRotation;
	TempRot.Yaw += FMath::RadiansToDegrees(AngleInRadians);
	InOutViewRotation = TempRot;

	FVector TempLoc = InOutViewLocation;
	const float AngleSin = FMath::Sin(AngleInRadians);
	const float AngleCos = FMath::Cos(AngleInRadians);
	TempLoc.X -= TargetLocation.X;
	TempLoc.Y -= TargetLocation.Y;

	const float RotX = TempLoc.X * AngleCos - TempLoc.Y * AngleSin;
	const float RotY = TempLoc.X * AngleSin + TempLoc.Y * AngleCos;
	TempLoc.X = RotX + TempLoc.X;
	TempLoc.Y = RotY + TempLoc.Y;
	InOutViewLocation = TempLoc;
}

bool UKeepLineOfSight::ProcessViewRotation(AActor* ViewTarget, float DeltaTime, FRotator& OutViewRotation, FRotator& OutDeltaRot)
{
	Super::ProcessViewRotation(ViewTarget, DeltaTime, OutViewRotation, OutDeltaRot);
	if (OwnerHasChangedCamera())
	{
		return false;
	}
	FVector DesiredLocation = CameraOwner->GetCameraLocation();
	FRotator DesiredRotation = CameraOwner->GetCameraRotation();
	const FVector TargetLocation = GetViewTarget()->GetActorLocation();
	float DesiredAngleInRads = 0.f;
	// check from left close to the actual camera angle
	float CheckAngleInRads = -StepSizeInRadians;
	while (CheckAngleInRads >= -MaxAngleInRads)
	{
		RotateAroundLocation(TargetLocation, DesiredLocation, DesiredRotation, CheckAngleInRads);
		if (!IsInLineOfSight(TargetLocation, DesiredLocation))
		{
			// Found obstacle
			DesiredAngleInRads += CheckAngleInRads + MaxAngleInRads;
			break;
		}
		// Check further away
		CheckAngleInRads -= StepSizeInRadians;
	}
	// check from right !
	CheckAngleInRads = StepSizeInRadians;
	while (CheckAngleInRads <= StepSizeInRadians)
	{
		RotateAroundLocation(TargetLocation, DesiredLocation, DesiredRotation, CheckAngleInRads);
		if (!IsInLineOfSight(TargetLocation, DesiredLocation))
		{
			DesiredAngleInRads += CheckAngleInRads - MaxAngleInRads;
			break;
		}
		// check further away
		CheckAngleInRads += StepSizeInRadians;
	}
	//Apply Rotation
	const float ApplyAngleInRads = FMath::Clamp(DesiredAngleInRads,
		-RotationSpeed * DeltaTime,
		RotationSpeed * DeltaTime);
	OutDeltaRot.Yaw += FMath::RadiansToDegrees(ApplyAngleInRads);
	return false;
}

bool UKeepLineOfSight::ModifyCamera(float DeltaTime, FMinimalViewInfo& InOutPOV)
{
	Super::ModifyCamera(DeltaTime, InOutPOV);
	return false;
}