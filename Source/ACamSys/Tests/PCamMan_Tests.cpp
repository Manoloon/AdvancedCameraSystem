#include "Misc/AutomationTest.h"
#include "ACamSys/Public/PlayerCameraManagerACS.h"
#include "Modes/PermanentCameraMode.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FACSApplyCameraModeSettings,
                                 "ACS.CameraManager.ApplyCameraModeSettings",
                                 EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FACSApplyCameraModeSettings::RunTest(const FString& Parameters)
{
	// APlayerController* PlayerController = NewObject<APlayerController>();
	// APlayerCameraManagerACS* ACS_PlayerCM = NewObject<APlayerCameraManagerACS>(PlayerController);
	//
	// TestEqual("Player controller have ACS Camera Manager Set",ACS_PlayerCM->GetOwner(),PlayerController);
	// TestTrue("Player Camera Manager is Valid",IsValid(ACS_PlayerCM));
	// UPermanentCameraMode* PermanentCM = NewObject<UPermanentCameraMode>();
	//ACS_PlayerCM->ApplyCameraModeSettings(PermanentCM);
	//auto CurrentModeSettings = ACS_PlayerCM->GetCurrentCameraModeSettings();
	//TestEqual("Initial Permanent Camera Mode Applied",PermanentCM,CurrentModeSettings);
	
	// Test 
	// ApplyCameraModeSettings
	// ApplyCameraModeSettingsByClass
	// GetCurrentCameraModeSettings
	// 
	// ToggleOneTimeCameraModeByClass
	// ToggleOneTimeCameraMode
	// IsOneTimeCameraModeApplied
	// RemoveOneTimeCameraMode
	return true;
}