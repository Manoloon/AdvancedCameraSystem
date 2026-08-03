// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#include "PlayerCameraManagerACS.h"

#include "ACSLog.h"
#include "SpringArmComponentACS.h"
#include "Modes/OneTimeCameraMode.h"
#include "Camera/CameraComponent.h"
#include "Camera/CameraModifier.h"
#include "Kismet/GameplayStatics.h"
#include "Structs/SettingsStructs.h"
#include "Modes/PermanentCameraMode.h"

#if !UE_BUILD_SHIPPING
namespace ACSCvars
{
	static bool ACSDebug = false;
	static FAutoConsoleVariableRef CVarACSDebug(
		TEXT("ACS.Debug.Enable"),
		ACSDebug,
		TEXT("Enable ACS Camera manager Debug"));
}
#endif

UPermanentCameraMode* APlayerCameraManagerACS::GetCurrentCameraModeSettings() const
{
#if !UE_BUILD_SHIPPING
	if (ACSCvars::ACSDebug)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Orange,
			                                 FString::Printf(
				                                 TEXT("Current Camera mode : %s"),
				                                 *CurrentCameraModeSettings->GetName()));
		}
	}
#endif
	return CurrentCameraModeSettings;
}

void APlayerCameraManagerACS::ApplyCameraModeSettingsByClass(
	const TSubclassOf<UPermanentCameraMode>& PermanentCameraModeClass)
{
	if (!GetOwningPlayerController()->IsLocalController())
	{
		return;
	}
	UPermanentCameraMode* NewCameraSettings = NewObject<UPermanentCameraMode>(this, PermanentCameraModeClass);
	InternalApplyPermanentCameraMode(NewCameraSettings);
}

void APlayerCameraManagerACS::ApplyCameraModeSettings(UPermanentCameraMode* PermanentCameraMode)
{
	if (!GetOwningPlayerController()->IsLocalController() || !IsValid(PermanentCameraMode))
	{
		return;
	}
	InternalApplyPermanentCameraMode(PermanentCameraMode);
}

bool APlayerCameraManagerACS::IsOneTimeCameraModeApplied(const UOneTimeCameraMode* OneTimeCameraMode) const
{
	return OneTimeCameraModesApplied.Contains(OneTimeCameraMode->GetName());
}

void APlayerCameraManagerACS::ToggleOneTimeCameraModeByClass(
	const TSubclassOf<UOneTimeCameraMode>& OneTimeCameraModeClass)
{
	if (!GetOwningPlayerController()->IsLocalController())
	{
		return;
	}
	const UOneTimeCameraMode* CurrentOneTimeCM = NewObject<UOneTimeCameraMode>(this, OneTimeCameraModeClass);
	Internal_ToggleOneTimeCameraMode(CurrentOneTimeCM);
}

void APlayerCameraManagerACS::ToggleOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode)
{
	if (!GetOwningPlayerController()->IsLocalController())
	{
		return;
	}
	Internal_ToggleOneTimeCameraMode(OneTimeCameraMode);
}

void APlayerCameraManagerACS::ApplyOneTimeCameraModeByClass(
	const TSubclassOf<UOneTimeCameraMode>& OneTimeCameraModeClass)
{
	if (!GetOwningPlayerController()->IsLocalController())
	{
		return;
	}
	const UOneTimeCameraMode* CurrentOneTimeCM = NewObject<UOneTimeCameraMode>(this, OneTimeCameraModeClass);
	if (!IsOneTimeCameraModeApplied(CurrentOneTimeCM))
	{
		if (!OneTimeCameraModesApplied.IsEmpty() && CurrentOneTimeCM->Priority == 0)
		{
			return;
		}
		OneTimeCameraModesApplied.Add(CurrentOneTimeCM->GetName(), CurrentOneTimeCM);
		InternalApplyOneTimeCameraMode(CurrentOneTimeCM);
	}
}

void APlayerCameraManagerACS::ApplyOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode)
{
	if (!GetOwningPlayerController()->IsLocalController() || !IsValid(OneTimeCameraMode))
	{
		return;
	}

	if (!IsOneTimeCameraModeApplied(OneTimeCameraMode))
	{
		if (!OneTimeCameraModesApplied.IsEmpty() && OneTimeCameraMode->Priority == 0)
		{
			return;
		}
		OneTimeCameraModesApplied.Add(OneTimeCameraMode->GetName(), OneTimeCameraMode);
#if !UE_BUILD_SHIPPING
		if (ACSCvars::ACSDebug)
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan,
				                                 FString::Printf(
					                                 TEXT("OneTimeCameraMode to apply : %s"),
					                                 *OneTimeCameraMode->GetName()));
			}
		}
