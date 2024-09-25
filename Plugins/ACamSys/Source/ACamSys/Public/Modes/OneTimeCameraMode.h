// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
/*
 * Modes : OneTimeCameraMode is the mode that applies only one time
 * Camera modes are the main concept in the camera system.
 * They contain and define all the variables that give camera their basic behavior.
 * They store a default set of camera modifiers that should be active with the mode at any time Only
 * one camera mode can be active at any time.
 * Example of modes: Outdoor camera mode, 3x3 spaceship module mode, ADS mode
 */
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OneTimeCameraMode.generated.h"

UCLASS(Abstract,Blueprintable)
class ACAMSYS_API UOneTimeCameraMode : public UDataAsset {
  GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FCameraConfig CameraConfig;
	bool bCameraModeDisable = true;
};