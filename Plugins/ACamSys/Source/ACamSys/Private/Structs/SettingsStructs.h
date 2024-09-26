// Fill out your copyright notice in the Description page of Project Settings.
/*
 * This class holds all the config settings that can be made for modes
 * Spring Arm , Camera distance ,FOV , rotation
 */
#pragma once

#include "CoreMinimal.h"
#include "SettingsStructs.generated.h"

USTRUCT(BlueprintType)
struct FCameraSpringArmConfig
{
	GENERATED_BODY()

	// TODO : See this how its apply
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float SpringArmLengthModifier = 600.0f;

	// represents the rate or speed at which the Spring Arm Length changes over time (units per second)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float SpringArmLengthTransitionSpeed = 400.0f;

	// represents the rate or speed at which the SocketOffset value changes over time (units per second)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float SocketOffsetTransitionSpeed = 200.0f;

	// TODO : See this how its apply
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector SocketOffsetModifier = { FVector::ZeroVector };

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector TargetOffset = { FVector::ZeroVector };

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bCameraLocationLag = false;

	// represents the rate or speed at which the CameraLocation reach target location (units per second)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "bCameraLocationLag"))
	float CameraLocationLagSpeed = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "bCameraLocationLag"))
	float MaxLagDistance = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bCameraRotationLag = true;

	// represents the rate or speed at which the cameraRotation reach target rotation (units per second)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "bCameraRotationLag"))
	float CameraRotationLagSpeed = 10.0f;
};

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

	// represents the rate or speed at which the FOV value changes over time (units per second)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 0.001f, ClampMax = 100.0f))
	float FOVLerpSpeed = 100.0f;
};

USTRUCT(BlueprintType)
struct FCameraRotationConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinPitch = -60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaxPitch = 80.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinYaw = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaxYaw = 359.9f;
};

USTRUCT(BlueprintType)
struct FCameraConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinLineOfSight = 75.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaxLineOfSight = 900.0f;

	/*	This values could be use to handle dither FX on the character
	 *	to avoid clipping with the camera.
	 *	To use this values you need to turn true the var bUseDitherFX in the CameraManagerACS
	 *	Max distance from the player for DitherFX
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 100.0f, ClampMax = 200.0f))
	float MaxDistanceCamPlayer = 120.0f;
	// Min distance from the player for Activate DitherFX
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 20.0f, ClampMax = 120.0f))
	float MinDistanceCamPlayer = 40.0f;

	UPROPERTY(EditAnywhere)
	FCameraSpringArmConfig SpringArmSettings;
	UPROPERTY(EditAnywhere)
	FCameraFOVConfig FOVSettings;
	UPROPERTY(EditAnywhere)
	FCameraRotationConfig CamRotationSettings;
};

USTRUCT(BlueprintType)
struct FCamInfoForModifiers
{
	GENERATED_BODY()

	bool IsEqualTo(const FCamInfoForModifiers& Other) const;
	bool IsZero() const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	float FOV = 90.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	float SpringArmLength = 400.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	float DOF_FocalDistance = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	FVector SpringArmSocketOffset = { FVector::ZeroVector };
};