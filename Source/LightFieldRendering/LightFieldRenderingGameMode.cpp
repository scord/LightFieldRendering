// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "LightFieldRendering.h"
#include "LightFieldRenderingGameMode.h"
#include "LightFieldRenderingHUD.h"
#include "LightFieldRenderingCharacter.h"

ALightFieldRenderingGameMode::ALightFieldRenderingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALightFieldRenderingHUD::StaticClass();
}
