// The Occultist®, Copyright 2024, Pentakill Studios SL. All rights reserved.

#include "Modifiers/KeepLineOfSight.h"

bool UKeepLineOfSight::IsInLineOfSight(const FVector& Origin, const FVector& Target) const
{
	FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(SpringArm), false, GetViewTarget());
	FHitResult Result;
	GetWorld()->SweepSingleByChannel(Result, Origin, Target, FQuat::Identity, LOS_ProbeChannel,
	                                 FCollisionShape::MakeSphere(LineOfSightProbeSize), QueryParams);
#if !UE_BUILD_SHIPPING
	if (bDebug)
	{
		const bool bVisible = !Result.bBlockingHit;
		DrawDebugLine(GetWorld(), Origin, Target, bVisible? FColor::Green : FColor::Red, false, 0.1f, 0, 0.5);
		DrawDebugSphere(GetWorld(), Target, LineOfSightProbeSize, 6, FColor::Cyan, false, 0.1f, 0, 0.5);
	}
#endif
	return !Result.bBlockingHit;
}

// ReSharper disable once CppMemberFunctionMayBeStatic
void UKeepLineOfSight::RotateAroundLocation(const FVector& TargetLocation, FVector& InOutViewLocation,
                                            FRotator& InOutViewRotation, const float AngleInRadians) const
{
	const FQuat Rotation(FVector::UpVector, AngleInRadians);
	const FVector Offset = InOutViewLocation - TargetLocation;
	InOutViewLocation = TargetLocation + Rotation.RotateVector(Offset);
	InOutViewRotation.Yaw += FMath::RadiansToDegrees(AngleInRadians);
}

bool UKeepLineOfSight::ProcessViewRotation(AActor* ViewTarget, float DeltaTime, FRotator& OutViewRotation,
                                           FRotator& OutDeltaRot)
{
	Super::ProcessViewRotation(ViewTarget, DeltaTime, OutViewRotation, OutDeltaRot);
	
	if (OwnerHasChangedCamera())
	{
		return false;
	}
	const FVector DesiredLocation = CameraOwner->GetCameraLocation();
	const FRotator DesiredRotation = CameraOwner->GetCameraRotation();
	const float MaxAngleInRads = FMath::DegreesToRadians(MaxSearchInDegrees);
	const float StepSizeInRadians = FMath::DegreesToRadians(SearchStepDegrees);
	const FVector TargetLocation = GetViewTarget()->GetActorLocation();
	float DesiredAngleInRads = 0.f;
	if (IsInLineOfSight(DesiredLocation,TargetLocation))
	{
		// check from left close to the actual camera angle
		float CheckAngleInRads = -StepSizeInRadians;
		while (CheckAngleInRads >= -MaxAngleInRads)
		{
			FVector TestLocation = DesiredLocation;
			FRotator TestRotation = DesiredRotation;
			RotateAroundLocation(TargetLocation, TestLocation, TestRotation, CheckAngleInRads);
			if (!IsInLineOfSight(TestLocation, TargetLocation))
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
		while (CheckAngleInRads <= MaxAngleInRads)
		{
			FVector TestLocation = DesiredLocation;
			FRotator TestRotation = DesiredRotation;
			RotateAroundLocation(TargetLocation, TestLocation, TestRotation, CheckAngleInRads);
			if (!IsInLineOfSight(TestLocation, TargetLocation))
			{
				DesiredAngleInRads += CheckAngleInRads - MaxAngleInRads;
				break;
			}
			// check further away
			CheckAngleInRads += StepSizeInRadians;
		}
	}
	//Apply Rotation
	const float ApplyAngleInRads = FMath::Clamp(DesiredAngleInRads,
		-RotationSpeed * DeltaTime,
		RotationSpeed * DeltaTime);
	OutDeltaRot.Yaw += FMath::RadiansToDegrees(ApplyAngleInRads);
	return false;
}
