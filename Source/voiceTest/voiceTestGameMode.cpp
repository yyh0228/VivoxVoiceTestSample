// Copyright Epic Games, Inc. All Rights Reserved.

#include "voiceTestGameMode.h"
#include "voiceTestHUD.h"
#include "voiceTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AvoiceTestGameMode::AvoiceTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AvoiceTestHUD::StaticClass();
}
