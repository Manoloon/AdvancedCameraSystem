// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CameraModifierACS.h"
#include "KeepLineOfSight.generated.h"

/**
 * Keep line of sight with the target (could it be the player or another object)
 */
UCLASS(Abstract,Blueprintable)
class ACAMSYS_API UKeepLineOfSight : public UCameraModifierACS
{
	GENERATED_BODY()

	bool IsInLineOfSight(const FVector& Origin, const FVector& Target) const;
	void RotateAroundLocation(const FVector& TargetLocation, FVector& InOutViewLocation,
								FRotator& InOutViewRotation, const float AngleInRadians) const;
public:
	virtual bool ProcessViewRotation(AActor* ViewTarget, float DeltaTime, FRotator& OutViewRotation, FRotator& OutDeltaRot) override;
	virtual bool ModifyCamera(float DeltaTime, FMinimalViewInfo& InOutPOV) override;

	// How far from the current camera should we check for obstacles (this would be PI/2)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	float MaxAngleInRads = 1.5f;
	//Precision for looking obstacles
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	float StepSizeInRadians = 0.3f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	float RotationSpeed = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	TEnumAsByte<ECollisionChannel> LOS_ProbeChannel = ECC_Camera;
};
