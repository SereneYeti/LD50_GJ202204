// Copyright Epic Games, Inc. All Rights Reserved.

#include "LD50_GJ202204GameMode.h"
#include "LD50_GJ202204Character.h"
#include "UObject/ConstructorHelpers.h"

ALD50_GJ202204GameMode::ALD50_GJ202204GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
