// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#include "PlayerCameraManagerACS.h"

#include "ACSLog.h"
#include "SpringArmComponentACS.h"
#include "Modes/OneTimeCameraMode.h"
#include "Camera/CameraComponent.h"
#include "Camera/CameraModifier.h"
#include "GameFramework/SpectatorPawn.h"
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
	return OneTimeCameraModesApplied.Contains(OneTimeCameraMode->GetUniqueID());
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
	UOneTimeCameraMode* CurrentOneTimeCM = NewObject<UOneTimeCameraMode>(this, OneTimeCameraModeClass);
	ApplyOneTimeCameraMode(CurrentOneTimeCM);
}

void APlayerCameraManagerACS::ApplyOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode)
{
	if (!GetOwningPlayerController()->IsLocalController() || !IsValid(OneTimeCameraMode))
	{
		UE_LOG(LogACS,Warning,TEXT("Apply OTCM : Not Local Controller or OneTimeCameraMode invalid"));
		return;
	}
	if (IsOneTimeCameraModeApplied(OneTimeCameraMode))
	{
		UE_LOG(LogACS,Warning,TEXT("Apply OTCM %s : OneTimeCameraMode is already applied"),*OneTimeCameraMode->GetName());
		return;
	}
	if (OneTimeCameraMode->Priority >= CurrentPriority)
	{
		UE_LOG(LogACS,Warning,TEXT("Apply OTCM : OneTimeCameraMode applied %s when priority was %d"),*OneTimeCameraMode->GetName(),CurrentPriority);
		CurrentPriority = OneTimeCameraMode->Priority;
		OneTimeCameraModesApplied.Add(OneTimeCameraMode->GetUniqueID(), OneTimeCameraMode);
#if !UE_BUILD_SHIPPING
		DebugCameraModeType(OneTimeCameraMode);
#endif
		InternalApplyOneTimeCameraMode(OneTimeCameraMode);
		return;
	}

	if (!OneTimeCameraModesApplied.IsEmpty())
	{
		if (!CanInsertInWaitingList(OneTimeCameraMode))
		{
			UE_LOG(LogACS,Warning,TEXT("Apply OTCM : OneTimeCameraMode cannot be added to the waiting list"));
		}
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
		DebugCameraModeType(OneTimeCameraMode, true);
#endif
		InternalRemoveOneTimeCameraMode(OneTimeCameraMode);
	}
	else if (OneTimeWaitingList.Contains(OneTimeCameraMode))
	{
		OneTimeWaitingList.RemoveSingleSwap(OneTimeCameraMode,EAllowShrinking::Yes);
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
	                                        CurrentCameraModeSettings->CameraConfig.SpringArmSettings.
	                                                                   LengthTransitionSpeed);
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

void APlayerCameraManagerACS::UpdateMinAndMaxYaw(const float NewYaw)
{
	ViewYawMin = NewYaw + YawLowerBound;
	ViewYawMax = NewYaw + YawUpperBound;
}

void APlayerCameraManagerACS::AssignViewTarget(AActor* NewTarget, FTViewTarget& VT,
                                               FViewTargetTransitionParams TransitionParams)
{
	Super::AssignViewTarget(NewTarget, VT, TransitionParams);
	if (NewTarget->IsA(ASpectatorPawn::StaticClass()))
	{
		return;
	}
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

void APlayerCameraManagerACS::UpdateCamera(float DeltaTime)
{
	Super::UpdateCamera(DeltaTime);
	if (!FMath::IsNearlyEqual(DefaultFOV, TargetFOV, 0.10f))
	{
		UpdateCameraFOV(DeltaTime);
	}
#if !UE_BUILD_SHIPPING
	if (ACSCvars::ACSDebug)
	{
		PrintAllOneTimeCamera();
		DebugAndPrintCameraSettings();
	}
#endif
}

void APlayerCameraManagerACS::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	OneTimeWaitingList.Empty();
	OneTimeCameraModesApplied.Empty();
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
		if (!ModifierList.IsEmpty() && OneTimeCameraMode->bCameraModifierDisable)
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
	else
	{
		if (CurrentSpringArm)
		{
			CurrentSpringArm->SetSpringArmLengthLimits(CurrentConfig.SpringArmSettings.MinLength,
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
	OneTimeCameraModesApplied.Add(OneTimeCameraMode->GetUniqueID(), OneTimeCameraMode);
	if (OneTimeCameraMode->EffectDuration > 0.0f)
	{
		FTimerDelegate RemoveDelegate;
		FTimerHandle OneTimeModeHandler;
		RemoveDelegate.BindUObject(this, &ThisClass::RemoveOneTimeCameraMode, OneTimeCameraMode);
		GetWorldTimerManager().SetTimer(OneTimeModeHandler, RemoveDelegate, OneTimeCameraMode->EffectDuration, false);
	}
	ApplyCurrentModifiersOneTimeCM(OneTimeCameraMode);
	UpdateCameraSettings(CurrentConfig);
}

void APlayerCameraManagerACS::InternalRemoveOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode)
{
	const FCameraConfig& CurrentModeConfig = CurrentCameraModeSettings->CameraConfig;
	const FCameraConfig& CurrentOneTimeCMConfig = OneTimeCameraMode->CameraConfig;
	OneTimeCameraModesApplied.Remove(OneTimeCameraMode->GetUniqueID());
	if (!ModifierList.IsEmpty())
	{
		TSet<UCameraModifier*> ToBeRemove;
		for (auto NewModifier : ModifierList)
		{
			if (OneTimeCameraMode->CameraModifiersToApply.Contains(NewModifier.GetClass()))
			{
				ToBeRemove.Add(NewModifier);
			}
			else if (OneTimeCameraMode->bCameraModifierDisable)
			{
				NewModifier->EnableModifier();
			}
		}
		for (const auto& Modifier : ToBeRemove)
		{
#if !UE_BUILD_SHIPPING
			DebugCameraModifiers(Modifier, true);
#endif
			RemoveCameraModifier(Modifier);
		}
	}
	TargetFOV = CurrentModeConfig.FOVSettings.FOV;
	if (CurrentSpringArm)
	{
		CurrentSpringArm->SetSpringArmLengthLimits(CurrentModeConfig.SpringArmSettings.MinLength,
		                                           CurrentModeConfig.SpringArmSettings.MaxLength,
		                                           CurrentOneTimeCMConfig.SpringArmSettings.LengthTransitionSpeed);
		CurrentSpringArm->ChangeSpringArmLength(CurrentModeConfig.SpringArmSettings.NewLength,
		                                        CurrentModeConfig.SpringArmSettings.LengthTransitionSpeed);
		CurrentSpringArm->SetSocketOffset(CurrentModeConfig.SpringArmSettings.SocketOffsetModifier,
		                                  CurrentOneTimeCMConfig.SpringArmSettings.SocketOffsetTransitionSpeed);
	}
	UpdateCameraSettings(CurrentModeConfig);
	if (!OneTimeWaitingList.IsEmpty())
	{
		ApplyOneTimeCameraModeFromTheList();
	}
	else
	{
		CurrentPriority = 0;
	}
}

void APlayerCameraManagerACS::UpdateCameraSettings(const FCameraConfig& NewCameraConfig)
{
	ViewPitchMin = NewCameraConfig.CamRotationSettings.MinPitch;
	ViewPitchMax = NewCameraConfig.CamRotationSettings.MaxPitch;

	if (const APawn* Player = PCOwner->GetPawn();
		IsValid(Player))
	{
		const float PlayerYaw = Player->GetActorRotation().Yaw;
		YawLowerBound = NewCameraConfig.CamRotationSettings.YawRange.GetLowerBoundValue();
		ViewYawMin = PlayerYaw + YawLowerBound;
		YawUpperBound = NewCameraConfig.CamRotationSettings.YawRange.GetUpperBoundValue();
		ViewYawMax = PlayerYaw + YawUpperBound;
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
	DitherCameraThresholdSquared = FVector2D{
		MaxDitherCameraThreshold * MaxDitherCameraThreshold,
		MinDitherCameraThreshold * MinDitherCameraThreshold
	};
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
		// Remove ald Camera Modifiers
		TSet<UCameraModifier*> ToBeRemove;
		for (const TObjectPtr<UCameraModifier>& Modifier : ModifierList)
		{
			if (CurrentCameraModeSettings->CameraModifiersToApply.Contains(Modifier.GetClass()))
			{
				ToBeRemove.Add(Modifier);
			}
		}
		for (auto Modifier : ToBeRemove)
		{
#if !UE_BUILD_SHIPPING
			DebugCameraModifiers(Modifier, true);
#endif
			RemoveCameraModifier(Modifier);
		}
	}
	// Add new camera modifiers
	for (const auto& NewModifier : NewCameraSettings->CameraModifiersToApply)
	{
#if !UE_BUILD_SHIPPING
		DebugCameraModifiers(NewModifier.GetDefaultObject());
#endif
		AddNewCameraModifier(NewModifier);
	}
}

void APlayerCameraManagerACS::ApplyCurrentModifiersOneTimeCM(const UOneTimeCameraMode* NewCameraSettings)
{
	// need to know that the currentCameraModeSettings has been used before.
	// this is invalid when play begins.
	if (NewCameraSettings->CameraModifiersToApply.IsEmpty())
	{
		return;
	}
	for (const auto& NewModifier : NewCameraSettings->CameraModifiersToApply)
	{
#if !UE_BUILD_SHIPPING
		DebugCameraModifiers(NewModifier.GetDefaultObject());
#endif
		AddNewCameraModifier(NewModifier);
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

void APlayerCameraManagerACS::ApplyOneTimeCameraModeFromTheList()
{
	int NewPriority = OneTimeWaitingList[0]->Priority;
	for (const UOneTimeCameraMode* CurrentOneTime : OneTimeWaitingList)
	{
		OneTimeCameraModesApplied.Add(CurrentOneTime->GetUniqueID(), CurrentOneTime);
		InternalApplyOneTimeCameraMode(CurrentOneTime);
#if !UE_BUILD_SHIPPING
		if (ACSCvars::ACSDebug)
		{
			UE_LOG(LogTemp, Warning, TEXT("TO APPly next OTCM %s, with priority : %d"), *CurrentOneTime->GetName(),
				   CurrentOneTime->Priority);
		}
		DebugCameraModeType(CurrentOneTime);
#endif
	}
	CurrentPriority = NewPriority;
	OneTimeWaitingList.Empty();
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

#if !UE_BUILD_SHIPPING
void APlayerCameraManagerACS::DebugCameraModifiers(const UCameraModifier* Modifier, bool ToBeRemoved)
{
	if (!ACSCvars::ACSDebug)
	{
		return;
	}
	if (GEngine)
	{
		const FString Action = ToBeRemoved ? TEXT("Removed") : TEXT("Added");
		const FColor Color = ToBeRemoved ? FColor::Red : FColor::Green;
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, Color,
		                                 FString::Printf(
			                                 TEXT("OneTimeCM Camera Modifier to be %s: %s"), *Action,
			                                 *Modifier->GetName()));
	}
}
#endif

#if !UE_BUILD_SHIPPING
void APlayerCameraManagerACS::DebugCameraModeType(const UDataAsset* CameraMode, bool ToBeRemoved)
{
	if (!ACSCvars::ACSDebug)
	{
		return;
	}
	if (GEngine)
	{
		const FString Action = ToBeRemoved ? TEXT("Removed") : TEXT("Added");
		const FColor Color = ToBeRemoved ? FColor::Orange : FColor::Cyan;
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, Color,
		                                 FString::Printf(
			                                 TEXT("OneTimeCameraMode %s : %s | id: %d"), *Action,
			                                 *CameraMode->GetName(), CameraMode->GetUniqueID()));
	}
}
#endif

#if !UE_BUILD_SHIPPING
bool APlayerCameraManagerACS::CanInsertInWaitingList(const UOneTimeCameraMode* NewOTCM)
{
	// puedo anadirla a la waitinglist
	if (!OneTimeWaitingList.IsEmpty())
	{
		const int NewPriority = NewOTCM->Priority;
		const int WaiterPriority = OneTimeWaitingList[0]->Priority;
		const bool bIsUnique = OneTimeWaitingList.ContainsByPredicate([&](const UOneTimeCameraMode* Item)
		{
			return Item && Item->GetUniqueID() != NewOTCM->GetUniqueID();
		});
		if (!bIsUnique)
		{
			UE_LOG(LogACS,Warning,TEXT("CanInsertInWaitingList : One time camera mode IS already in the waitingList"));
			return false;
		}
		if (NewPriority == WaiterPriority)
		{
			OneTimeWaitingList.Add(NewOTCM);
			return true;
		}
		if (NewPriority < WaiterPriority)
		{
			return false;
		}
		if (NewPriority > WaiterPriority)
		{
			OneTimeWaitingList.Empty();
			OneTimeWaitingList.Add(NewOTCM);
			UE_LOG(LogACS,Warning,TEXT("CanInsertInWaitingList : One time camera mode has been added to the waiting list"));
			return true;
		}
	}
	// first entry to the waiting list
	OneTimeWaitingList.Add(NewOTCM);
	UE_LOG(LogACS,Warning,TEXT("CanInsertInWaitingList : One time camera mode has been added to the waiting list"));
	return true;
}

void APlayerCameraManagerACS::PrintAllOneTimeCamera() const
{
	int key = 100;
	if (!OneTimeWaitingList.IsEmpty())
	{
		for (const auto& Otcm : OneTimeWaitingList)
		{
			GEngine->AddOnScreenDebugMessage(key++, 
										0.0f, 
										FColor::Green,
							 FString::Printf(TEXT("%s | id: %d | priority: %d"), 
							 				*Otcm->GetName(), Otcm->GetUniqueID(), Otcm->Priority));
		}
		GEngine->AddOnScreenDebugMessage(key++, 
								0.0f, 
								FColor::Green,
						 FString::Printf(TEXT("One Time CM Waiting List :")));
	}
	key = 200;
	if (!OneTimeCameraModesApplied.IsEmpty())
	{
		for (const auto Otcm : OneTimeCameraModesApplied)
		{
			GEngine->AddOnScreenDebugMessage(key++, 0.0f, FColor::Orange,
											 FString::Printf(TEXT("%s | id: %d | priority: %d"), *Otcm.Value->GetName(), Otcm.Value->GetUniqueID(), Otcm.Value->Priority));
		}
		GEngine->AddOnScreenDebugMessage(key++, 0.0f, FColor::Orange,
								 FString::Printf(TEXT("One Time CM Applied :")));
	}
}

void APlayerCameraManagerACS::DebugAndPrintCameraSettings() const
{
	if (!ACSCvars::ACSDebug)
	{
		return;
	}
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
#endif
