// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
/*
 * Modes : PermanentCameraMode is the mode that applies permanently until another permanent is applied.
 * Camera modes are the main concept in the camera system.
 * They contain and define all the variables that give camera their basic behavior.
 * They store a default set of camera modifiers that should be active with the mode at any time Only
 * one camera mode can be active at any time.
 * Example of modes: Outdoor camera mode, 3x3 spaceship module mode.
 */

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PermanentCameraMode.generated.h"

UCLASS(BlueprintType)
class ACAMSYS_API UPermanentCameraMode : public UDataAsset {
  GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TSubclassOf<UCameraModifier>> CameraModifiersToApply;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FCameraConfig CameraConfig;
};
