// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#pragma once
/*
 * Custom SpringArm Component to works in tandem with the system.
 */
#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "SpringArmComponentACS.generated.h"

UCLASS(ClassGroup=Camera, meta=(BlueprintSpawnableComponent), hideCategories=(Mobility))
class ACAMSYS_API USpringArmComponentACS : public USpringArmComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	float GetSpringArmLengthMinLimit() const;

	UFUNCTION(BlueprintCallable)
	float GetSpringArmLengthMaxLimit() const;

	void ChangeSpringArmLength(const float NewLengthToAdd, const float TransitionTime);
	void AddSpringArmLengthLimits(const float Min, const float Max, const float NewTransitionTime);
	void SetSpringArmLengthLimits(const float Min, const float Max, const float NewTransitionTime);

	void SetSocketOffset(const FVector& NewOffset, const float TransitionTime);
	void AddSocketOffset(const FVector& NewVector, const float TransitionTime);
	void SubSocketOffset(const FVector& NewVector, const float TransitionTime);

	void SetTargetOffset(const FVector& NewOffset);

protected:
	virtual void UpdateDesiredArmLocation(bool bDoTrace, bool bDoLocationLag, bool bDoRotationLag, float DeltaTime) override;

private:
	FVector SocketOffsetModifier = FVector::ZeroVector;
	FVector FormerSocketOffset;
	float TargetArmLengthModifier;
	float SpringArmLengthTransitionSpeed;
	float SocketOffsetTransitionSpeed;
	float MinLength;
	float MaxLength;
};