#endif
		InternalApplyOneTimeCameraMode(OneTimeCameraMode);
	}
}

void APlayerCameraManagerACS::RemoveOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode)
{
	if (!GetOwningPlayerController()->IsLocalController() || !IsValid(OneTimeCameraMode))
	{
		return;
	}
	if (IsOneTimeCameraModeApplied(OneTimeCameraMode))
	{
#if !UE_BUILD_SHIPPING
		if (ACSCvars::ACSDebug)
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Orange,
				                                 FString::Printf(
					                                 TEXT("OneTimeCameraMode removed : %s"),
					                                 *OneTimeCameraMode->GetName()));
			}
		}
#endif
		OneTimeCameraModesApplied.Remove(OneTimeCameraMode->GetName());
		InternalRemoveOneTimeCameraMode(OneTimeCameraMode);
	}
}

USpringArmComponentACS* APlayerCameraManagerACS::GetSpringArmComponent() const
{
	return CurrentSpringArm;
}

UCameraComponent* APlayerCameraManagerACS::GetCameraComponent() const
{
	return CurrentCamera;
}

void APlayerCameraManagerACS::SetSpringArmLength(const float NewLength) const
{
	if (!IsValid(CurrentSpringArm))
	{
		return;
	}
	CurrentSpringArm->ChangeSpringArmLength(NewLength,
	                            CurrentCameraModeSettings->CameraConfig.SpringArmSettings.LengthTransitionSpeed);
}

void APlayerCameraManagerACS::EnableSpringArmRotationLag(const float RotationLagSpeed) const
{
	CurrentSpringArm->bEnableCameraRotationLag = true;
	CurrentSpringArm->CameraRotationLagSpeed = RotationLagSpeed;
}

void APlayerCameraManagerACS::EnableSpringArmRotationLag(const TObjectPtr<UCurveFloat>& RotationLagCurve) const
{
	CurrentSpringArm->bEnableCameraRotationLag = true;
	CurrentSpringArm->RotationLagCurve = RotationLagCurve;
}

void APlayerCameraManagerACS::DisableSpringArmRotationLag() const
{
	CurrentSpringArm->bEnableCameraRotationLag = false;
}

void APlayerCameraManagerACS::EnableSpringArmLocationLag(const float LocationLagSpeed, const float LagMaxDistance) const
{
	CurrentSpringArm->bEnableCameraLag = true;
	CurrentSpringArm->CameraLagSpeed = LocationLagSpeed;
	CurrentSpringArm->CameraLagMaxDistance = LagMaxDistance;
}

void APlayerCameraManagerACS::EnableSpringArmLocationLag(const TObjectPtr<UCurveFloat>& LocationLagCurve,
                                                         const float LagMaxDistance) const
{
	CurrentSpringArm->bEnableCameraLag = true;
	CurrentSpringArm->LocationLagCurve = LocationLagCurve;
	CurrentSpringArm->CameraLagMaxDistance = LagMaxDistance;
}

void APlayerCameraManagerACS::DisableSpringArmLocationLag() const
{
	CurrentSpringArm->bEnableCameraLag = false;
}

float APlayerCameraManagerACS::GetMaxCameraFOV() const
{
	return MaxFOV;
}

float APlayerCameraManagerACS::GetMinCameraFOV() const
{
	return MinFOV;
}

void APlayerCameraManagerACS::EnableDitherFX()
{
	if (bEnabledDitherFX)
	{
		return;
	}
	bEnabledDitherFX = true;
	GetWorldTimerManager().SetTimer(DitherTimerHandler, this, 
									&APlayerCameraManagerACS::CalculateDitherEffect,
									0.1f,
	                                true, 0.3f);
}

void APlayerCameraManagerACS::DisableDitherFX()
{
	GetWorldTimerManager().ClearTimer(DitherTimerHandler);
}

void APlayerCameraManagerACS::AssignViewTarget(AActor* NewTarget, FTViewTarget& VT,
                                               FViewTargetTransitionParams TransitionParams)
{
	Super::AssignViewTarget(NewTarget, VT, TransitionParams);

	for (auto It = OneTimeCameraModesApplied.CreateConstIterator(); It; ++It)
	{
		if (const UOneTimeCameraMode* OneTimeCameraMode = It->Value)
		{
			RemoveOneTimeCameraMode(OneTimeCameraMode);
		}
	}
	OneTimeCameraModesApplied.Reset();
	CurrentSpringArm = NewTarget->FindComponentByClass<USpringArmComponentACS>();
	if (CurrentSpringArm)
	{
		CurrentCamera = Cast<UCameraComponent>(NewTarget->FindComponentByClass(UCameraComponent::StaticClass()));
	}
	else
	{
		UE_LOG(LogACS, Error, TEXT("[%s] CurrentSpringArm NOT VALID"), *GetNameSafe(this));
	}
}

