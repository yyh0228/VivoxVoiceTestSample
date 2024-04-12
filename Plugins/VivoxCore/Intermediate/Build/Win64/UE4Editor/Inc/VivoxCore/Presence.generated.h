// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIVOXCORE_Presence_generated_h
#error "Presence.generated.h already included, missing '#pragma once' in Presence.h"
#endif
#define VIVOXCORE_Presence_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID voiceTest_Plugins_VivoxCore_Source_VivoxCore_Public_Presence_h


#define FOREACH_ENUM_PRESENCESTATUS(op) \
	op(PresenceStatus::Unavailable) \
	op(PresenceStatus::Available) \
	op(PresenceStatus::Chat) \
	op(PresenceStatus::DoNotDisturb) \
	op(PresenceStatus::Away) \
	op(PresenceStatus::ExtendedAway) 

enum class PresenceStatus : uint8;
template<> VIVOXCORE_API UEnum* StaticEnum<PresenceStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
