// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#include "PlayerCameraManagerACS.h"
#include "SpringArmComponentACS.h"
#include "Modes/OneTimeCameraMode.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Camera/CameraComponent.h"
#include "Camera/CameraModifier.h"
#include "Interfaces/BPI_Pawn.h"
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
			GEngine->AddOnScreenDebugMessage(-1,10.0f,FColor::Orange,FString::Printf(TEXT("Current Camera mode : %s"),*CurrentCameraModeSettings->GetName()));
		}
	}
#endif
	return CurrentCameraModeSettings;
}

void APlayerCameraManagerACS::ApplyCameraModeSettingsByClass(const TSubclassOf<UPermanentCameraMode>& PermanentCameraModeClass)
{
	if (!IsOwnerLocalController())
	{
		return;
	}
	UPermanentCameraMode* NewCameraSettings = NewObject<UPermanentCameraMode>(this, PermanentCameraModeClass);

	const FCameraConfig& CurrentModeConfig = NewCameraSettings->CameraConfig;
	if (!IsValid(CurrentSpringArm))
	{
		UE_LOG(LogTemp, Error, TEXT("Current Spring arm is not Valid"));
		return;
	}
	CurrentSpringArm->SetSpringArmLengthLimits(CurrentModeConfig.MinLineOfSight, CurrentModeConfig.MaxLineOfSight,
		CurrentModeConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);
	CurrentSpringArm->ChangeSpringArmLength(CurrentModeConfig.SpringArmSettings.SpringArmLengthModifier,
		CurrentModeConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);
	
	CurrentSpringArm->SetSocketOffset(CurrentModeConfig.SpringArmSettings.SocketOffsetModifier,
		CurrentModeConfig.SpringArmSettings.SocketOffsetTransitionSpeed);
	CurrentSpringArm->SetTargetOffset(CurrentModeConfig.SpringArmSettings.TargetOffset);

	TargetFOV = CurrentModeConfig.FOVSettings.FOV;
		
	UpdateCameraSettings(CurrentModeConfig);

	ChangeCurrentModifiers(NewCameraSettings);
	CurrentCameraModeSettings = NewCameraSettings;
}

void APlayerCameraManagerACS::ApplyCameraModeSettings(UPermanentCameraMode* PermanentCameraMode)
{
	if (!IsOwnerLocalController() || !IsValid(PermanentCameraMode))
	{
		return;
	}
	
	const FCameraConfig& CurrentModeConfig = PermanentCameraMode->CameraConfig;
	if (!IsValid(CurrentSpringArm))
	{
		UE_LOG(LogTemp, Error, TEXT("Current Spring arm is not Valid"));
		return;
	}
	CurrentSpringArm->SetSpringArmLengthLimits(CurrentModeConfig.MinLineOfSight, CurrentModeConfig.MaxLineOfSight,
		CurrentModeConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);
	CurrentSpringArm->ChangeSpringArmLength(CurrentModeConfig.SpringArmSettings.SpringArmLengthModifier,
		CurrentModeConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);

	CurrentSpringArm->SetSocketOffset(CurrentModeConfig.SpringArmSettings.SocketOffsetModifier,
		CurrentModeConfig.SpringArmSettings.SocketOffsetTransitionSpeed);
	CurrentSpringArm->SetTargetOffset(CurrentModeConfig.SpringArmSettings.TargetOffset);
	if (OneTimeCameraModesApplied.IsEmpty())
	{
		TargetFOV = CurrentModeConfig.FOVSettings.FOV;
	}		
	UpdateCameraSettings(CurrentModeConfig);
	ChangeCurrentModifiers(PermanentCameraMode);
	CurrentCameraModeSettings = PermanentCameraMode;
}

bool APlayerCameraManagerACS::IsOneTimeCameraModeApplied(const UOneTimeCameraMode* OneTimeCameraMode) const
{
	return OneTimeCameraModesApplied.Contains(OneTimeCameraMode->GetName());
}

void APlayerCameraManagerACS::ToggleOneTimeCameraModeByClass(const TSubclassOf<UOneTimeCameraMode>& OneTimeCameraModeClass)
{
	if (!IsOwnerLocalController())
	{
		return;
	}
	const UOneTimeCameraMode* CurrentOneTimeCM = NewObject<UOneTimeCameraMode>(this, OneTimeCameraModeClass);
	UpdateOneTimeCameraModesSet(CurrentOneTimeCM);
}

