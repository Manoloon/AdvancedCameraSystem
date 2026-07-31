// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#include "TriggerBoxACS.h"

#include "ACSLog.h"
#include "PlayerCameraManagerACS.h"
#include "Components/BillboardComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "Interfaces/BPI_Pawn.h"

// Sets default values
ATriggerBoxACS::ATriggerBoxACS()
{
	SetCanBeDamaged(false);
	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
	if(CollisionComponent)
	{
		RootComponent = CollisionComponent;
		CollisionComponent->bHiddenInGame = false;
	}
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ATriggerBoxACS::OnOverlapBegin);
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	#if WITH_EDITORONLY_DATA
	SpriteComponent = CreateEditorOnlyDefaultSubobject<UBillboardComponent>(TEXT("SpriteComp"));
	if(SpriteComponent)
	{
		struct FConstructorStatics
		{
			ConstructorHelpers::FObjectFinderOptional<UTexture2D> TriggerTextureObj;
			FName ID_Trigger;
			FText Name_Trigger;
			FConstructorStatics() :
				TriggerTextureObj(TEXT("/Engine/EditorResources/S_Trigger")),
				ID_Trigger(TEXT("Triggers")),
				Name_Trigger(NSLOCTEXT("SpriteCategory","Triggers","Triggers")){}
		};
		static FConstructorStatics ConstructorStatics;
		SpriteComponent->Sprite = ConstructorStatics.TriggerTextureObj.Get();
		SpriteComponent->SetRelativeScale3D(FVector(0.5,0.5,0.5));
		SpriteComponent->bHiddenInGame = false;
		SpriteComponent->SpriteInfo.Category = ConstructorStatics.ID_Trigger;
		SpriteComponent->SpriteInfo.DisplayName = ConstructorStatics.Name_Trigger;
		SpriteComponent->bIsScreenSizeScaled = true;
	}
	#endif
}

void ATriggerBoxACS::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor->GetClass()->ImplementsInterface(UBPI_Pawn::StaticClass()))
	{
		ChangeCamera();
		SwapPermamentCameraMode();
	}
}

void ATriggerBoxACS::ChangeCamera()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (!PlayerController)
	{
		UE_LOG(LogACS,Error,TEXT("[%s] Player Controller not available"),*GetNameSafe(this));
		return;
	}
	if (NewCameraActor && PlayerController->GetViewTarget() != NewCameraActor)
	{
		PlayerController->SetViewTargetWithBlend(NewCameraActor);
	}
	else
	{
		PlayerController->SetViewTargetWithBlend(PlayerController->GetPawn());
	}		
}

void ATriggerBoxACS::SwapPermamentCameraMode()
{
	const APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (!PlayerController)
	{
		UE_LOG(LogACS,Error,TEXT("[%s] Player Controller not available"),*GetNameSafe(this));
		return;
	}
	if(APlayerCameraManagerACS* ACSCameraManager = Cast<APlayerCameraManagerACS>(PlayerController->PlayerCameraManager))
	{
		if(ACSCameraManager->GetCurrentCameraModeSettings() != PermanentCameraMode)
		{
			PrevPermCameraMode = ACSCameraManager->GetCurrentCameraModeSettings();
			ACSCameraManager->ApplyCameraModeSettings(PermanentCameraMode);
		}
		else
		{
			ACSCameraManager->ApplyCameraModeSettings(PrevPermCameraMode);
		}
	}
}
