// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
/*
 * CameraModifierACS is the abstract class to create the camera modifiers for the system.
 */
#include "CoreMinimal.h"
#include "Structs/SettingsStructs.h"
#include "Camera/CameraModifier.h"
#include "CameraModifierACS.generated.h"

UCLASS(Abstract,BlueprintType)
class ACAMSYS_API UCameraModifierACS : public UCameraModifier
{
	GENERATED_BODY()
public:
	virtual bool ProcessViewRotation(AActor* ViewTarget, float DeltaTime, FRotator& OutViewRotation, FRotator& OutDeltaRot) override;

	FCamInfoForModifiers GetCurrentModifiers() const;

	UPROPERTY(EditAnywhere, Category = Settings)
	float PlayerInputCooldown = 1.0f;

protected:
	bool OwnerHasChangedCamera() const;

private:
	FCamInfoForModifiers CurrentModifiers;
	FCamInfoForModifiers TargetModifiers;
	float TotalTransitionTime;
	float RemainingTransitionTime;
	float CooldownRemaining;
};
