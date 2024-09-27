// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BPI_Pawn.generated.h"

// Interface for the actors that interact with the Player Camera System.
UINTERFACE(MinimalAPI)
class UBPI_Pawn : public UInterface
{
	GENERATED_BODY()
};

class IBPI_Pawn
{
	GENERATED_BODY()

	//public:
	//virtual bool IsPlayerMoving() const = 0;
};