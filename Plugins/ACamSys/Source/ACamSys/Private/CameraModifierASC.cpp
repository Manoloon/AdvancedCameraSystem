// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraModifierASC.h"
#include "Kismet/GameplayStatics.h"

bool UCameraModifierASC::ProcessViewRotation(AActor* ViewTarget, float DeltaTime, FRotator& OutViewRotation, FRotator& OutDeltaRot)
{
	Super::ProcessViewRotation(ViewTarget, DeltaTime, OutViewRotation, OutDeltaRot);
	if (!IsValid(ViewTarget))
	{
		return false;
	}
	if (const APawn* OwnerPawn = Cast<APawn>(ViewTarget))
	{
		if (const APlayerController* OwnerController = Cast<APlayerController>(OwnerPawn->Controller))
		{
			if (!OwnerController->RotationInput.IsNearlyZero(THRESH_QUAT_NORMALIZED))
			{
				CooldownRemaining = PlayerInputCooldown;
				return false;
			}
			if (CooldownRemaining > 0)
			{
				CooldownRemaining -= DeltaTime;
				return false;
			}
		}
		return false;
	}
	return false;
}

FCamInfoForModifiers UCameraModifierASC::GetCurrentModifiers() const
{
	return CurrentModifiers;	
}
bool UCameraModifierASC::OwnerHasChangedCamera() const
{
	return CooldownRemaining > 0;
}