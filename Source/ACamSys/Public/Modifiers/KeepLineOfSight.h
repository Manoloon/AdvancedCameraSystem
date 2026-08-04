// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CameraModifierACS.h"
#include "KeepLineOfSight.generated.h"

/**
 * @brief Camera Modifier that keep line of sight with the target (could it be the player or another object)
 */
UCLASS(Abstract, Blueprintable)
class ACAMSYS_API UKeepLineOfSight : public UCameraModifierACS
{
	GENERATED_BODY()

public:
	/// @cond INTERNAL
	virtual bool ProcessViewRotation(AActor* ViewTarget, float DeltaTime, FRotator& OutViewRotation, FRotator& OutDeltaRot) override;
	/// @endcond 
	/// 
	/// How far from the current camera should we check for obstacles (this would be PI/2)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	float MaxSearchInDegrees = 20.f;
	
	/// Precision for looking obstacles
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	float SearchStepDegrees = 2.f;
	
	/// The rotation speed * DeltaTime to move the camera to the desired position
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	float RotationSpeed = 1.0f;
	
	/// Collision channel to test Line Of Sight
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	TEnumAsByte<ECollisionChannel> LOS_ProbeChannel = ECC_Camera;
	
private:
	bool IsInLineOfSight(const FVector& Origin, const FVector& Target) const;
	void RotateAroundLocation(const FVector& TargetLocation, FVector& InOutViewLocation,
		FRotator& InOutViewRotation, const float AngleInRadians) const;
};
