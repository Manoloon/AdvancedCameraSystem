// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CameraModifierACS.h"
#include "ActivePitchCurve.generated.h"

/**
 * 
 */
class UCurveFloat;

UCLASS(Abstract, Blueprintable)
class ACAMSYS_API UActivePitchCurve : public UCameraModifierACS
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