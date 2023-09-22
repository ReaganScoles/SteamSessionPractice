// Copyright Epic Games, Inc. All Rights Reserved.

#include "SteamSeshGameMode.h"
#include "SteamSeshCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASteamSeshGameMode::ASteamSeshGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