void APlayerCameraManagerACS::DebugAndPrintCameraSettings() const
{
	if (ACSCvars::ACSDebug)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Green, FString::Printf(TEXT("Camera Settings :")));
			GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Orange,
			                                 FString::Printf(TEXT("TargetFOV : %f"), TargetFOV));
			GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Orange,
			                                 FString::Printf(TEXT("DefaultFOV : %f"), DefaultFOV));
			GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Yellow,
			                                 FString::Printf(
				                                 TEXT("Pitch : %f"),
				                                 GetOwningPlayerController()->GetControlRotation().Pitch));
			GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Yellow,
			                                 FString::Printf(
				                                 TEXT("Yaw : %f"),
				                                 GetOwningPlayerController()->GetControlRotation().Yaw));
			if (IsValid(CurrentCamera))
			{
				GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Orange,
				                                 FString::Printf(TEXT("CurrentFOV : %f"), CurrentCamera->FieldOfView));
			}
		}
	}
}

void APlayerCameraManagerACS::UpdateCamera(float DeltaTime)
{
	Super::UpdateCamera(DeltaTime);
	if (!FMath::IsNearlyEqual(DefaultFOV, TargetFOV, 0.10f))
	{
		UpdateCameraFOV(DeltaTime);
	}
#if !UE_BUILD_SHIPPING
	DebugAndPrintCameraSettings();
#endif
}

void APlayerCameraManagerACS::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	DisableDitherFX();
}

void APlayerCameraManagerACS::Internal_ToggleOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode)
{
	IsOneTimeCameraModeApplied(OneTimeCameraMode)
		? InternalRemoveOneTimeCameraMode(OneTimeCameraMode)
		: InternalApplyOneTimeCameraMode(OneTimeCameraMode);
}

void APlayerCameraManagerACS::InternalApplyPermanentCameraMode(UPermanentCameraMode* NewPermanentMode)
{
	const FCameraConfig& CurrentModeConfig = NewPermanentMode->CameraConfig;
	if (IsValid(CurrentSpringArm))
	{
		CurrentSpringArm->SetSpringArmLengthLimits(CurrentModeConfig.SpringArmSettings.MinLength, 
													CurrentModeConfig.SpringArmSettings.MaxLength,
													CurrentModeConfig.SpringArmSettings.LengthTransitionSpeed);
		
		CurrentSpringArm->ChangeSpringArmLength(CurrentModeConfig.SpringArmSettings.NewLength,
												CurrentModeConfig.SpringArmSettings.LengthTransitionSpeed);

		CurrentSpringArm->SetSocketOffset(CurrentModeConfig.SpringArmSettings.SocketOffsetModifier,
										  CurrentModeConfig.SpringArmSettings.SocketOffsetTransitionSpeed);
		CurrentSpringArm->SetTargetOffset(CurrentModeConfig.SpringArmSettings.TargetOffset);
	}
	
	TargetFOV = CurrentModeConfig.FOVSettings.FOV;
	UpdateCameraSettings(CurrentModeConfig);
	ChangeCurrentModifiers(NewPermanentMode);
	CurrentCameraModeSettings = NewPermanentMode;
}

