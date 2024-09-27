#include "PlayerCameraManagerACS.h"
#include "SpringArmComponentACS.h"
#include "Modes/OneTimeCameraMode.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Camera/CameraComponent.h"
#include "Camera/CameraModifier.h"
#include "Interfaces/BPI_Pawn.h"
#include "Modes/PermanentCameraMode.h"


UPermanentCameraMode* APlayerCameraManagerACS::GetCurrentCameraModeSettings() const
{
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
	if(!IsValid(CurrentSpringArm))
	{
		UE_LOG(LogTemp,Error,TEXT("Current Spring arm is not Valid"));
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
	if (!IsOwnerLocalController())
	{
		return;
	}

	const FCameraConfig& CurrentModeConfig = PermanentCameraMode->CameraConfig;
	if(!IsValid(CurrentSpringArm))
	{
		UE_LOG(LogTemp,Error,TEXT("Current Spring arm is not Valid"));
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
	ChangeCurrentModifiers(PermanentCameraMode);
	CurrentCameraModeSettings = PermanentCameraMode;
}

bool APlayerCameraManagerACS::IsOneTimeCameraModeClassApplied(const TSubclassOf<UOneTimeCameraMode>& OneTimeCameraMode) const
{
	return OneTimeCameraModesApplied.Contains(OneTimeCameraMode->GetDefaultObject()->GetClass()->GetName());
}

bool APlayerCameraManagerACS::IsOneTimeCameraModeApplied(const UOneTimeCameraMode* OneTimeCameraMode) const
{
	return OneTimeCameraModesApplied.Contains(OneTimeCameraMode->GetClass()->GetName());
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
		OneTimeCameraModesApplied.Add(CurrentOneTimeCM->GetClass()->GetName());
		InternalApplyOneTimeCameraMode(CurrentOneTimeCM);
	}
}

void APlayerCameraManagerACS::ApplyOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode)
{
	if (!IsOwnerLocalController())
	{
		return;
	}
	if (!IsOneTimeCameraModeApplied(OneTimeCameraMode))
	{
		OneTimeCameraModesApplied.Add(OneTimeCameraMode->GetClass()->GetName());
		InternalApplyOneTimeCameraMode(OneTimeCameraMode);
	}
}