void APlayerCameraManagerACS::ToggleOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode)
{
	if (!IsOwnerLocalController())
	{
		return;
	}
	UpdateOneTimeCameraModesSet(OneTimeCameraMode);
}

void APlayerCameraManagerACS::ApplyOneTimeCameraModeByClass(const TSubclassOf<UOneTimeCameraMode>& OneTimeCameraModeClass)
{
	if (!IsOwnerLocalController())
	{
		return;
	}
	const UOneTimeCameraMode* CurrentOneTimeCM = NewObject<UOneTimeCameraMode>(this, OneTimeCameraModeClass);
	if (!IsOneTimeCameraModeApplied(CurrentOneTimeCM))
	{
		OneTimeCameraModesApplied.Add(CurrentOneTimeCM->GetName(), CurrentOneTimeCM);
		InternalApplyOneTimeCameraMode(CurrentOneTimeCM);
	}
}

void APlayerCameraManagerACS::ApplyOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode)
{
	if (!IsOwnerLocalController() || !IsValid(OneTimeCameraMode))
	{
		return;
	}

	if (!IsOneTimeCameraModeApplied(OneTimeCameraMode))
	{
		OneTimeCameraModesApplied.Add(OneTimeCameraMode->GetName(), OneTimeCameraMode);
#if !UE_BUILD_SHIPPING
		if (ACSCvars::ACSDebug)
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1,15.0f,FColor::Cyan,FString::Printf(TEXT("OneTimeCameraMode to apply : %s"),*OneTimeCameraMode->GetName()));
			}
		}
#endif
		InternalApplyOneTimeCameraMode(OneTimeCameraMode);
	}
}

void APlayerCameraManagerACS::RemoveOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode)
{
	if (!IsOwnerLocalController() || !IsValid(OneTimeCameraMode))
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
				GEngine->AddOnScreenDebugMessage(-1,15.0f,FColor::Orange,FString::Printf(TEXT("OneTimeCameraMode removed : %s"),*OneTimeCameraMode->GetName()));
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

void APlayerCameraManagerACS::SetSpringArmDistance(const float NewDistance) const
{
	if (!IsValid(CurrentSpringArm))
	{
		return;
	}
	CurrentSpringArm->ChangeSpringArmLength(NewDistance, CurrentCameraModeSettings->CameraConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);
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

void APlayerCameraManagerACS::EnableDitherFX(bool bInEnabledDitherFX)
{
	if (bEnabledDitherFX == bInEnabledDitherFX)
	{
		return;
	}

	bEnabledDitherFX = bInEnabledDitherFX;
	if (bEnabledDitherFX)
	{
		if (!GetWorldTimerManager().IsTimerActive(DitherTimerHandler))
		{
			GetWorldTimerManager().SetTimer(DitherTimerHandler, this, &APlayerCameraManagerACS::CalculateDitherEffect, 0.1f, true, 0.3f);
		}
	}
	else
	{
		if (GetWorldTimerManager().IsTimerActive(DitherTimerHandler))
		{
			GetWorldTimerManager().ClearTimer(DitherTimerHandler);
			OnCameraDistanceToDitherFX.Execute(1.f);
		}
	}
}

void APlayerCameraManagerACS::InitializeFor(APlayerController* PC)
{
	Super::InitializeFor(PC);

	EnableDitherFX(bUseDitherFX);
}

void APlayerCameraManagerACS::AssignViewTarget(AActor* NewTarget, FTViewTarget& VT, FViewTargetTransitionParams TransitionParams)
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

	if (GetViewTarget()->GetClass()->ImplementsInterface(UBPI_Pawn::StaticClass()))
	{
		SetSpringArmRefFromOwner();
		SetCurrentCameraReference();
	}
}

void APlayerCameraManagerACS::UpdateCamera(float DeltaTime)
{
	Super::UpdateCamera(DeltaTime);
	if (!FMath::IsNearlyEqual(DefaultFOV, TargetFOV, 0.10f))
	{
		UpdateCameraFOV(DeltaTime);
	}
	//TODO : arrange this into a function.
#if !UE_BUILD_SHIPPING
	if (ACSCvars::ACSDebug)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1,0.0f,FColor::Green,FString::Printf(TEXT("Camera Settings :")));
			GEngine->AddOnScreenDebugMessage(-1,0.0f,FColor::Orange,FString::Printf(TEXT("TargetFOV : %f"),TargetFOV));
			GEngine->AddOnScreenDebugMessage(-1,0.0f,FColor::Orange,FString::Printf(TEXT("DefaultFOV : %f"),DefaultFOV));
			GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Yellow, FString::Printf(TEXT("Pitch : %f"),GetOwningPlayerController()->GetControlRotation().Pitch));
			GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Yellow, FString::Printf(TEXT("Yaw : %f"),GetOwningPlayerController()->GetControlRotation().Yaw));
			if (IsValid(CurrentCamera))
			{
				GEngine->AddOnScreenDebugMessage(-1,0.0f,FColor::Orange,FString::Printf(TEXT("CurrentFOV : %f"),CurrentCamera->FieldOfView));
			}
		}
	}
