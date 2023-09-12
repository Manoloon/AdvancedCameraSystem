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

void APlayerCameraManagerACS::ApplyCameraModeSettings(const TSubclassOf<UPermanentCameraMode>& CameraModeClass)
{
	if (!IsOwnerLocalController())
	{
		return;
	}
	UPermanentCameraMode* NewCameraSettings = NewObject<UPermanentCameraMode>(this, CameraModeClass);

	const FCameraConfig& CurrentModeConfig = NewCameraSettings->CameraConfig;
	if(!IsValid(CurrentSpringArm))
	{
		UE_LOG(LogTemp,Error,TEXT("Current Spring arm is not Valid"));
		return;
	}
	CurrentSpringArm->SetSpringArmLengthLimits(CurrentModeConfig.MinLineOfSight, CurrentModeConfig.MaxLineOfSight, CurrentModeConfig.SpringArmLengthTransitionSpeed);
	CurrentSpringArm->ChangeSpringArmLength(CurrentModeConfig.SpringArmLengthModifier, CurrentModeConfig.SpringArmLengthTransitionSpeed);

	CurrentSpringArm->SetSocketOffset(CurrentModeConfig.SocketOffsetModifier, CurrentModeConfig.SocketOffsetTransitionSpeed);
	CurrentSpringArm->SetTargetOffset(CurrentModeConfig.TargetOffset);

	TargetFOV = CurrentModeConfig.FOV;

	UpdateCameraSettings(CurrentModeConfig);

	ChangeCurrentModifiers(NewCameraSettings);
	CurrentCameraModeSettings = NewCameraSettings;
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


USpringArmComponentACS* APlayerCameraManagerACS::GetCurrentSpringArmComponent() const
{
	return CurrentSpringArm;
}

UCameraComponent* APlayerCameraManagerACS::GetCurrentCameraComponent() const
{
	return CurrentCamera;
}

void APlayerCameraManagerACS::SetSpringArmDistance(const float NewDistance) const
{
	if (!IsValid(CurrentSpringArm))
	{
		return;
	}
	CurrentSpringArm->ChangeSpringArmLength(NewDistance, CurrentCameraModeSettings->CameraConfig.SpringArmLengthTransitionSpeed);
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

	if (!GetWorldTimerManager().IsTimerActive(DitherTimerHandler))
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
	CurrentSpringArm = Cast<USpringArmComponentACS>(GetViewTarget()->FindComponentByClass(USpringArmComponentACS::StaticClass()));
}

void APlayerCameraManagerACS::SetCurrentCameraReference()
{
	CurrentCamera = Cast<UCameraComponent>(GetViewTarget()->FindComponentByClass(UCameraComponent::StaticClass()));
}

void APlayerCameraManagerACS::UpdateOneTimeCameraModesSet(const UOneTimeCameraMode* OneTimeCameraMode)
{
	(IsOneTimeCameraModeApplied(OneTimeCameraMode)) ? InternalRemoveOneTimeCameraMode(OneTimeCameraMode) : InternalApplyOneTimeCameraMode(OneTimeCameraMode);
}

void APlayerCameraManagerACS::InternalApplyOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode)
{
	if (!IsOwnerLocalController())
	{
		return;
	}
	const FCameraConfig& CurrentOneTimeCMConfig = OneTimeCameraMode->CameraConfig;
	if (OneTimeCameraMode->bCameraModeDisable)
	{
		CurrentSpringArm->SetSpringArmLengthLimits(CurrentOneTimeCMConfig.MinLineOfSight, CurrentOneTimeCMConfig.MaxLineOfSight, CurrentOneTimeCMConfig.SpringArmLengthTransitionSpeed);
		CurrentSpringArm->ChangeSpringArmLength(CurrentOneTimeCMConfig.SpringArmLengthModifier, CurrentOneTimeCMConfig.SpringArmLengthTransitionSpeed);

		CurrentSpringArm->SetSocketOffset(CurrentOneTimeCMConfig.SocketOffsetModifier, CurrentOneTimeCMConfig.SocketOffsetTransitionSpeed);
		TargetFOV = CurrentOneTimeCMConfig.FOV;

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
		CurrentSpringArm->AddSpringArmLengthLimits(CurrentOneTimeCMConfig.MinLineOfSight, CurrentOneTimeCMConfig.MaxLineOfSight, CurrentOneTimeCMConfig.SpringArmLengthTransitionSpeed);
		CurrentSpringArm->AddSocketOffset(CurrentOneTimeCMConfig.SocketOffsetModifier, CurrentOneTimeCMConfig.SocketOffsetTransitionSpeed);
		AddFOV(CurrentOneTimeCMConfig.FOV);
	}
	OneTimeCameraModesApplied.Add(OneTimeCameraMode->GetClass()->GetName());
	UpdateCameraSettings(CurrentOneTimeCMConfig);
}

