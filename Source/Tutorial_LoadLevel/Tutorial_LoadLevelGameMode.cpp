// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tutorial_LoadLevelGameMode.h"
#include "Tutorial_LoadLevelCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATutorial_LoadLevelGameMode::ATutorial_LoadLevelGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
