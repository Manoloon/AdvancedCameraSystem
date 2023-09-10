// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SettingsStructs.generated.h"

USTRUCT(BlueprintType)
struct FCameraConfig
  {
    GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = SpringArm)
	float SpringArmLengthModifier = 400.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = SpringArm)
	float MinLineOfSight = 75.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = SpringArm)
	float MaxLineOfSight = 900.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = SpringArm)
	FVector SocketOffsetModifier = { FVector::ZeroVector };

	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = SpringArm)
	FVector TargetOffset = { FVector::ZeroVector };
	
	// Under 100 would be to slow
	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = SpringArm)
	float SpringArmLengthTransitionSpeed = 100.0f;

	// Under 100 would be to slow
	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = SpringArm)
	float SocketOffsetTransitionSpeed = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 20.0f, ClampMax = 70.0f),Category = FOV)
	float MinFOV = 40.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 50.0f, ClampMax = 120.0f),Category = FOV)
	float MaxFOV = 90.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = FOV)
	float FOV = 85.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 0.001f, ClampMax = 100.0f),Category = FOV)
	float FOVLerpSpeed = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = Rotation)
	float MinPitch = -60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = Rotation)
	float MaxPitch = 80.0f;

	// Min Yaw in degrees
	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = Rotation)
	float MinYaw = 0.0f;

	// Max Yaw in degrees
	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = Rotation)
	float MaxYaw = 359.9f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = CameraLag)
	bool bCameraLocationLag = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "bCameraLocationLag"),Category = CameraLag)
	float CameraLocationLagSpeed = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "bCameraLocationLag"),Category = CameraLag)
	float MaxLagDistance = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = CameraLag)
	bool bCameraRotationLag = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "bCameraRotationLag"),Category = CameraLag)
	float CameraRotationLagSpeed = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 100.0f, ClampMax = 200.0f),Category = "Dithering")
	float MaxDistanceCamPlayer = 120.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 20.0f, ClampMax = 120.0f),Category = "Dithering")
	float MinDistanceCamPlayer = 40.0f;	
  };
  
  USTRUCT(BlueprintType)
struct FCameraSpringArmConfig
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float SpringArmLengthModifier = 400.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float SpringArmLengthTransitionSpeed = 4.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float SocketOffsetTransitionSpeed = 2.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bCameraLocationLag = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bCameraRotationLag = true;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "bCameraLocationLag"))
    float CameraLocationLagSpeed = 10.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "bCameraLocationLag"))
    float MaxLagDistance = 200.0f;

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

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 0.001f, ClampMax = 100.0f))
    float FOVLerpSpeed = 5.0f;
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
struct FCameraDistanceConfig
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 100.0f, ClampMax = 200.0f))
    float MaxDistanceCamPlayer = 120.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 20.0f, ClampMax = 120.0f))
    float MinDistanceCamPlayer = 40.0f;
};

USTRUCT(BlueprintType)
struct FBasicCameraConfig
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float MinLineOfSight = 75.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float MaxLineOfSight = 900.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FVector SocketOffsetModifier = { FVector::ZeroVector };

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FVector TargetOffset = { FVector::ZeroVector };

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bCameraLocationLag = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bCameraRotationLag = true;

    FCameraSpringArmConfig SpringArmConfig;

    FCameraFOVConfig FOVConfig;

    FCameraRotationConfig RotationConfig;

    FCameraDistanceConfig DistanceConfig;
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