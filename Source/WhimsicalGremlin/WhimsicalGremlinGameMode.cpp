// Copyright Epic Games, Inc. All Rights Reserved.

#include "WhimsicalGremlinGameMode.h"
#include "WhimsicalGremlinCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWhimsicalGremlinGameMode::AWhimsicalGremlinGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
