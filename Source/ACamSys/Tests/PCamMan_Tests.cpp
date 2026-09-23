#include "Misc/AutomationTest.h"
#include "ACamSys/Public/PlayerCameraManagerACS.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPlayerCameraManager_Tests,
							"FPlayerCameraManager_Tests",
							EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)			

bool FPlayerCameraManager_Tests::RunTest(const FString& Parameters)
{
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