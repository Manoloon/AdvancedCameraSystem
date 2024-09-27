// Fill out your copyright notice in the Description page of Project Settings.


#include "Modifiers/ActivePitchCurve.h"

#include "PlayerCameraManagerACS.h"

bool UActivePitchCurve::ModifyCamera(float DeltaTime, struct FMinimalViewInfo& InOutPOV)
{
	Super::ModifyCamera(DeltaTime, InOutPOV);
	if(const TObjectPtr<APlayerCameraManagerACS> CameraManager = Cast<APlayerCameraManagerACS>(CameraOwner))
	{
		const FRotator CamRotation = InOutPOV.Rotation;
		const float PitchToDistance = IsValid(PitchToDistanceCurve)?
										PitchToDistanceCurve->GetFloatValue(CamRotation.Pitch) :
										0.0f;
		const float PitchToFOV = IsValid(PitchToFOVCurve) ?
										PitchToFOVCurve->GetFloatValue(CamRotation.Pitch) :
										0.0f;
		CameraManager->SetSpringArmDistance(PitchToDistance);
		InOutPOV.FOV = FMath::Clamp(InOutPOV.FOV + PitchToFOV,
									CameraManager->GetMinCameraFOV(),
									CameraManager->GetMaxCameraFOV());
		return false;
	}
	return false;
}