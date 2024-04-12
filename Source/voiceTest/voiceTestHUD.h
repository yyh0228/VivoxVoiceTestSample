// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "voiceTestHUD.generated.h"

UCLASS()
class AvoiceTestHUD : public AHUD
{
	GENERATED_BODY()

public:
	AvoiceTestHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

