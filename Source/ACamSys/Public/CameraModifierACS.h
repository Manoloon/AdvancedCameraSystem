// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#pragma once
/**
 * This is the abstract class to create the camera modifiers for the system.
 */
#include "CoreMinimal.h"
#include "Structs/SettingsStructs.h"
#include "Camera/CameraModifier.h"
#include "CameraModifierACS.generated.h"

UCLASS(Abstract, BlueprintType)
class ACAMSYS_API UCameraModifierACS : public UCameraModifier
{
	GENERATED_BODY()

public:
	/** @internal */
	virtual void AddedToCamera(APlayerCameraManager* Camera) override;
	/** @internal */
	virtual bool ProcessViewRotation(AActor* ViewTarget, float DeltaTime, FRotator& OutViewRotation, FRotator& OutDeltaRot) override;
	
	/// @return if the Owner have move the camera , or the cooldown its over.
	bool OwnerHasChangedCamera() const;
	
	/// this is the cooldown to test if the player have move the camera, this is healthy because its avoid to mess up 
	/// with the camera rotation and location if the player is trying to use it.
	UPROPERTY(EditAnywhere, Category = Settings)
	float PlayerInputCooldown = 1.0f;
	/// The probe size to test Line of Sight
	UPROPERTY(EditAnywhere, Category = Settings)
	float LineOfSightProbeSize = 12.0f;
protected:
	UPROPERTY()
	class APlayerCameraManagerACS* CameraManager;
	UPROPERTY()
	APlayerController* OwnerController;
private:
	float CooldownRemaining;
};