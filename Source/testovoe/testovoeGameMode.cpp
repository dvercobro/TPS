// Copyright Epic Games, Inc. All Rights Reserved.

#include "testovoeGameMode.h"
#include "testovoeCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "TestovoeGameState.h"\

AtestovoeGameMode::AtestovoeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	GameStateClass = ATestovoeGameState::StaticClass();
}
