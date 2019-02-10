// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMELIFTCLIENTSDK_GameLiftClientTypes_generated_h
#error "GameLiftClientTypes.generated.h already included, missing '#pragma once' in GameLiftClientTypes.h"
#endif
#define GAMELIFTCLIENTSDK_GameLiftClientTypes_generated_h

#define ParaRPG_Plugins_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientTypes_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameLiftGameSessionConfig_Statics; \
	GAMELIFTCLIENTSDK_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__MaxPlayers() { return STRUCT_OFFSET(FGameLiftGameSessionConfig, MaxPlayers); } \
	FORCEINLINE static uint32 __PPO__AliasID() { return STRUCT_OFFSET(FGameLiftGameSessionConfig, AliasID); } \
	FORCEINLINE static uint32 __PPO__GameSessionProperties() { return STRUCT_OFFSET(FGameLiftGameSessionConfig, GameSessionProperties); }


#define ParaRPG_Plugins_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientTypes_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameLiftGameSessionServerProperties_Statics; \
	GAMELIFTCLIENTSDK_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ParaRPG_Plugins_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientTypes_h


#define FOREACH_ENUM_EGAMELIFTGAMESESSIONSTATUS(op) \
	op(EGameLiftGameSessionStatus::STATUS_Activating) \
	op(EGameLiftGameSessionStatus::STATUS_Active) \
	op(EGameLiftGameSessionStatus::STATUS_Error) \
	op(EGameLiftGameSessionStatus::STATUS_NotSet) \
	op(EGameLiftGameSessionStatus::STATUS_Terminating) \
	op(EGameLiftGameSessionStatus::STATUS_Terminated) \
	op(EGameLiftGameSessionStatus::STATUS_NoStatus) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
