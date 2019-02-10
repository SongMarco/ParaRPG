// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameLiftCreatePlayerSession;
class UGameLiftDescribeGameSession;
struct FGameLiftGameSessionConfig;
class UGameLiftCreateGameSession;
class UGameLiftClientObject;
#ifdef GAMELIFTCLIENTSDK_GameLiftClientObject_generated_h
#error "GameLiftClientObject.generated.h already included, missing '#pragma once' in GameLiftClientObject.h"
#endif
#define GAMELIFTCLIENTSDK_GameLiftClientObject_generated_h

#define ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreatePlayerSession) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GameSessionID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UniquePlayerID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameLiftCreatePlayerSession**)Z_Param__Result=P_THIS->CreatePlayerSession(Z_Param_GameSessionID,Z_Param_UniquePlayerID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDescribeGameSession) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GameSessionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameLiftDescribeGameSession**)Z_Param__Result=P_THIS->DescribeGameSession(Z_Param_GameSessionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGameSession) \
	{ \
		P_GET_STRUCT(FGameLiftGameSessionConfig,Z_Param_GameSessionProperties); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameLiftCreateGameSession**)Z_Param__Result=P_THIS->CreateGameSession(Z_Param_GameSessionProperties); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGameLiftObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessKey); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Secret); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Region); \
		P_GET_UBOOL(Z_Param_bUsingGameLiftLocal); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LocalPort); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameLiftClientObject**)Z_Param__Result=UGameLiftClientObject::CreateGameLiftObject(Z_Param_AccessKey,Z_Param_Secret,Z_Param_Region,Z_Param_bUsingGameLiftLocal,Z_Param_LocalPort); \
		P_NATIVE_END; \
	}


#define ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreatePlayerSession) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GameSessionID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UniquePlayerID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameLiftCreatePlayerSession**)Z_Param__Result=P_THIS->CreatePlayerSession(Z_Param_GameSessionID,Z_Param_UniquePlayerID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDescribeGameSession) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GameSessionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameLiftDescribeGameSession**)Z_Param__Result=P_THIS->DescribeGameSession(Z_Param_GameSessionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGameSession) \
	{ \
		P_GET_STRUCT(FGameLiftGameSessionConfig,Z_Param_GameSessionProperties); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameLiftCreateGameSession**)Z_Param__Result=P_THIS->CreateGameSession(Z_Param_GameSessionProperties); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGameLiftObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessKey); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Secret); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Region); \
		P_GET_UBOOL(Z_Param_bUsingGameLiftLocal); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LocalPort); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameLiftClientObject**)Z_Param__Result=UGameLiftClientObject::CreateGameLiftObject(Z_Param_AccessKey,Z_Param_Secret,Z_Param_Region,Z_Param_bUsingGameLiftLocal,Z_Param_LocalPort); \
		P_NATIVE_END; \
	}


#define ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameLiftClientObject(); \
	friend struct Z_Construct_UClass_UGameLiftClientObject_Statics; \
public: \
	DECLARE_CLASS(UGameLiftClientObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameLiftClientSDK"), NO_API) \
	DECLARE_SERIALIZER(UGameLiftClientObject)


#define ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGameLiftClientObject(); \
	friend struct Z_Construct_UClass_UGameLiftClientObject_Statics; \
public: \
	DECLARE_CLASS(UGameLiftClientObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameLiftClientSDK"), NO_API) \
	DECLARE_SERIALIZER(UGameLiftClientObject)


#define ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameLiftClientObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameLiftClientObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameLiftClientObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameLiftClientObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameLiftClientObject(UGameLiftClientObject&&); \
	NO_API UGameLiftClientObject(const UGameLiftClientObject&); \
public:


#define ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameLiftClientObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameLiftClientObject(UGameLiftClientObject&&); \
	NO_API UGameLiftClientObject(const UGameLiftClientObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameLiftClientObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameLiftClientObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameLiftClientObject)


#define ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_17_PRIVATE_PROPERTY_OFFSET
#define ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_14_PROLOG
#define ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_17_PRIVATE_PROPERTY_OFFSET \
	ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_17_RPC_WRAPPERS \
	ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_17_INCLASS \
	ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_17_PRIVATE_PROPERTY_OFFSET \
	ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_17_INCLASS_NO_PURE_DECLS \
	ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ParaRPG_Plugins_backupLib_GameLiftClientSDK_yeti_Source_GameLiftClientSDK_Public_GameLiftClientObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
