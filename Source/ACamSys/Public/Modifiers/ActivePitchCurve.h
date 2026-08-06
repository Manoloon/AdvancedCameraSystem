// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CameraModifierACS.h"
#include "ActivePitchCurve.generated.h"

class UCurveFloat;

/**
 * @brief Camera Modifier that adjusts the Spring Arm length and Field of View
 * based on the camera pitch.
 *
 * The camera pitch is used as the input for two optional curves:
 * - PitchToDistanceCurve controls the desired Spring Arm length.
 * - PitchToFOVCurve controls the FOV offset.
 * They are optional because you can use only Pitch to distance or Pitch to FOV , or both. 
 * This modifier can be used to create dynamic zoom and framing effects as the
 * player looks up or down.
 */
/// @addtogroup Camera Modifier @{
UCLASS(Abstract, Blueprintable)
class ACAMSYS_API UActivePitchCurve : public UCameraModifierACS
{
	GENERATED_BODY()
public:
	/// @cond INTERNAL
	virtual bool ModifyCamera(float DeltaTime, struct FMinimalViewInfo& InOutPOV) override;
	/// @endcond 
	
	///  Maps the camera pitch (X-axis, in degrees) to the desired Spring Arm length (Y-axis).
	UPROPERTY(EditDefaultsOnly, Category = "Settings")
	UCurveFloat* PitchToDistanceCurve = nullptr;
	/// Maps the camera pitch (X-axis, in degrees) to a Field of View offset (Y-axis).
	/// FOV Values are additive to the current FOV (The curve Float should have values that add or sub to the current value
	UPROPERTY(EditDefaultsOnly, Category = "Settings")
	UCurveFloat* PitchToFOVCurve = nullptr;
};
/// @}