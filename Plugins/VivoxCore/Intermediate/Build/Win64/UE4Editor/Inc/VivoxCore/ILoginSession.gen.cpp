// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VivoxCore/Public/ILoginSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeILoginSession() {}
// Cross Module References
	VIVOXCORE_API UEnum* Z_Construct_UEnum_VivoxCore_ParticipantSpeakingUpdateRate();
	UPackage* Z_Construct_UPackage__Script_VivoxCore();
	VIVOXCORE_API UEnum* Z_Construct_UEnum_VivoxCore_TransmissionMode();
	VIVOXCORE_API UEnum* Z_Construct_UEnum_VivoxCore_SubscriptionReply();
	VIVOXCORE_API UEnum* Z_Construct_UEnum_VivoxCore_SubscriptionMode();
	VIVOXCORE_API UEnum* Z_Construct_UEnum_VivoxCore_LoginState();
// End Cross Module References
	static UEnum* ParticipantSpeakingUpdateRate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VivoxCore_ParticipantSpeakingUpdateRate, Z_Construct_UPackage__Script_VivoxCore(), TEXT("ParticipantSpeakingUpdateRate"));
		}
		return Singleton;
	}
	template<> VIVOXCORE_API UEnum* StaticEnum<ParticipantSpeakingUpdateRate>()
	{
		return ParticipantSpeakingUpdateRate_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ParticipantSpeakingUpdateRate(ParticipantSpeakingUpdateRate_StaticEnum, TEXT("/Script/VivoxCore"), TEXT("ParticipantSpeakingUpdateRate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VivoxCore_ParticipantSpeakingUpdateRate_Hash() { return 1778245070U; }
	UEnum* Z_Construct_UEnum_VivoxCore_ParticipantSpeakingUpdateRate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VivoxCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ParticipantSpeakingUpdateRate"), 0, Get_Z_Construct_UEnum_VivoxCore_ParticipantSpeakingUpdateRate_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ParticipantSpeakingUpdateRate::StateChange", (int64)ParticipantSpeakingUpdateRate::StateChange },
				{ "ParticipantSpeakingUpdateRate::Never", (int64)ParticipantSpeakingUpdateRate::Never },
				{ "ParticipantSpeakingUpdateRate::Update1Hz", (int64)ParticipantSpeakingUpdateRate::Update1Hz },
				{ "ParticipantSpeakingUpdateRate::Update5Hz", (int64)ParticipantSpeakingUpdateRate::Update5Hz },
				{ "ParticipantSpeakingUpdateRate::Update10Hz", (int64)ParticipantSpeakingUpdateRate::Update10Hz },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \\brief Define how often the SDK raises speech-related IChannelSession::EventAfterParticipantUpdated events while in channel.\n * \\remarks Use a per second rate (at the fidelity of your choice) when implementing a real-time audio energy meter.\n * This only controls participant update events due to changes in speech detection or changes in audio energy.\n * Other participant property state change events (for example, active media or muted state) occur regardless of setting.\n */" },
				{ "ModuleRelativePath", "Public/ILoginSession.h" },
				{ "Never.Comment", "/**\n     * \\brief Do not raise events for changes in participant speech detection or audio energy (use with caution).\n     */" },
				{ "Never.Name", "ParticipantSpeakingUpdateRate::Never" },
				{ "Never.ToolTip", "\\brief Do not raise events for changes in participant speech detection or audio energy (use with caution)." },
				{ "StateChange.Comment", "/**\n     * \\brief On participant state change in speech detection only (excludes audio energy).\n     */" },
				{ "StateChange.Name", "ParticipantSpeakingUpdateRate::StateChange" },
				{ "StateChange.ToolTip", "\\brief On participant state change in speech detection only (excludes audio energy)." },
				{ "ToolTip", "\\brief Define how often the SDK raises speech-related IChannelSession::EventAfterParticipantUpdated events while in channel.\n\\remarks Use a per second rate (at the fidelity of your choice) when implementing a real-time audio energy meter.\nThis only controls participant update events due to changes in speech detection or changes in audio energy.\nOther participant property state change events (for example, active media or muted state) occur regardless of setting." },
				{ "Update10Hz.Comment", "/**\n     * \\brief Update participant properties up to 10 times per second (includes audio energy).\n     */" },
				{ "Update10Hz.Name", "ParticipantSpeakingUpdateRate::Update10Hz" },
				{ "Update10Hz.ToolTip", "\\brief Update participant properties up to 10 times per second (includes audio energy)." },
				{ "Update1Hz.Comment", "/**\n     * \\brief Update participant properties up to 1 time per second (includes audio energy).\n     */" },
				{ "Update1Hz.Name", "ParticipantSpeakingUpdateRate::Update1Hz" },
				{ "Update1Hz.ToolTip", "\\brief Update participant properties up to 1 time per second (includes audio energy)." },
				{ "Update5Hz.Comment", "/**\n     * \\brief Update participant properties up to 5 times per second (includes audio energy).\n     */" },
				{ "Update5Hz.Name", "ParticipantSpeakingUpdateRate::Update5Hz" },
				{ "Update5Hz.ToolTip", "\\brief Update participant properties up to 5 times per second (includes audio energy)." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VivoxCore,
				nullptr,
				"ParticipantSpeakingUpdateRate",
				"ParticipantSpeakingUpdateRate",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* TransmissionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VivoxCore_TransmissionMode, Z_Construct_UPackage__Script_VivoxCore(), TEXT("TransmissionMode"));
		}
		return Singleton;
	}
	template<> VIVOXCORE_API UEnum* StaticEnum<TransmissionMode>()
	{
		return TransmissionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TransmissionMode(TransmissionMode_StaticEnum, TEXT("/Script/VivoxCore"), TEXT("TransmissionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VivoxCore_TransmissionMode_Hash() { return 3929319693U; }
	UEnum* Z_Construct_UEnum_VivoxCore_TransmissionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VivoxCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TransmissionMode"), 0, Get_Z_Construct_UEnum_VivoxCore_TransmissionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TransmissionMode::None", (int64)TransmissionMode::None },
				{ "TransmissionMode::Single", (int64)TransmissionMode::Single },
				{ "TransmissionMode::All", (int64)TransmissionMode::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Comment", "/**\n     * \\brief Adopt a policy of transmission into all channels simultaneously.\n     */" },
				{ "All.Name", "TransmissionMode::All" },
				{ "All.ToolTip", "\\brief Adopt a policy of transmission into all channels simultaneously." },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \\brief Define the policy of where microphone audio and injected audio get broadcast to.\n */" },
				{ "ModuleRelativePath", "Public/ILoginSession.h" },
				{ "None.Comment", "/**\n     * \\brief Adopt a policy of transmission into no channels.\n     */" },
				{ "None.Name", "TransmissionMode::None" },
				{ "None.ToolTip", "\\brief Adopt a policy of transmission into no channels." },
				{ "Single.Comment", "/**\n     * \\brief Adopt a policy of transmission into one channel at a time.\n     */" },
				{ "Single.Name", "TransmissionMode::Single" },
				{ "Single.ToolTip", "\\brief Adopt a policy of transmission into one channel at a time." },
				{ "ToolTip", "\\brief Define the policy of where microphone audio and injected audio get broadcast to." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VivoxCore,
				nullptr,
				"TransmissionMode",
				"TransmissionMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* SubscriptionReply_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VivoxCore_SubscriptionReply, Z_Construct_UPackage__Script_VivoxCore(), TEXT("SubscriptionReply"));
		}
		return Singleton;
	}
	template<> VIVOXCORE_API UEnum* StaticEnum<SubscriptionReply>()
	{
		return SubscriptionReply_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SubscriptionReply(SubscriptionReply_StaticEnum, TEXT("/Script/VivoxCore"), TEXT("SubscriptionReply"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VivoxCore_SubscriptionReply_Hash() { return 3189372063U; }
	UEnum* Z_Construct_UEnum_VivoxCore_SubscriptionReply()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VivoxCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SubscriptionReply"), 0, Get_Z_Construct_UEnum_VivoxCore_SubscriptionReply_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SubscriptionReply::Allow", (int64)SubscriptionReply::Allow },
				{ "SubscriptionReply::Block", (int64)SubscriptionReply::Block },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Allow.Comment", "/**\n     * \\brief Allow the incoming subscription.\n     */" },
				{ "Allow.Name", "SubscriptionReply::Allow" },
				{ "Allow.ToolTip", "\\brief Allow the incoming subscription." },
				{ "Block.Comment", "/**\n     * \\brief Block the incoming subscription.\n     */" },
				{ "Block.Name", "SubscriptionReply::Block" },
				{ "Block.ToolTip", "\\brief Block the incoming subscription." },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ILoginSession.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VivoxCore,
				nullptr,
				"SubscriptionReply",
				"SubscriptionReply",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* SubscriptionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VivoxCore_SubscriptionMode, Z_Construct_UPackage__Script_VivoxCore(), TEXT("SubscriptionMode"));
		}
		return Singleton;
	}
	template<> VIVOXCORE_API UEnum* StaticEnum<SubscriptionMode>()
	{
		return SubscriptionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SubscriptionMode(SubscriptionMode_StaticEnum, TEXT("/Script/VivoxCore"), TEXT("SubscriptionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VivoxCore_SubscriptionMode_Hash() { return 3638422987U; }
	UEnum* Z_Construct_UEnum_VivoxCore_SubscriptionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VivoxCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SubscriptionMode"), 0, Get_Z_Construct_UEnum_VivoxCore_SubscriptionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SubscriptionMode::Accept", (int64)SubscriptionMode::Accept },
				{ "SubscriptionMode::Block", (int64)SubscriptionMode::Block },
				{ "SubscriptionMode::Defer", (int64)SubscriptionMode::Defer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Accept.Comment", "/**\n     * \\brief Automatically accept all incoming subscription requests.\n     */" },
				{ "Accept.Name", "SubscriptionMode::Accept" },
				{ "Accept.ToolTip", "\\brief Automatically accept all incoming subscription requests." },
				{ "Block.Comment", "/**\n     * \\brief Automatically block all incoming subscription requests.\n     */" },
				{ "Block.Name", "SubscriptionMode::Block" },
				{ "Block.ToolTip", "\\brief Automatically block all incoming subscription requests." },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \\brief Determine how to handle incoming subscriptions (friend/follower requests).\n */" },
				{ "Defer.Comment", "/**\n     * \\brief Defer incoming subscription request handling to the application.\n     * This results in EventSubscriptionRequestReceived firing.\n     */" },
				{ "Defer.Name", "SubscriptionMode::Defer" },
				{ "Defer.ToolTip", "\\brief Defer incoming subscription request handling to the application.\nThis results in EventSubscriptionRequestReceived firing." },
				{ "ModuleRelativePath", "Public/ILoginSession.h" },
				{ "ToolTip", "\\brief Determine how to handle incoming subscriptions (friend/follower requests)." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VivoxCore,
				nullptr,
				"SubscriptionMode",
				"SubscriptionMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* LoginState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VivoxCore_LoginState, Z_Construct_UPackage__Script_VivoxCore(), TEXT("LoginState"));
		}
		return Singleton;
	}
	template<> VIVOXCORE_API UEnum* StaticEnum<LoginState>()
	{
		return LoginState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_LoginState(LoginState_StaticEnum, TEXT("/Script/VivoxCore"), TEXT("LoginState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VivoxCore_LoginState_Hash() { return 1222193445U; }
	UEnum* Z_Construct_UEnum_VivoxCore_LoginState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VivoxCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("LoginState"), 0, Get_Z_Construct_UEnum_VivoxCore_LoginState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LoginState::LoggedOut", (int64)LoginState::LoggedOut },
				{ "LoginState::LoggingIn", (int64)LoginState::LoggingIn },
				{ "LoginState::LoggedIn", (int64)LoginState::LoggedIn },
				{ "LoginState::LoggingOut", (int64)LoginState::LoggingOut },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \\brief The state of the login session.\n */" },
				{ "LoggedIn.Comment", "/**\n     * \\brief The login session is signed in.\n     */" },
				{ "LoggedIn.Name", "LoginState::LoggedIn" },
				{ "LoggedIn.ToolTip", "\\brief The login session is signed in." },
				{ "LoggedOut.Comment", "/**\n     * \\brief The login session is signed out.\n     */" },
				{ "LoggedOut.Name", "LoginState::LoggedOut" },
				{ "LoggedOut.ToolTip", "\\brief The login session is signed out." },
				{ "LoggingIn.Comment", "/**\n     * \\brief The login session is in the process of signing in.\n     */" },
				{ "LoggingIn.Name", "LoginState::LoggingIn" },
				{ "LoggingIn.ToolTip", "\\brief The login session is in the process of signing in." },
				{ "LoggingOut.Comment", "/**\n     * \\brief The login Session is in the process of signing out.\n     */" },
				{ "LoggingOut.Name", "LoginState::LoggingOut" },
				{ "LoggingOut.ToolTip", "\\brief The login Session is in the process of signing out." },
				{ "ModuleRelativePath", "Public/ILoginSession.h" },
				{ "ToolTip", "\\brief The state of the login session." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VivoxCore,
				nullptr,
				"LoginState",
				"LoginState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
