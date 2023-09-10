// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

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