void APlayerCameraManagerACS::InternalApplyOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode)
{
	const FCameraConfig& CurrentConfig = OneTimeCameraMode->CameraConfig;
	// It will disable the current permanent mode active and override with the One Time mode
	if (OneTimeCameraMode->bCameraModeDisable)
	{
		if (CurrentSpringArm)
		{
			CurrentSpringArm->SetSpringArmLengthLimits(CurrentConfig.SpringArmSettings.MinLength,
										   CurrentConfig.SpringArmSettings.MaxLength,
										   CurrentConfig.SpringArmSettings.LengthTransitionSpeed);
			CurrentSpringArm->ChangeSpringArmLength(CurrentConfig.SpringArmSettings.NewLength,
													CurrentConfig.SpringArmSettings.LengthTransitionSpeed);
		}
		
		if (ModifierList.IsEmpty())
		{
			return;
		}
		for (const TObjectPtr<UCameraModifier>& NewModifier : ModifierList)
		{
			if (CurrentCameraModeSettings->CameraModifiersToApply.Contains(NewModifier.GetClass()))
			{
				NewModifier->DisableModifier(true);
			}
		}
	}
	else
	{
		if (OneTimeCameraMode->bCameraModifierDisable)
		{
			if (!ModifierList.IsEmpty())
			{
				for (const TObjectPtr<UCameraModifier>& NewModifier : ModifierList)
				{
					if (CurrentCameraModeSettings->CameraModifiersToApply.Contains(NewModifier.GetClass()))
					{
						NewModifier->DisableModifier(true);
					}
				}
			}
		}
		if (CurrentSpringArm)
		{
			CurrentSpringArm->AddSpringArmLengthLimits(CurrentConfig.SpringArmSettings.MinLength,
													   CurrentConfig.SpringArmSettings.MaxLength,
													   CurrentConfig.SpringArmSettings.LengthTransitionSpeed);
		}
	}
	TargetFOV = CurrentConfig.FOVSettings.FOV;
	if (CurrentSpringArm)
	{
		CurrentSpringArm->SetSocketOffset(CurrentConfig.SpringArmSettings.SocketOffsetModifier,
										  CurrentConfig.SpringArmSettings.SocketOffsetTransitionSpeed);
	}
	OneTimeCameraModesApplied.Add(OneTimeCameraMode->GetName(), OneTimeCameraMode);
	UpdateCameraSettings(CurrentConfig);
}

void APlayerCameraManagerACS::InternalRemoveOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode)
{
	const FCameraConfig& CurrentModeConfig = CurrentCameraModeSettings->CameraConfig;
	const FCameraConfig& CurrentOneTimeCMConfig = OneTimeCameraMode->CameraConfig;
	// it will put on active the permanent mode that was active before and remove the one time mode.
	if (OneTimeCameraMode->bCameraModeDisable)
	{
		if (CurrentSpringArm)
		{
			CurrentSpringArm->SetSpringArmLengthLimits(CurrentModeConfig.SpringArmSettings.MinLength, 
														CurrentModeConfig.SpringArmSettings.MaxLength,
													   CurrentModeConfig.SpringArmSettings.LengthTransitionSpeed);
			CurrentSpringArm->ChangeSpringArmLength(CurrentModeConfig.SpringArmSettings.NewLength,
													CurrentModeConfig.SpringArmSettings.LengthTransitionSpeed);
		}
		if (!ModifierList.IsEmpty())
		{
			for (const TObjectPtr<UCameraModifier>& NewModifier : ModifierList)
			{
				NewModifier->EnableModifier();
			}
		}
	}
	else // just remove the one time mode by subtracting data. 
	{
		if (OneTimeCameraMode->bCameraModifierDisable)
		{
			if (!ModifierList.IsEmpty())
			{
				for (const TObjectPtr<UCameraModifier>& NewModifier : ModifierList)
				{
					NewModifier->EnableModifier();
				}
			}
		}
	}
	TargetFOV = CurrentModeConfig.FOVSettings.FOV;
	if (CurrentSpringArm)
	{
		CurrentSpringArm->SetSocketOffset(CurrentModeConfig.SpringArmSettings.SocketOffsetModifier,
										  CurrentOneTimeCMConfig.SpringArmSettings.SocketOffsetTransitionSpeed);
	}
	OneTimeCameraModesApplied.Remove(OneTimeCameraMode->GetName());
	UpdateCameraSettings(CurrentModeConfig);
}

