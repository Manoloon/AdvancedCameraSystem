﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CameraModifierASC.h"
#include "ActivePitchCurve.generated.h"

/**
 * 
 */
class UCurveFloat;

UCLASS(Abstract,Blueprintable)
class ACAMSYS_API UActivePitchCurve : public UCameraModifierASC
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "Settings", meta = (AllowPrivateAccess = "true"))
	float TransitionTime = 4.0f;
	UPROPERTY(EditDefaultsOnly, Category = "Settings", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCurveFloat> PitchToDistanceCurve = nullptr;
	// FOV Values are additive to the current FOV (The curve Float should have values that add or sub to the current value
	UPROPERTY(EditDefaultsOnly, Category = "Settings", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCurveFloat> PitchToFOVCurve = nullptr;

public:
	virtual bool ModifyCamera(float DeltaTime, struct FMinimalViewInfo& InOutPOV) override;
};