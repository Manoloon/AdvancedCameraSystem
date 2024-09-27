// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#pragma once
/*
 * PlayerCameraManagerACS is the custom PlayerCameraManager required for the system to work.
 * Its need to be set in the PlayerController as default.
 */
#include "Camera/PlayerCameraManager.h"
#include "CoreMinimal.h"
#include "Structs/SettingsStructs.h"
#include "PlayerCameraManagerACS.generated.h"

class UCameraComponent;
class USpringArmComponentACS;
class UOneTimeCameraMode;
class UPermanentCameraMode;

DECLARE_DELEGATE_OneParam(FOnCameraDistanceToDitherFX, float /*DitherValue*/);

UCLASS(Blueprintable)
class ACAMSYS_API APlayerCameraManagerACS : public APlayerCameraManager
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	UPermanentCameraMode* GetCurrentCameraModeSettings() const;

	UFUNCTION(BlueprintCallable)
	void ApplyCameraModeSettingsByClass(const TSubclassOf<UPermanentCameraMode>& PermanentCameraModeClass);
	UFUNCTION(BlueprintCallable)
	void ApplyCameraModeSettings(UPermanentCameraMode* PermanentCameraMode);

	UFUNCTION(BlueprintCallable)
	bool IsOneTimeCameraModeClassApplied(
		const TSubclassOf<UOneTimeCameraMode>& OneTimeCameraMode) const;

	UFUNCTION(BlueprintCallable)
	void ToggleOneTimeCameraModeByClass(const TSubclassOf<UOneTimeCameraMode>& OneTimeCameraModeClass);
	UFUNCTION(BlueprintCallable)
	void ToggleOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode);
	UFUNCTION(BlueprintCallable)
	bool IsOneTimeCameraModeApplied(const UOneTimeCameraMode* OneTimeCameraMode) const;

	UFUNCTION(BlueprintCallable)
	void RemoveOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode);

	UFUNCTION(BlueprintCallable)
	void ApplyOneTimeCameraModeByClass(const TSubclassOf<UOneTimeCameraMode>& OneTimeCameraModeClass);
	UFUNCTION(BlueprintCallable)
	void ApplyOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode);

	UFUNCTION(BlueprintCallable)
	USpringArmComponentACS* GetSpringArmComponent() const;

	UFUNCTION(BlueprintCallable)
	UCameraComponent* GetCameraComponent() const;

	void SetSpringArmDistance(const float NewDistance) const;

	void EnableSpringArmRotationLag(const float RotationLagSpeed) const;
	void DisableSpringArmRotationLag() const;

	void EnableSpringArmLocationLag(const float LocationLagSpeed,
		const float LagMaxDistance) const;
	void DisableSpringArmLocationLag() const;

	float GetMaxCameraFOV() const;
	float GetMinCameraFOV() const;

	UPROPERTY(EditAnywhere, Category = Settings)
	float LineOfSightProbeSize = 12.0f;
	// If the character have any Dither FX applying to avoid the camera clip with the mesh, turn this True.
	UPROPERTY(EditAnywhere, Category = Settings)
	bool bUseDitherFX = false;

	FOnCameraDistanceToDitherFX OnCameraDistanceToDitherFX;

private:
	virtual void
	AssignViewTarget(AActor* NewTarget, FTViewTarget& VT, FViewTargetTransitionParams TransitionParams) override;
	virtual void UpdateCamera(float DeltaTime) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	void SetSpringArmRefFromOwner();
	void SetCurrentCameraReference();

	void UpdateOneTimeCameraModesSet(const UOneTimeCameraMode* OneTimeCameraMode);
	void InternalApplyOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode);
	void InternalRemoveOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode);
	void UpdateCameraSettings(const FCameraConfig& NewCameraConfig);
	void ChangeCurrentModifiers(UPermanentCameraMode* NewCameraSettings);
	void AddFOV(const float Value);
	void SubFOV(const float Value);
	void UpdateCameraFOV(float DeltaTime);

	float GetCameraToPawnDistSquared() const;

	bool IsOwnerLocalController() const;

	void CalculateDitherEffect();
	UPROPERTY(EditAnywhere, Category = Settings)
	TEnumAsByte<ECollisionChannel> LostOfSightProbeChannel = ECC_Camera;

	UPROPERTY()
	UPermanentCameraMode* CurrentCameraModeSettings;

	UPROPERTY()
	TSet<FString> OneTimeCameraModesApplied;

	UPROPERTY()
	USpringArmComponentACS* CurrentSpringArm;

	UPROPERTY()
	TObjectPtr<UCameraComponent> CurrentCamera;

	float FOVLerpSpeed = 20.0f;
	float MaxFOV = 90.0f;
	float MinFOV = 40.0f;
	float TargetFOV = DefaultFOV;
	float CurrentDistCameraToOwnerPawn = 0.0f;
	float MinDitherCameraThreshold = 30.0f;
	float MaxDitherCameraThreshold = 120.0f;
	FTimerHandle DitherTimerHandler;
	FTimerHandle OneTimeModeHandler;
};