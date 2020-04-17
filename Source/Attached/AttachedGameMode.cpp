// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "AttachedGameMode.h"
#include "AttachedHUD.h"
#include "AttachedCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAttachedGameMode::AAttachedGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAttachedHUD::StaticClass();
}
