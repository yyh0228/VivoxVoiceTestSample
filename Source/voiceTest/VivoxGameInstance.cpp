// Fill out your copyright notice in the Description page of Project Settings.


#include "VivoxGameInstance.h"

/*
Server				https://unity.vivox.com/appconfig/14569-vivox-56022-udash
Domain				mtu1xp.vivox.com
Issuer				14569-vivox-56022-udash
Token key			e5FhovNZy3H498wyVWzeTFYUP4WiqK6e
*/
#define VIVOX_VOICE_SERVER TEXT("https://unity.vivox.com/appconfig/14569-vivox-56022-udash")
#define VIVOX_VOICE_DOMAIN TEXT("mtu1xp.vivox.com")
#define VIVOX_VOICE_ISSUER TEXT("14569-vivox-56022-udash")
#define VIVOX_VOICE_TOKEN_KEY TEXT("e5FhovNZy3H498wyVWzeTFYUP4WiqK6e")

void UVivoxGameInstance::Init()
{
	Super::Init();
	InitViovox();
}

void UVivoxGameInstance::Shutdown()
{
	Super::Shutdown();
	VivoxVoiceClient->Uninitialize();
}

void UVivoxGameInstance::InitViovox()
{
	// Get the VivoxVoiceClient
	VivoxVoiceClient = &static_cast<FVivoxCoreModule*>(&FModuleManager::Get().LoadModuleChecked(TEXT("VivoxCore")))->VoiceClient();
	VivoxVoiceClient->Initialize();
	Login();
}

void UVivoxGameInstance::Login()
{
	// Create a login session for the user
	LoggedInUserId = AccountId(VIVOX_VOICE_ISSUER, "PlayerId", VIVOX_VOICE_DOMAIN);
	ILoginSession& MyLoginSession(VivoxVoiceClient->GetLoginSession(LoggedInUserId));

	// Generate a login token
	FTimespan TokenExpiration = FTimespan::FromSeconds(90);
	FString LoginToken = MyLoginSession.GetLoginToken(VIVOX_VOICE_TOKEN_KEY, TokenExpiration);

	// Bind a delegate to the OnBeginLoginCompleted event
	ILoginSession::FOnBeginLoginCompletedDelegate OnBeginLoginCompleted;
	OnBeginLoginCompleted.BindLambda([this, &MyLoginSession](VivoxCoreError Error)
	{
		UE_LOG(LogTemp, Warning, TEXT("Login completed with error code: %d"), Error);
		JoinChannel();
	});

	MyLoginSession.BeginLogin(VIVOX_VOICE_SERVER, LoginToken, OnBeginLoginCompleted);

}

void UVivoxGameInstance::JoinChannel()
{
	// Get the login session and channel session
	ILoginSession& MyLoginSession = VivoxVoiceClient->GetLoginSession(LoggedInUserId);
	ChannelId Channel = ChannelId(VIVOX_VOICE_ISSUER, "ChannelId", VIVOX_VOICE_DOMAIN, ChannelType::Echo);
	IChannelSession& ChannelSession = MyLoginSession.GetChannelSession(Channel);

	FTimespan TokenExpiration = FTimespan::FromSeconds(90);
	FString JoinToken = ChannelSession.GetConnectToken(VIVOX_VOICE_TOKEN_KEY, TokenExpiration);

	ChannelSession.BeginConnect(true, false, true, JoinToken, NULL);

}