void APlayerCameraManagerACS::UpdateCameraSettings(const FCameraConfig& NewCameraConfig)
{
	ViewPitchMin = NewCameraConfig.CamRotationSettings.MinPitch;
	ViewPitchMax = NewCameraConfig.CamRotationSettings.MaxPitch;

	if (const APawn* Player = PCOwner->GetPawn();
		IsValid(Player))
	{
		const float PlayerYaw = Player->GetActorRotation().Yaw;
		ViewYawMin = PlayerYaw + NewCameraConfig.CamRotationSettings.YawRange.GetLowerBoundValue();
		ViewYawMax = PlayerYaw + NewCameraConfig.CamRotationSettings.YawRange.GetUpperBoundValue();
	}
	else
	{
		ViewYawMin = 0.0f;
		ViewYawMax = 359.9f;
	}

	MinFOV = NewCameraConfig.FOVSettings.MinFOV;
	MaxFOV = NewCameraConfig.FOVSettings.MaxFOV;
	FOVLerpSpeed = NewCameraConfig.FOVSettings.FOVLerpSpeed;
	MinDitherCameraThreshold = NewCameraConfig.MinDistanceCamPlayer;
	MaxDitherCameraThreshold = NewCameraConfig.MaxDistanceCamPlayer;
	DitherCameraThresholdSquared = FVector2D{MaxDitherCameraThreshold * MaxDitherCameraThreshold,
											MinDitherCameraThreshold * MinDitherCameraThreshold};
	if (CurrentSpringArm)
	{
		if (NewCameraConfig.SpringArmSettings.bCameraLocationLag)
		{
			if (IsValid(NewCameraConfig.SpringArmSettings.CameraLocationLagCurve))
			{
				EnableSpringArmLocationLag(NewCameraConfig.SpringArmSettings.CameraLocationLagCurve,
										   NewCameraConfig.SpringArmSettings.MaxLagDistance);
			}
			else
			{
				CurrentSpringArm->LocationLagCurve = nullptr;
				EnableSpringArmLocationLag(NewCameraConfig.SpringArmSettings.CameraLocationLagSpeed,
										   NewCameraConfig.SpringArmSettings.MaxLagDistance);
			}
		}
		else
		{
			DisableSpringArmLocationLag();
		}
		if (NewCameraConfig.SpringArmSettings.bCameraRotationLag)
		{
			if (IsValid(NewCameraConfig.SpringArmSettings.CameraLocationLagCurve))
			{
				EnableSpringArmRotationLag(NewCameraConfig.SpringArmSettings.CameraRotationLagCurve);
			}
			else
			{
				CurrentSpringArm->RotationLagCurve = nullptr;
				EnableSpringArmRotationLag(NewCameraConfig.SpringArmSettings.CameraRotationLagSpeed);
			}
		}
		else
		{
			DisableSpringArmRotationLag();
		}
	}
	
	// Camera postprocess
	CurrentCamera->PostProcessSettings = NewCameraConfig.CamPostProcessSettings;
}

void APlayerCameraManagerACS::ChangeCurrentModifiers(UPermanentCameraMode* NewCameraSettings)
{
	// need to know that the currentCameraModeSettings has been used before.
	// this is invalid when play begins.
	if (CurrentCameraModeSettings != nullptr && !CurrentCameraModeSettings->CameraModifiersToApply.IsEmpty())
	{
		TArray<TObjectPtr<UCameraModifier>> TempModifierList = ModifierList;
		for (const TObjectPtr<UCameraModifier>& NewModifier : TempModifierList)
		{
			if (CurrentCameraModeSettings->CameraModifiersToApply.Contains(NewModifier.GetClass()))
			{
				RemoveCameraModifier(NewModifier);
			}
		}
	}

	if (NewCameraSettings->CameraModifiersToApply.IsEmpty())
	{
		return;
	}
	for (const TSubclassOf NewModifier : NewCameraSettings->CameraModifiersToApply)
	{
		if (NewModifier)
		{
			AddNewCameraModifier(NewModifier);
		}
	}
}

void APlayerCameraManagerACS::AddFOV(const float Value)
{
	TargetFOV += Value;
}

void APlayerCameraManagerACS::SubFOV(const float Value)
{
	TargetFOV -= Value;
}

void APlayerCameraManagerACS::UpdateCameraFOV(float DeltaTime)
{
	const float ResultFOV = FMath::FInterpConstantTo(DefaultFOV, TargetFOV, DeltaTime, FOVLerpSpeed);
	DefaultFOV = FMath::Clamp(ResultFOV, MinFOV, MaxFOV);
	CurrentCamera->SetFieldOfView(DefaultFOV);
}

float APlayerCameraManagerACS::GetCameraToPawnDistSquared() const
{
	if (!IsValid(GetViewTarget()))
	{
		return 0.0f;
	}
	return FVector::DistSquared(GetCameraLocation(), GetViewTarget()->GetActorLocation());
}

void APlayerCameraManagerACS::CalculateDitherEffect()
{
	if (!OnCameraDistanceToDitherFX.IsBound())
	{
		return;
	}
	const float NewDistanceToOwner = GetCameraToPawnDistSquared();
	if (!FMath::IsNearlyEqual(NewDistanceToOwner, CurrentDistCameraToOwnerPawn))
	{
		CurrentDistCameraToOwnerPawn = NewDistanceToOwner;
		const float ResultFromDistance = FMath::GetMappedRangeValueClamped(
			DitherCameraThresholdSquared,
			FVector2D{1.0f, 0.f},
			CurrentDistCameraToOwnerPawn);
		OnCameraDistanceToDitherFX.Execute(ResultFromDistance);
	}
}