void APlayerCameraManagerACS::InternalRemoveOneTimeCameraMode(const UOneTimeCameraMode* OneTimeCameraMode)
{
	const FCameraConfig& CurrentModeConfig = CurrentCameraModeSettings->CameraConfig;
	const FCameraConfig& CurrentOneTimeCMConfig = OneTimeCameraMode->CameraConfig;
	if (OneTimeCameraMode->bCameraModeDisable)
	{
		CurrentSpringArm->SetSpringArmLengthLimits(CurrentModeConfig.MinLineOfSight, CurrentModeConfig.MaxLineOfSight, CurrentModeConfig.SpringArmLengthTransitionSpeed);
		CurrentSpringArm->ChangeSpringArmLength(CurrentModeConfig.SpringArmLengthModifier, CurrentModeConfig.SpringArmLengthTransitionSpeed);

		CurrentSpringArm->SetSocketOffset(CurrentModeConfig.SocketOffsetModifier, CurrentOneTimeCMConfig.SocketOffsetTransitionSpeed);
		TargetFOV = CurrentModeConfig.FOV;

		if (ModifierList.IsEmpty())
		{
			return;
		}
		for (const TObjectPtr<UCameraModifier>& NewModifier : ModifierList)
		{
			NewModifier->EnableModifier();
		}
	}
	else
	{
		CurrentSpringArm->AddSpringArmLengthLimits(-CurrentOneTimeCMConfig.MinLineOfSight, -CurrentOneTimeCMConfig.MaxLineOfSight, CurrentModeConfig.SpringArmLengthTransitionSpeed);
		CurrentSpringArm->SubSocketOffset(CurrentOneTimeCMConfig.SocketOffsetModifier, CurrentOneTimeCMConfig.SocketOffsetTransitionSpeed);
		SubFOV(CurrentOneTimeCMConfig.FOV);
	}
	OneTimeCameraModesApplied.Remove(OneTimeCameraMode->GetClass()->GetName());
	UpdateCameraSettings(CurrentModeConfig);
}

void APlayerCameraManagerACS::UpdateCameraSettings(const FCameraConfig& NewCameraConfig)
{
	ViewPitchMin = NewCameraConfig.MinPitch;
	ViewPitchMax = NewCameraConfig.MaxPitch;
	ViewYawMin = NewCameraConfig.MinYaw;
	ViewYawMax = NewCameraConfig.MaxYaw;
	MinFOV = NewCameraConfig.MinFOV;
	MaxFOV = NewCameraConfig.MaxFOV;
	FOVLerpSpeed = NewCameraConfig.FOVLerpSpeed;
	MinDitherCameraThreshold = NewCameraConfig.MinDistanceCamPlayer;
	MaxDitherCameraThreshold = NewCameraConfig.MaxDistanceCamPlayer;

	(NewCameraConfig.bCameraLocationLag) ? EnableSpringArmLocationLag(NewCameraConfig.CameraLocationLagSpeed, NewCameraConfig.MaxLagDistance) : DisableSpringArmLocationLag();
	(NewCameraConfig.bCameraRotationLag) ? EnableSpringArmRotationLag(NewCameraConfig.CameraRotationLagSpeed) : DisableSpringArmRotationLag();
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