#endif
}

void APlayerCameraManagerACS::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	GetWorldTimerManager().ClearTimer(DitherTimerHandler);
}

void APlayerCameraManagerACS::SetSpringArmRefFromOwner()
{
	CurrentSpringArm = CastChecked<USpringArmComponentACS>(GetViewTarget()->FindComponentByClass(USpringArmComponentACS::StaticClass()));
}

void APlayerCameraManagerACS::SetCurrentCameraReference()
{
	CurrentCamera = Cast<UCameraComponent>(GetViewTarget()->FindComponentByClass(UCameraComponent::StaticClass()));
}

void APlayerCameraManagerACS::UpdateOneTimeCameraModesSet(const UOneTimeCameraMode* OneTimeCameraMode)
{
	IsOneTimeCameraModeApplied(OneTimeCameraMode) ? InternalRemoveOneTimeCameraMode(OneTimeCameraMode) : InternalApplyOneTimeCameraMode(OneTimeCameraMode);
}

void APlayerCameraManagerACS::InternalApplyOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode)
{
	const FCameraConfig& CurrentConfig = OneTimeCameraMode->CameraConfig;
	// It will disable the current permanent mode active and override with the One Time mode
	if (OneTimeCameraMode->bCameraModeDisable)
	{
		CurrentSpringArm->SetSpringArmLengthLimits(CurrentConfig.MinLineOfSight,
			CurrentConfig.MaxLineOfSight,
			CurrentConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);
		CurrentSpringArm->ChangeSpringArmLength(CurrentConfig.SpringArmSettings.SpringArmLengthModifier,
			CurrentConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);
		
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
			if (ModifierList.IsEmpty()) return;

			for (const TObjectPtr<UCameraModifier>& NewModifier : ModifierList)
			{
				if (CurrentCameraModeSettings->CameraModifiersToApply.Contains(NewModifier.GetClass()))
				{
					NewModifier->DisableModifier(true);
				}
			}
			// CurrentSpringArm->ChangeSpringArmLength(CurrentConfig.SpringArmSettings.SpringArmLengthModifier,
			// 		CurrentConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);
		}
		CurrentSpringArm->AddSpringArmLengthLimits(CurrentConfig.MinLineOfSight,
			CurrentConfig.MaxLineOfSight,
			CurrentConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);
		//AddFOV(CurrentConfig.FOVSettings.FOV);
		//TargetFOV = CurrentConfig.FOVSettings.FOV;
	}
	TargetFOV = CurrentConfig.FOVSettings.FOV;
	CurrentSpringArm->SetSocketOffset(CurrentConfig.SpringArmSettings.SocketOffsetModifier,
			CurrentConfig.SpringArmSettings.SocketOffsetTransitionSpeed);
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
		CurrentSpringArm->SetSpringArmLengthLimits(CurrentModeConfig.MinLineOfSight, CurrentModeConfig.MaxLineOfSight,
			CurrentModeConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);
		CurrentSpringArm->ChangeSpringArmLength(CurrentModeConfig.SpringArmSettings.SpringArmLengthModifier,
			CurrentModeConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);
		if (ModifierList.IsEmpty())
		{
			return;
		}
		for (const TObjectPtr<UCameraModifier>& NewModifier : ModifierList)
		{
			NewModifier->EnableModifier();
		}
	}
	else // just remove the one time mode by subtracting data. 
	{
		if (OneTimeCameraMode->bCameraModifierDisable)
		{
			if (ModifierList.IsEmpty())
			{
				return;
			}
			for (const TObjectPtr<UCameraModifier>& NewModifier : ModifierList)
			{
				NewModifier->EnableModifier();
			}
			// CurrentSpringArm->ChangeSpringArmLength(CurrentModeConfig.SpringArmSettings.SpringArmLengthModifier,
			// CurrentModeConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);
		}
		// CurrentSpringArm->AddSpringArmLengthLimits(-CurrentOneTimeCMConfig.MinLineOfSight,
		// 	-CurrentOneTimeCMConfig.MaxLineOfSight,
		// 	CurrentModeConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);
		//SubFOV(CurrentOneTimeCMConfig.FOVSettings.FOV);
	}
	TargetFOV = CurrentModeConfig.FOVSettings.FOV;
	CurrentSpringArm->SetSocketOffset(CurrentModeConfig.SpringArmSettings.SocketOffsetModifier,
			CurrentOneTimeCMConfig.SpringArmSettings.SocketOffsetTransitionSpeed);
	OneTimeCameraModesApplied.Remove(OneTimeCameraMode->GetName());
	UpdateCameraSettings(CurrentModeConfig);
}

