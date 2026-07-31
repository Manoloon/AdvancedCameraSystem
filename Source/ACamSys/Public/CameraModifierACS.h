// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#pragma once
/*
 * CameraModifierACS is the abstract class to create the camera modifiers for the system.
 */
#include "CoreMinimal.h"
#include "Structs/SettingsStructs.h"
#include "Camera/CameraModifier.h"
#include "CameraModifierACS.generated.h"

UCLASS(Abstract, BlueprintType)
class ACAMSYS_API UCameraModifierACS : public UCameraModifier
{
	GENERATED_BODY()

public:
	virtual void AddedToCamera(APlayerCameraManager* Camera) override;
	virtual bool ProcessViewRotation(AActor* ViewTarget, float DeltaTime, FRotator& OutViewRotation, FRotator& OutDeltaRot) override;

	FCamInfoForModifiers GetCurrentModifiers() const;

	UPROPERTY(EditAnywhere, Category = Settings)
	float PlayerInputCooldown = 1.0f;

protected:
	bool OwnerHasChangedCamera() const;
	UPROPERTY(EditAnywhere, Category = Settings)
	float LineOfSightProbeSize = 12.0f;
	UPROPERTY()
	class APlayerCameraManagerACS* CameraManager;
	UPROPERTY()
	APlayerController* OwnerController;
private:
	FCamInfoForModifiers CurrentModifiers;
	FCamInfoForModifiers TargetModifiers;
	float TotalTransitionTime;
	float RemainingTransitionTime;
	float CooldownRemaining;
};