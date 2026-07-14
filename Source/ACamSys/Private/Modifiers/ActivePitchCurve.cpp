// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#include "Modifiers/ActivePitchCurve.h"

#include "PlayerCameraManagerACS.h"
#if !UE_BUILD_SHIPPING
namespace ACSCvars
{
	static bool ACSCamModifierDebug = false;
	static FAutoConsoleVariableRef CVarACSCamModifierDebug(
		TEXT("ACS.Debug.CamModifiers.Enable"),
			ACSCamModifierDebug,
		TEXT("Enable ACS Camera Modifiers Debug"));
}
#endif
bool UActivePitchCurve::ModifyCamera(float DeltaTime, struct FMinimalViewInfo& InOutPOV)
{
	Super::ModifyCamera(DeltaTime, InOutPOV);
	if (const TObjectPtr<APlayerCameraManagerACS> CameraManager = Cast<APlayerCameraManagerACS>(CameraOwner))
	{
		const FRotator CamRotation = InOutPOV.Rotation;
		const float PitchToDistance = IsValid(PitchToDistanceCurve) ? PitchToDistanceCurve->GetFloatValue(CamRotation.Pitch) : 0.0f;
		const float PitchToFOV = IsValid(PitchToFOVCurve) ? PitchToFOVCurve->GetFloatValue(CamRotation.Pitch) : 0.0f;
		CameraManager->SetSpringArmDistance(PitchToDistance);
		InOutPOV.FOV = FMath::Clamp(InOutPOV.FOV + PitchToFOV,
			CameraManager->GetMinCameraFOV(),
			CameraManager->GetMaxCameraFOV());
#if !UE_BUILD_SHIPPING
		if (ACSCvars::ACSCamModifierDebug)
		{
			GEngine->AddOnScreenDebugMessage( -1,0,FColor::Yellow, TEXT("Pitch : " + FString::SanitizeFloat(CamRotation.Pitch)));
			GEngine->AddOnScreenDebugMessage( -1,0,FColor::Cyan, TEXT("Yaw : " + FString::SanitizeFloat(CamRotation.Yaw)));
			GEngine->AddOnScreenDebugMessage( -1,0,FColor::Orange, TEXT("FOV : " + FString::SanitizeFloat(InOutPOV.FOV)));
		}
#endif
		return false;
	}
	return false;
}