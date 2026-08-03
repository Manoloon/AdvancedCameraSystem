// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#pragma once
/**
 * @brief PlayerCameraManagerACS is the custom PlayerCameraManager required for the system to work.
 * Its need to be set in the PlayerController as default.
 */
#include "Camera/PlayerCameraManager.h"
#include "CoreMinimal.h"
#include "PlayerCameraManagerACS.generated.h"

class UCameraComponent;
class USpringArmComponentACS;
class UOneTimeCameraMode;
class UPermanentCameraMode;
struct FCameraConfig;

DECLARE_DELEGATE_OneParam(FOnCameraDistanceToDitherFX, float /*DitherValue*/);

UCLASS(Blueprintable)
class ACAMSYS_API APlayerCameraManagerACS : public APlayerCameraManager
{
	GENERATED_BODY()

public:
	/// @return A pointer to a UPermanentCameraMode
	UFUNCTION(BlueprintCallable)
	UPermanentCameraMode* GetCurrentCameraModeSettings() const;

	/// @brief Apply a Camera mode by class, make it easy for designers.
	/// @param PermanentCameraModeClass
	UFUNCTION(BlueprintCallable)
	void ApplyCameraModeSettingsByClass(const TSubclassOf<UPermanentCameraMode>& PermanentCameraModeClass);

	/// @brief Apply a Camera mode by pointer.
	/// @param PermanentCameraMode 
	UFUNCTION(BlueprintCallable)
	void ApplyCameraModeSettings(UPermanentCameraMode* PermanentCameraMode);

	/** @brief Enables or disables the one-time camera mode by its class, by creating an instance of it.
	*	If the new One time Camera mode is being used, it will be removed. 
	*	Otherwise, a new instance of the specified class will be activated.
	* @param OneTimeCameraModeClass One-Time Camera Mode by class 
	**/
	
	UFUNCTION(BlueprintCallable)
	void ToggleOneTimeCameraModeByClass(const TSubclassOf<UOneTimeCameraMode>& OneTimeCameraModeClass);
	/** @brief Enables or disables the one-time camera mode.
	*	If the new One time Camera mode is being used, it will be removed. 
	*	Otherwise, it will become active.
	* @param OneTimeCameraMode One-Time Camera Mode instance to toggle.
	**/
	UFUNCTION(BlueprintCallable)
	void ToggleOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode);
	
	/// @return true if the UOneTimeCameraMode is being applied at the moment, otherwise, false.
	/// @param OneTimeCameraMode
	UFUNCTION(BlueprintCallable)
	bool IsOneTimeCameraModeApplied(const UOneTimeCameraMode* OneTimeCameraMode) const;

	/** @brief Remove the one-time camera mode instance from the system.
	* All settings from the camera mode are remove with it.
	* @param OneTimeCameraMode
	**/
	UFUNCTION(BlueprintCallable)
	void RemoveOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode);

	/**
	 * @brief Apply the one-time camera mode by creating an instance of the class: 
	 * If the priority is 0, first it checks if no other 
	 * one-time camera mode its being applied, otherwise, it will be discarded.
	 * If the priority is 1, it will apply, this could overwrite other one-time parameters at the time.
	 * @param OneTimeCameraModeClass 
	 */
	UFUNCTION(BlueprintCallable)
	void ApplyOneTimeCameraModeByClass(const TSubclassOf<UOneTimeCameraMode>& OneTimeCameraModeClass);
	
	/**
	 * @brief Apply an instance of one-time camera mode. 
	 * If the priority is 0, first it checks if no other 
	 * one-time camera mode its being applied, otherwise, it will be discarded.
	 * If the priority is 1, it will apply, this could overwrite other one-time parameters at the time.
	 * @param OneTimeCameraMode
	 */
	UFUNCTION(BlueprintCallable)
	void ApplyOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode);

	/// @return the ACS spring arm component.
	UFUNCTION(BlueprintCallable)
	USpringArmComponentACS* GetSpringArmComponent() const;

	/// @return the current Camera Component from the View Target
	UFUNCTION(BlueprintCallable)
	UCameraComponent* GetCameraComponent() const;
	/**
	 * @brief Change the Spring Arm Length, is useful for the camera modifiers
	 * since they get direct access to the Player Camera Manager
	 * @param NewLength 
	 */
	void SetSpringArmLength(const float NewLength) const;
	/**
	 * @brief Useful for the camera modifiers
	 * since they get direct access to the Player Camera Manager
	 * @return the Max FOV value for the camera saved in the PlayerCameraManager set by Any Camera Mode instance.
	 */
	float GetMaxCameraFOV() const;
	/**
	 * @brief Useful for the camera modifiers
	 * since they get direct access to the Player Camera Manager
	 * @return the Min FOV value for the camera saved in the PlayerCameraManager set by Any Camera Mode instance.
	 */
	float GetMinCameraFOV() const;

	/**
	 * @brief Enable the use of a Shader material to dither the player mesh if 
	 * its occlude the camera view. It could also be used to dither other objects,
	 * but it needs more implementation on those actors.
	 */
	UFUNCTION(BlueprintCallable)
	void EnableDitherFX();
	
	/// Disable the dithered Fx, useful when you are doing cinematics.
	UFUNCTION(BlueprintCallable)
	void DisableDitherFX();

	/// Callback to be bind by an actor if needs to update dither Fx on his mesh.
	/// @brief Example : PlayerCharacter : 
	/// CameraManager->OnCameraDistanceToDitherFX.BindUObject(this, &APlayer::UpdateDitherFXOpacity);
	FOnCameraDistanceToDitherFX OnCameraDistanceToDitherFX;

	virtual void AssignViewTarget(AActor* NewTarget, FTViewTarget& VT,
	                              FViewTargetTransitionParams TransitionParams) override;

	virtual void UpdateCamera(float DeltaTime) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