void APlayerCameraManagerACS::UpdateCameraSettings(const FCameraConfig& NewCameraConfig)
{
	ViewPitchMin = NewCameraConfig.CamRotationSettings.MinPitch;
	ViewPitchMax = NewCameraConfig.CamRotationSettings.MaxPitch;
	
	const APawn* Player = PCOwner->GetPawn();
	if (IsValid(Player))
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
	if(NewCameraConfig.SpringArmSettings.bCameraLocationLag)
	{
		if (IsValid(NewCameraConfig.SpringArmSettings.CameraLocationLagCurve))
		{
			EnableSpringArmLocationLag(NewCameraConfig.SpringArmSettings.CameraLocationLagCurve,NewCameraConfig.SpringArmSettings.MaxLagDistance);
		}
		else
		{
			CurrentSpringArm->LocationLagCurve = nullptr;
			EnableSpringArmLocationLag(NewCameraConfig.SpringArmSettings.CameraLocationLagSpeed, NewCameraConfig.SpringArmSettings.MaxLagDistance);
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

	if (!NewCameraSettings->CameraModifiersToApply.IsEmpty())
	{
		for (const TSubclassOf NewModifier : NewCameraSettings->CameraModifiersToApply)
		{
			if (UKismetSystemLibrary::IsValidClass(NewModifier))
			{
				AddNewCameraModifier(NewModifier);
			}
		}
	}
}

void APlayerCameraManagerACS::AddFOV(const float Value)
{
	TargetFOV = TargetFOV + Value;
}

void APlayerCameraManagerACS::SubFOV(const float Value)
{
	TargetFOV = TargetFOV - Value;
}

void APlayerCameraManagerACS::UpdateCameraFOV(float DeltaTime)
{
	const float ResultFOV = FMath::FInterpConstantTo(DefaultFOV, TargetFOV, DeltaTime, FOVLerpSpeed);
	DefaultFOV = FMath::Clamp(ResultFOV, MinFOV, MaxFOV);
	CurrentCamera->SetFieldOfView(DefaultFOV);
}

float APlayerCameraManagerACS::GetCameraToPawnDistSquared() const
{
	if (!IsValid(GetViewTargetPawn()))
	{
		return 0.0f;
	}
	return FVector::DistSquared(GetCameraLocation(), GetViewTargetPawn()->GetActorLocation());
}

bool APlayerCameraManagerACS::IsOwnerLocalController() const
{
	return GetOwningPlayerController()->IsLocalController();
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
		const float ResultFromDistance = UKismetMathLibrary::MapRangeClamped(CurrentDistCameraToOwnerPawn,
			FMath::Square(MaxDitherCameraThreshold),
			FMath::Square(MinDitherCameraThreshold),
			1.0f,
			0.f);
		OnCameraDistanceToDitherFX.Execute(ResultFromDistance);
	}
}
