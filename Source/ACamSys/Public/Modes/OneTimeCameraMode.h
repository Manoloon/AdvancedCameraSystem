// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

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

UCLASS(BlueprintType)
class ACAMSYS_API UOneTimeCameraMode : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float EffectDuration = 2.f;
	// if True disable any camera mode running at that time.
	UPROPERTY(EditAnywhere)
	bool bCameraModeDisable = true;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FCameraConfig CameraConfig;

};