private:
	void EnableSpringArmRotationLag(const float RotationLagSpeed) const;
	void EnableSpringArmRotationLag(const TObjectPtr<class UCurveFloat>& RotationLagCurve) const;
	void DisableSpringArmRotationLag() const;

	void EnableSpringArmLocationLag(const float LocationLagSpeed, const float LagMaxDistance) const;
	void EnableSpringArmLocationLag(const TObjectPtr<class UCurveFloat>& LocationLagCurve,
									const float LagMaxDistance) const;
	void DisableSpringArmLocationLag() const;
#if !UE_BUILD_SHIPPING
	void DebugAndPrintCameraSettings() const;
#endif
	void UpdateOneTimeCameraModesSet(const UOneTimeCameraMode* OneTimeCameraMode);
	void InternalApplyPermanentCameraMode(UPermanentCameraMode* NewPermanentMode);
	void InternalApplyOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode);
	void InternalRemoveOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode);
	void UpdateCameraSettings(const FCameraConfig& NewCameraConfig);
	void ChangeCurrentModifiers(UPermanentCameraMode* NewCameraSettings);
	void AddFOV(const float Value);
	void SubFOV(const float Value);
	void UpdateCameraFOV(float DeltaTime);

	float GetCameraToPawnDistSquared() const;

	UFUNCTION()
	void CalculateDitherEffect();
	UPROPERTY(EditAnywhere, Category = Settings)
	TEnumAsByte<ECollisionChannel> LostOfSightProbeChannel = ECC_Camera;

	bool bEnabledDitherFX = false;

	UPROPERTY()
	UPermanentCameraMode* CurrentCameraModeSettings;

	UPROPERTY()
	TMap<FString, const UOneTimeCameraMode*> OneTimeCameraModesApplied;

	UPROPERTY()
	USpringArmComponentACS* CurrentSpringArm;

	UPROPERTY()
	UCameraComponent* CurrentCamera;

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