void APlayerCameraManagerACS::RemoveOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode)
{
	if (!IsOwnerLocalController())
	{
		return;
	}
	if (IsOneTimeCameraModeApplied(OneTimeCameraMode))
	{
		OneTimeCameraModesApplied.Remove(OneTimeCameraMode->GetClass()->GetName());
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

void APlayerCameraManagerACS::AssignViewTarget(AActor* NewTarget, FTViewTarget& VT, FViewTargetTransitionParams TransitionParams)
{
	Super::AssignViewTarget(NewTarget, VT, TransitionParams);
	OneTimeCameraModesApplied.Reset();
	if (GetViewTarget()->GetClass()->ImplementsInterface(UBPI_Pawn::StaticClass()))
	{
		SetSpringArmRefFromOwner();
		SetCurrentCameraReference();
	}
	if (bUseDitherFX && !GetWorldTimerManager().IsTimerActive(DitherTimerHandler) )
	{
		GetWorldTimerManager().SetTimer(DitherTimerHandler, this, &APlayerCameraManagerACS::CalculateDitherEffect, 0.1f, true, 0.3f);
	}
}

void APlayerCameraManagerACS::UpdateCamera(float DeltaTime)
{
	Super::UpdateCamera(DeltaTime);
	if (!FMath::IsNearlyEqual(DefaultFOV, TargetFOV, 1.0f))
	{
		UpdateCameraFOV(DeltaTime);
	}
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
	if (!IsOwnerLocalController())
	{
		return;
	}
	const FCameraConfig& CurrentConfig = OneTimeCameraMode->CameraConfig;
	// It will disable the current permanent mode active and override with the One Time mode
	if (OneTimeCameraMode->bCameraModeDisable)
	{
		CurrentSpringArm->SetSpringArmLengthLimits(	CurrentConfig.MinLineOfSight,
													CurrentConfig.MaxLineOfSight,
													CurrentConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);
		CurrentSpringArm->ChangeSpringArmLength(	CurrentConfig.SpringArmSettings.SpringArmLengthModifier,
													CurrentConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);

		CurrentSpringArm->SetSocketOffset(			CurrentConfig.SpringArmSettings.SocketOffsetModifier,
													CurrentConfig.SpringArmSettings.SocketOffsetTransitionSpeed);
		TargetFOV = CurrentConfig.FOVSettings.FOV;

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
		CurrentSpringArm->AddSpringArmLengthLimits(	CurrentConfig.MinLineOfSight,
													CurrentConfig.MaxLineOfSight,
													CurrentConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);
		
		CurrentSpringArm->AddSocketOffset(			CurrentConfig.SpringArmSettings.SocketOffsetModifier,
													CurrentConfig.SpringArmSettings.SocketOffsetTransitionSpeed);
		AddFOV(CurrentConfig.FOVSettings.FOV);
	}
	OneTimeCameraModesApplied.Add(OneTimeCameraMode->GetClass()->GetName());
	UpdateCameraSettings(CurrentConfig);
}

void APlayerCameraManagerACS::InternalRemoveOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode)
{
	const FCameraConfig& CurrentModeConfig = CurrentCameraModeSettings->CameraConfig;
	const FCameraConfig& CurrentOneTimeCMConfig = OneTimeCameraMode->CameraConfig;
	// it will put on active the permanent mode that was active before and remove the one time mode.
	if (OneTimeCameraMode->bCameraModeDisable)
	{
		CurrentSpringArm->SetSpringArmLengthLimits(	CurrentModeConfig.MinLineOfSight, CurrentModeConfig.MaxLineOfSight,
													CurrentModeConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);
		CurrentSpringArm->ChangeSpringArmLength(	CurrentModeConfig.SpringArmSettings.SpringArmLengthModifier,
													CurrentModeConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);

		CurrentSpringArm->SetSocketOffset(			CurrentModeConfig.SpringArmSettings.SocketOffsetModifier,
													CurrentOneTimeCMConfig.SpringArmSettings.SocketOffsetTransitionSpeed);
		TargetFOV = CurrentModeConfig.FOVSettings.FOV;

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
		CurrentSpringArm->AddSpringArmLengthLimits(	-CurrentOneTimeCMConfig.MinLineOfSight,
													-CurrentOneTimeCMConfig.MaxLineOfSight,
													CurrentModeConfig.SpringArmSettings.SpringArmLengthTransitionSpeed);
		
		CurrentSpringArm->SubSocketOffset(			CurrentOneTimeCMConfig.SpringArmSettings.SocketOffsetModifier,
													CurrentOneTimeCMConfig.SpringArmSettings.SocketOffsetTransitionSpeed);
		SubFOV(CurrentOneTimeCMConfig.FOVSettings.FOV);
	}
	OneTimeCameraModesApplied.Remove(OneTimeCameraMode->GetClass()->GetName());
	UpdateCameraSettings(CurrentModeConfig);
}

void APlayerCameraManagerACS::UpdateCameraSettings(const FCameraConfig& NewCameraConfig)
{
	ViewPitchMin = NewCameraConfig.CamRotationSettings.MinPitch;
	ViewPitchMax = NewCameraConfig.CamRotationSettings.MaxPitch;
	ViewYawMin = NewCameraConfig.CamRotationSettings.MinYaw;
	ViewYawMax = NewCameraConfig.CamRotationSettings.MaxYaw;
	MinFOV = NewCameraConfig.FOVSettings.MinFOV;
	MaxFOV = NewCameraConfig.FOVSettings.MaxFOV;
	FOVLerpSpeed = NewCameraConfig.FOVSettings.FOVLerpSpeed;
	MinDitherCameraThreshold = NewCameraConfig.MinDistanceCamPlayer;
	MaxDitherCameraThreshold = NewCameraConfig.MaxDistanceCamPlayer;

	(NewCameraConfig.SpringArmSettings.bCameraLocationLag) ? EnableSpringArmLocationLag(NewCameraConfig.SpringArmSettings.CameraLocationLagSpeed, NewCameraConfig.SpringArmSettings.MaxLagDistance) : DisableSpringArmLocationLag();
	(NewCameraConfig.SpringArmSettings.bCameraRotationLag) ? EnableSpringArmRotationLag(NewCameraConfig.SpringArmSettings.CameraRotationLagSpeed) : DisableSpringArmRotationLag();
}

void APlayerCameraManagerACS::ChangeCurrentModifiers(UPermanentCameraMode* NewCameraSettings)
{
	// need to know that the currentCameraModeSettings has been used before.
	// this is invalid when play begins.
	if ((CurrentCameraModeSettings != nullptr) && !CurrentCameraModeSettings->CameraModifiersToApply.IsEmpty())
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
		for (const TSubclassOf<UCameraModifier> NewModifier : NewCameraSettings->CameraModifiersToApply)
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
	if (!OnCameraDistanceToDitherFX.IsBound() || GetOwner()->GetLocalRole() == ROLE_Authority)
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