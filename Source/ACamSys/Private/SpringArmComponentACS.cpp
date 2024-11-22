// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#include "SpringArmComponentACS.h"

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
	TargetArmLengthModifier = NewLengthToAdd;
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

void USpringArmComponentACS::UpdateDesiredArmLocation(bool bDoTrace, bool bDoLocationLag, bool bDoRotationLag, float DeltaTime)
{
	Super::UpdateDesiredArmLocation(bDoTrace, bDoLocationLag, bDoRotationLag, DeltaTime);
	if(GetWorld() && GetWorld()->IsGameWorld())
	{
		const float TempLength = FMath::FInterpConstantTo(TargetArmLength, TargetArmLengthModifier, DeltaTime, SpringArmLengthTransitionSpeed);
		TargetArmLength = FMath::Clamp(TempLength, MinLength, MaxLength);
		SocketOffset = FMath::VInterpConstantTo(SocketOffset, SocketOffsetModifier, DeltaTime, SocketOffsetTransitionSpeed);
	}
}