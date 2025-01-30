// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TriggerBoxACS.generated.h"

class UPermanentCameraMode;
class UBillboardComponent;
class UBoxComponent;

UCLASS(Abstract)
class ACAMSYS_API ATriggerBoxACS : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
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

protected:
	UFUNCTION(BlueprintCallable)
	void ChangeCamera();
	UFUNCTION(BlueprintCallable)
	void SwapPermamentCameraMode();
	UPROPERTY()
	TObjectPtr<UPermanentCameraMode> PrevPermCameraMode;
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings")
	TObjectPtr<UPermanentCameraMode> PermanentCameraMode;
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings")
	TObjectPtr<AActor> NewCameraActor;
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings")
	FText ActorHint;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UBoxComponent> CollisionComponent;
};
