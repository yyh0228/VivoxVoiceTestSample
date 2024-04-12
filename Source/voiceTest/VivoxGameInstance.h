// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "VivoxCore.h"
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "VivoxGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class VOICETEST_API UVivoxGameInstance : public UGameInstance
{
	GENERATED_BODY()

	virtual void Init() override;
	virtual void Shutdown() override;
	
	void InitViovox();
	void Login();
	void JoinChannel();

	IClient* VivoxVoiceClient;
	AccountId LoggedInUserId;
};
