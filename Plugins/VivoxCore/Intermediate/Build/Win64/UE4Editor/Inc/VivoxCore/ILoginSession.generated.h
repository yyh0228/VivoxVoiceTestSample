// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIVOXCORE_ILoginSession_generated_h
#error "ILoginSession.generated.h already included, missing '#pragma once' in ILoginSession.h"
#endif
#define VIVOXCORE_ILoginSession_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID voiceTest_Plugins_VivoxCore_Source_VivoxCore_Public_ILoginSession_h


#define FOREACH_ENUM_PARTICIPANTSPEAKINGUPDATERATE(op) \
	op(ParticipantSpeakingUpdateRate::StateChange) \
	op(ParticipantSpeakingUpdateRate::Never) \
	op(ParticipantSpeakingUpdateRate::Update1Hz) \
	op(ParticipantSpeakingUpdateRate::Update5Hz) \
	op(ParticipantSpeakingUpdateRate::Update10Hz) 

enum class ParticipantSpeakingUpdateRate : uint8;
template<> VIVOXCORE_API UEnum* StaticEnum<ParticipantSpeakingUpdateRate>();

#define FOREACH_ENUM_TRANSMISSIONMODE(op) \
	op(TransmissionMode::None) \
	op(TransmissionMode::Single) \
	op(TransmissionMode::All) 

enum class TransmissionMode : uint8;
template<> VIVOXCORE_API UEnum* StaticEnum<TransmissionMode>();

#define FOREACH_ENUM_SUBSCRIPTIONREPLY(op) \
	op(SubscriptionReply::Allow) \
	op(SubscriptionReply::Block) 

enum class SubscriptionReply : uint8;
template<> VIVOXCORE_API UEnum* StaticEnum<SubscriptionReply>();

#define FOREACH_ENUM_SUBSCRIPTIONMODE(op) \
	op(SubscriptionMode::Accept) \
	op(SubscriptionMode::Block) \
	op(SubscriptionMode::Defer) 

enum class SubscriptionMode : uint8;
template<> VIVOXCORE_API UEnum* StaticEnum<SubscriptionMode>();

#define FOREACH_ENUM_LOGINSTATE(op) \
	op(LoginState::LoggedOut) \
	op(LoginState::LoggingIn) \
	op(LoginState::LoggedIn) \
	op(LoginState::LoggingOut) 

enum class LoginState : uint8;
template<> VIVOXCORE_API UEnum* StaticEnum<LoginState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
