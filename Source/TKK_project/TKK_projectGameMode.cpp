// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TKK_projectGameMode.h"
#include "TKK_projectHUD.h"
#include "TKK_projectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATKK_projectGameMode::ATKK_projectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATKK_projectHUD::StaticClass();
}
