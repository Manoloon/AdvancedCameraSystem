// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Camera/PlayerCameraManager.h"
#include "CoreMinimal.h"
#include "Structs/SettingsStructs.h"
#include "PlayerCameraManagerACS.generated.h"

class UCameraComponent;
class USpringArmComponentACS;
class UOneTimeCameraMode;
class UPermanentCameraMode;

DECLARE_DELEGATE_OneParam(FOnCameraDistanceToDitherFX, float /*DitherValue*/);

UCLASS(Abstract)
class ACAMSYS_API APlayerCameraManagerACS : public APlayerCameraManager
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	UPermanentCameraMode* GetCurrentCameraModeSettings() const;

	UFUNCTION(BlueprintCallable)
	void ApplyCameraModeSettings(
		const TSubclassOf<UOneTimeCameraMode>& CameraModeClass);

	UFUNCTION(BlueprintCallable)
	bool IsInstantModifierClassApplied(
		const TSubclassOf<UOneTimeCameraMode>& InstantModifier) const;

	UFUNCTION(BlueprintCallable)
	void ToggleInstantModifier(const TSubclassOf<UOneTimeCameraMode>& InstantModifierClass);

	UFUNCTION(BlueprintCallable)
	bool IsInstantModifierApplied(const UOneTimeCameraMode* NewInstantModifier) const;

	UFUNCTION(BlueprintCallable)
	void RemoveInstantModifier(const UOneTimeCameraMode* InstantModifier);

	UFUNCTION(BlueprintCallable)
	void ApplyInstantModifier(const UOneTimeCameraMode* InstantModifier);

	UFUNCTION(BlueprintCallable)
	USpringArmComponentACS* GetCurrentSpringArmComponent() const;

	UFUNCTION(BlueprintCallable)
	UCameraComponent* GetCurrentCameraComponent() const;

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

	FOnCameraDistanceToDitherFX OnCameraDistanceToDitherFX;

private:
	virtual void
	AssignViewTarget(AActor* NewTarget, FTViewTarget& VT,FViewTargetTransitionParams TransitionParams) override;
	virtual void UpdateCamera(float DeltaTime) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	void SetSpringArmRefFromOwner();
	void SetCurrentCameraReference();

	void UpdateInstantModifiersSet(const UOneTimeCameraMode* InstantModifier);
	void InternalApplyInstantModifier(const UOneTimeCameraMode* InstantModifier);
	void InternalRemoveInstantModifier(const UOneTimeCameraMode* InstantModifier);

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
	TObjectPtr<UPermanentCameraMode> CurrentCameraModeSettings;

	UPROPERTY()
	TSet<FString> InstantModifiersApplied;

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
};
