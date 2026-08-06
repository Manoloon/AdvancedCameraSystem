// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TriggerBoxACS.generated.h"

class UPermanentCameraMode;
class UBillboardComponent;
class UBoxComponent;

/**
 * @brief A custom Trigger Actor that could trigger change of permanent camera modes.
 * 
 */
/// @ingroup Core 
/// @{
UCLASS(Abstract)
class ACAMSYS_API ATriggerBoxACS : public AActor
{
	GENERATED_BODY()
	
public:	
	ATriggerBoxACS();
	UFUNCTION(BlueprintCallable)
	UBoxComponent* GetCollisionComponent() const {return CollisionComponent;}

	#if WITH_EDITORONLY_DATA
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
	UPROPERTY()
	TObjectPtr<UPermanentCameraMode> PrevPermCameraMode;
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings")
	TObjectPtr<UPermanentCameraMode> PermanentCameraMode;
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings")
	AActor* NewCameraActor;
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings")
	FText ActorHint;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UBoxComponent> CollisionComponent;
};
/// @}