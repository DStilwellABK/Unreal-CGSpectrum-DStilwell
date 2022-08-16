// Copyright Epic Games, Inc. All Rights Reserved.

#include "DoorProjectGameMode.h"
#include "DoorProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADoorProjectGameMode::ADoorProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
