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

	/**
	 * @brief Interface used in PlayerCameraManager to actively set the length of the Spring Arm.
	 * It is clamp between the MinLength and MaxLength variables.
	 * @param NewLength This is the new length for the current spring arm.
	 * @param TransitionTime the time to interpolate the current spring arm length to the new one.
	 */
	void ChangeSpringArmLength(const float NewLength, const float TransitionTime);
	
	/**
	 * @brief This utility is used by the PlayerCameraManager to internally apply the One-time Camera modes
	 * changes on the Spring arm length by extending the Min and Max spring arm Length.
	 * @param MinOffset Offset adding to the MinLength
	 * @param MaxOffset Offset adding to the MaxLength
	 * @param NewTransitionTime Transition speed to apply the changes on the spring Arm.
	 */
	void AddSpringArmLengthLimits(const float MinOffset, const float MaxOffset, const float NewTransitionTime);
	
	/**
	 * brief This method is being used to set the Min and Max length limits for the Spring arm, and
	 * its being set using the Min Line Of Sight and Max Line Of Sight.
	 * @param Min 
	 * @param Max 
	 * @param NewTransitionTime 
	 */
	void SetSpringArmLengthLimits(const float Min, const float Max, const float NewTransitionTime);

	/**
	 * @brief Set the Socket offset for the point of the spring arm where the camera is sit.
	 * @param NewOffset 
	 * @param TransitionTime 
	 */
	void SetSocketOffset(const FVector& NewOffset, const float TransitionTime);
	/**
	 * @brief Set an offset to the end of the spring arm where is the playerPawn.
	 * @param NewOffset 
	 */
	void SetTargetOffset(const FVector& NewOffset);
	
	UPROPERTY()
	TObjectPtr<UCurveFloat> RotationLagCurve;
	UPROPERTY()
	TObjectPtr<UCurveFloat> LocationLagCurve;
	
	virtual void OnRegister() override;
	virtual void BeginPlay() override;
	
protected:
	UPROPERTY(EditAnywhere,Category = Settings)
	float LagInterpSpeed = 5.0f;
	virtual void UpdateDesiredArmLocation(bool bDoTrace, bool bDoLocationLag, bool bDoRotationLag, float DeltaTime) override;
	
private:
	/// this is the Player Max walk speed and 
	/// its used to ease the transition for the Location and Rotation lag.
	float MaxPlayerSpeed = 1300.0f;
	UPROPERTY()
	TObjectPtr<ACharacter> OwnerPawn;
	FVector SocketOffsetModifier = FVector::ZeroVector;
	FVector FormerSocketOffset;
	float TargetArmLengthModifier;
	float SpringArmLengthTransitionSpeed;
	float SocketOffsetTransitionSpeed;
	float MinLength;
	float MaxLength;
	float SmoothedSpeed = 0.f;
	
#if !UE_BUILD_SHIPPING
	void DebugInfo(float SpringLength) const;
#endif
};