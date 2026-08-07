// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TriggerBoxACS.generated.h"

class UOneTimeCameraMode;
class UPermanentCameraMode;
class UBillboardComponent;
class UBoxComponent;

UENUM()
enum class ETriggerCamModeType : uint8
{
	PermanentCameraMode,
	OneTimeCameraMode
};
/**
 * @brief A custom Trigger Actor that could trigger change of permanent camera modes.
 */
/// @ingroup Core 
/// @{
UCLASS()
class ACAMSYS_API ATriggerBoxACS : public AActor
{
	GENERATED_BODY()
public:	
	ATriggerBoxACS();
	UFUNCTION(BlueprintCallable)
	UBoxComponent* GetCollisionComponent() const {return CollisionComponent;}

	#if WITH_EDITORONLY_DATA
	UFUNCTION(BlueprintCallable)
	UBillboardComponent* GetSpriteComponent() const {return SpriteComponent;}
	#endif
private:
	#if WITH_EDITORONLY_DATA
	UPROPERTY(BlueprintReadOnly,meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UBillboardComponent> SpriteComponent;
	#endif
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
// TODO : make this trigger work for both camera modes, and remove the blueprint prototype 
protected:
	UFUNCTION(BlueprintCallable)
	bool ChangeCamera(APlayerController* PlayerController);
	
	UFUNCTION(BlueprintCallable)
	void SwapPermamentCameraMode(APlayerController* PlayerController);
	UFUNCTION(BlueprintCallable)
	void ActivateOneTimeCameraMode(APlayerController* PlayerController);
	
	UPROPERTY(EditAnywhere,Category = "Settings")
	ETriggerCamModeType CameramodeType = ETriggerCamModeType::PermanentCameraMode;
	UPROPERTY()
	TObjectPtr<UPermanentCameraMode> PrevPermCameraMode =nullptr;
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings"
		,meta=(EditCondition="CameramodeType == ETriggerCamModeType::PermanentCameraMode"))
	TObjectPtr<UPermanentCameraMode> PermanentCameraMode;
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings",
		meta=(EditCondition="CameramodeType == ETriggerCamModeType::PermanentCameraMode"))
	AActor* NewCameraActor;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings",
		meta=(EditCondition="CameramodeType == ETriggerCamModeType::OneTimeCameraMode"))
	TObjectPtr<UOneTimeCameraMode> OneTimeCameraMode;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings")
	FText ActorHint;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UBoxComponent> CollisionComponent;
};
/// @}