// Copyright Epic Games, Inc. All Rights Reserved.

#include "SAST_GDADG_WOC_UE5GameMode.h"
#include "SAST_GDADG_WOC_UE5Character.h"
#include "UObject/ConstructorHelpers.h"

ASAST_GDADG_WOC_UE5GameMode::ASAST_GDADG_WOC_UE5GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
