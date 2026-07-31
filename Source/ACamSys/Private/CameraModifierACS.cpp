// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#include "CameraModifierACS.h"

#include "PlayerCameraManagerACS.h"

void UCameraModifierACS::AddedToCamera(APlayerCameraManager* Camera)
{
	Super::AddedToCamera(Camera);
	if (!OwnerController)
	{
		if (const APawn* OwnerPawn = Cast<APawn>(Camera->GetOwner()))
		{
			OwnerController = Cast<APlayerController>(OwnerPawn->Controller);
		}
	}
}

bool UCameraModifierACS::ProcessViewRotation(AActor* ViewTarget, float DeltaTime, FRotator& OutViewRotation,
                                             FRotator& OutDeltaRot)
{
	Super::ProcessViewRotation(ViewTarget, DeltaTime, OutViewRotation, OutDeltaRot);
	if (!IsValid(ViewTarget) || !OwnerController)
	{
		return false;
	}
		if (!OwnerController->RotationInput.IsNearlyZero(THRESH_QUAT_NORMALIZED))
		{
			CooldownRemaining = PlayerInputCooldown;
			return false;
		}
		if (CooldownRemaining > 0.0f)
		{
			CooldownRemaining -= DeltaTime;
			return false;
		}
	return false;
}

FCamInfoForModifiers UCameraModifierACS::GetCurrentModifiers() const
{
	return CurrentModifiers;
}

bool UCameraModifierACS::OwnerHasChangedCamera() const
{
	return !FMath::IsNearlyZero(CooldownRemaining,0.1f);
}
