// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PermanentCameraMode.generated.h"

UCLASS(Abstract,Blueprintable)
class ACAMSYS_API UPermanentCameraMode : public UDataAsset {
  GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TSubclassOf<UCameraModifier>> CameraModifiersToApply;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FCameraConfig CameraConfig;
};
