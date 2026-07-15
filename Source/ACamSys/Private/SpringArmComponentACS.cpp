// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#include "SpringArmComponentACS.h"

#include "GameFramework/Character.h"
#if !UE_BUILD_SHIPPING
namespace ACSCvars
{
	static bool ACSSpringDebug = false;
	static FAutoConsoleVariableRef CVarACSSpringArmDebug(
		TEXT("ACS.Debug.SpringArm.Enable"),
		ACSSpringDebug,
		TEXT("Enable ACS SpringArmComponent Debug"));
}
#endif
float USpringArmComponentACS::GetSpringArmLengthMinLimit() const
{
	return MinLength;
}

float USpringArmComponentACS::GetSpringArmLengthMaxLimit() const
{
	return MaxLength;
}

void USpringArmComponentACS::ChangeSpringArmLength(const float NewLengthToAdd, const float TransitionTime)
{
	TargetArmLengthModifier = FMath::Clamp(NewLengthToAdd, MinLength, MaxLength);
	SpringArmLengthTransitionSpeed = TransitionTime;
}

void USpringArmComponentACS::AddSpringArmLengthLimits(const float Min, const float Max, const float NewTransitionTime)
{
	MinLength += Min;
	MaxLength += Max;
	SpringArmLengthTransitionSpeed = NewTransitionTime;
}

void USpringArmComponentACS::SetSpringArmLengthLimits(const float Min, const float Max, const float NewTransitionTime)
{
	MinLength = Min;
	MaxLength = Max;
	SpringArmLengthTransitionSpeed = NewTransitionTime;
}

void USpringArmComponentACS::SetSocketOffset(const FVector& NewOffset, const float TransitionTime)
{
	SocketOffsetModifier = NewOffset;
	SocketOffsetTransitionSpeed = TransitionTime;
}

void USpringArmComponentACS::AddSocketOffset(const FVector& NewVector, const float TransitionTime)
{
	SocketOffsetModifier = SocketOffset + NewVector;
	FormerSocketOffset = SocketOffsetModifier;
	SocketOffsetTransitionSpeed = TransitionTime;
}

void USpringArmComponentACS::SubSocketOffset(const FVector& NewVector, const float TransitionTime)
{
	SocketOffsetModifier = FormerSocketOffset - NewVector;
	SocketOffsetTransitionSpeed = TransitionTime;
}

void USpringArmComponentACS::SetTargetOffset(const FVector& NewOffset)
{
	TargetOffset = NewOffset;
}

void USpringArmComponentACS::OnRegister()
{
	Super::OnRegister();
	OwnerPawn = Cast<ACharacter>(GetOwner());
	if (!OwnerPawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("ACS.UpdateDesiredArmLocation Error"));
	}
}

void USpringArmComponentACS::UpdateDesiredArmLocation(bool bDoTrace, bool bDoLocationLag, bool bDoRotationLag,
                                                      float DeltaTime)
{
	Super::UpdateDesiredArmLocation(bDoTrace, bDoLocationLag, bDoRotationLag, DeltaTime);
	if (GetWorld() && GetWorld()->IsGameWorld())
	{
		const float TempLength = FMath::FInterpConstantTo(TargetArmLength, TargetArmLengthModifier, DeltaTime,
		                                                  SpringArmLengthTransitionSpeed);

		TargetArmLength = FMath::Clamp(TempLength, MinLength, MaxLength);
		SocketOffset = FMath::VInterpConstantTo(SocketOffset, SocketOffsetModifier, DeltaTime,
		                                        SocketOffsetTransitionSpeed);
		if (!bEnableCameraLag && !bEnableCameraRotationLag)
		{
			return;
		}
		if (OwnerPawn == nullptr)
		{
			return;
		}
		const float CurrentSpeed = OwnerPawn->GetVelocity().Size();

		// Interpolate from previous frame's smoothed value toward actual speed
		SmoothedSpeed = FMath::FInterpTo(SmoothedSpeed, CurrentSpeed, DeltaTime, LagInterpSpeed); // InterpSpeed ~ 5–10

		// Normalize and clamp for curve lookup
		const float NormalizedSpeed = FMath::Clamp(SmoothedSpeed / MaxPlayerSpeed, 0.0f, 1.0f);
		if (LocationLagCurve)
		{
			CameraLagSpeed = LocationLagCurve->GetFloatValue(NormalizedSpeed);
		}
		if (RotationLagCurve)
		{
			CameraRotationLagSpeed = RotationLagCurve->GetFloatValue(NormalizedSpeed);
		}
#if WITH_EDITOR
		DebugInfo(TempLength);
#endif
	}
}
#if !UE_BUILD_SHIPPING
void USpringArmComponentACS::DebugInfo(float SpringLength) const
{
	if (!ACSCvars::ACSSpringDebug)
	{
		return;
	}
	DrawDebugBox(GetWorld(), GetOwner()->GetActorLocation() + SocketOffset, FVector{1, 1, 1},
	             FColor::Emerald, false, 0, 1, 1);
	DrawDebugBox(GetWorld(), GetOwner()->GetActorLocation() + TargetOffset, FVector{1, 1, 1},
	             FColor::Purple, false, 0, 1, 1);
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Red, TEXT("Target Arm Length : " +
			                                 FString::SanitizeFloat(TargetArmLength)));
		GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Cyan, TEXT("TempLength : " +
			                                 FString::SanitizeFloat(SpringLength)));
		GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Green, TEXT("Socket Offset modifier : " +
			                                 FString::SanitizeFloat(SocketOffsetModifier.X) + FString::SanitizeFloat
			                                 (SocketOffsetModifier.Y) +
			                                 FString::SanitizeFloat(SocketOffsetModifier.Z)));
		GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Blue, TEXT("Socket Offset : " +
			                                 FString::SanitizeFloat(SocketOffset.X) + FString::SanitizeFloat(
				                                 SocketOffset.Y) +
			                                 FString::SanitizeFloat(SocketOffset.Z)));
		GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Yellow, FString::Printf(TEXT("Pitch : %f"),GetRelativeRotation().Pitch));
		GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Yellow, FString::Printf(TEXT("Yaw : %f"),GetRelativeRotation().Yaw));
		if (bEnableCameraLag)
		{
			GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Orange, TEXT("Location Lag Speed: " +
				                                 FString::SanitizeFloat(CameraLagSpeed)));
		}
		if (bEnableCameraRotationLag)
		{
			GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Orange, TEXT("Rotation Lag Speed: " +
				                                 FString::SanitizeFloat(CameraLagSpeed)));
		}
	}
}
#endif