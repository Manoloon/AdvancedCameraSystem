// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SettingsStructs.generated.h"

/**
 * @brief Settings structs :  for the Camera and Spring Arm
 */
USTRUCT(BlueprintType)
struct FCameraSpringArmConfig
{
	GENERATED_BODY()
	/// Cap the Min Length of the Spring Arm
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinLength = 75.0f;
	/// Cap the Max Length of the Spring Arm
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaxLength = 900.0f;

	/// Spring Arm Length to apply
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float NewLength = 600.0f;

	/// represents the rate or speed at which the Spring Arm Length changes over time (units per second)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float LengthTransitionSpeed = 400.0f;

	/// represents the rate or speed at which the SocketOffset value changes over time (units per second)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float SocketOffsetTransitionSpeed = 200.0f;

	/// set a new value for the Socket Offset and then it would be apply during a preset time.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector SocketOffsetModifier = { FVector::ZeroVector };

	/// set the new value for the Target Offset during this camera mode.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector TargetOffset = { FVector::ZeroVector };
	/// Toggle the Camera Location log
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bCameraLocationLag = false;

	/// represents the rate or speed at which the CameraLocation reach target location (units per second)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "bCameraLocationLag"))
	float CameraLocationLagSpeed = 10.0f;
	
	/// A curve that map the Camera location lag value with the speed of the Player.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "bCameraLocationLag"))
	TObjectPtr<class UCurveFloat> CameraLocationLagCurve;
	
	/// The Maximum distance the camera target may lag behind the current location.
	/// If set to zero, no max distance is enforced.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "bCameraLocationLag"))
	float MaxLagDistance = 200.0f;

	/// Toggle the Camera Rotation log
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bCameraRotationLag = true;

	/// represents the rate or speed at which the cameraRotation reach target rotation (units per second)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "bCameraRotationLag"))
	float CameraRotationLagSpeed = 10.0f;
	
	/// A curve that map the Camera Rotation lag value with the speed of the Player.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "bCameraRotationLag"))
	TObjectPtr<class UCurveFloat> CameraRotationLagCurve;
};

/**
 * @brief Settings structs :  for Camera FOV
 */
USTRUCT(BlueprintType)
struct FCameraFOVConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 20.0f, ClampMax = 70.0f))
	float MinFOV = 40.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 50.0f, ClampMax = 120.0f))
	float MaxFOV = 90.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float FOV = 85.0f;

	/// represents the rate or speed at which the FOV value changes over time (units per second)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 0.001f, ClampMax = 100.0f))
	float FOVLerpSpeed = 100.0f;
};

/**
 * @brief Settings structs :  for the Camera Rotation
 */
USTRUCT(BlueprintType)
struct FCameraRotationConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinPitch = -60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaxPitch = 80.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(ClampMin=-179.9999f, UIMin=-179.9999f, ClampMax=179.9999f, UIMax=179.9999f, ForceUnits="deg"))
	FFloatRange YawRange = FFloatRange(-179.9999f, 179.9999f);
};

/**
 * @brief Settings structs :  Packet Struct Settings 
 */
/// @addtogroup Structs @{
USTRUCT(BlueprintType)
struct FCameraConfig
{
	GENERATED_BODY()

	/**	This values could be use to handle dither FX on the character
	 *	to avoid clipping with the camera.
	 *	To use this values you need to turn true the var bUseDitherFX in the CameraManagerACS
	 *	Max distance from the player for DitherFX
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 100.0f, ClampMax = 200.0f))
	float MaxDistanceCamPlayer = 120.0f;
	/// Min distance from the player for Activate DitherFX
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 20.0f, ClampMax = 120.0f))
	float MinDistanceCamPlayer = 40.0f;

	UPROPERTY(EditAnywhere)
	FCameraSpringArmConfig SpringArmSettings;
	UPROPERTY(EditAnywhere)
	FCameraFOVConfig FOVSettings;
	UPROPERTY(EditAnywhere)
	FCameraRotationConfig CamRotationSettings;
	UPROPERTY(EditAnywhere)
	FPostProcessSettings CamPostProcessSettings;
};
/// @}