// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Structs/SettingsStructs.h"
#include "OneTimeCameraMode.generated.h"

/**
 * @brief OneTimeCameraMode is the mode that applies only one time
 * Camera modes are the main concept in the camera system.
 * 
 * They contain and define all the variables that give camera their basic behavior.
 * They store a default set of camera modifiers that should be active with the mode at any time Only
 * one camera mode can be active at any time.
 * Example of modes: Outdoor camera mode, 3x3 spaceship module mode, ADS mode
 */
/// @addtogroup CameraModes 
/// @{
UCLASS(BlueprintType)
class ACAMSYS_API UOneTimeCameraMode : public UDataAsset
{
	GENERATED_BODY()

public:
	/// Set the duration for the camera mode
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	float EffectDuration = 2.f;
	/// By default, all One Time Camera Mode(OTCM) have priority 1 , but if you need to not run a OTCM if another is ,
	/// you set priority of this one to 0 , and it will not run if others are running.
	UPROPERTY(EditAnywhere)
	int Priority=1;
	/// if true disable the Permanent camera mode set at that time.
	/// If true  the Arm length will apply changes using target length, otherwise, it only will limit the spring arm 
	/// length by new minimum and maximum.
	UPROPERTY(EditAnywhere)
	bool bCameraModeDisable = true;
	/// If true, disables all active Camera Modifiers to prevent them from interfering with this camera effect.
	UPROPERTY(EditAnywhere , meta = (EditCondition = "bCameraModeDisable == false",EditConditionHides))
	bool bCameraModifierDisable = false;
	/// Settings
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FCameraConfig CameraConfig;
};
/// @}