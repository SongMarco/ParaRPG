// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameLiftClientSDK/Public/GameLiftClientApi.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiftClientApi() {}
// Cross Module References
	GAMELIFTCLIENTSDK_API UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameLiftClientSDK();
	GAMELIFTCLIENTSDK_API UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature();
	GAMELIFTCLIENTSDK_API UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature();
	GAMELIFTCLIENTSDK_API UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature();
	GAMELIFTCLIENTSDK_API UEnum* Z_Construct_UEnum_GameLiftClientSDK_EGameLiftGameSessionStatus();
	GAMELIFTCLIENTSDK_API UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature();
	GAMELIFTCLIENTSDK_API UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature();
	GAMELIFTCLIENTSDK_API UEnum* Z_Construct_UEnum_GameLiftClientSDK_EActivateStatus();
	GAMELIFTCLIENTSDK_API UClass* Z_Construct_UClass_UGameLiftCreateGameSession_NoRegister();
	GAMELIFTCLIENTSDK_API UClass* Z_Construct_UClass_UGameLiftCreateGameSession();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMELIFTCLIENTSDK_API UFunction* Z_Construct_UFunction_UGameLiftCreateGameSession_Activate();
	GAMELIFTCLIENTSDK_API UClass* Z_Construct_UClass_UGameLiftDescribeGameSession_NoRegister();
	GAMELIFTCLIENTSDK_API UClass* Z_Construct_UClass_UGameLiftDescribeGameSession();
	GAMELIFTCLIENTSDK_API UFunction* Z_Construct_UFunction_UGameLiftDescribeGameSession_Activate();
	GAMELIFTCLIENTSDK_API UClass* Z_Construct_UClass_UGameLiftCreatePlayerSession_NoRegister();
	GAMELIFTCLIENTSDK_API UClass* Z_Construct_UClass_UGameLiftCreatePlayerSession();
	GAMELIFTCLIENTSDK_API UFunction* Z_Construct_UFunction_UGameLiftCreatePlayerSession_Activate();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature_Statics
	{
		struct _Script_GameLiftClientSDK_eventOnCreatePlayerSessionFailed_Parms
		{
			FString ErrorMessage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature_Statics::NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_GameLiftClientSDK_eventOnCreatePlayerSessionFailed_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameLiftClientSDK, "OnCreatePlayerSessionFailed__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_GameLiftClientSDK_eventOnCreatePlayerSessionFailed_Parms), Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics
	{
		struct _Script_GameLiftClientSDK_eventOnCreatePlayerSessionSuccess_Parms
		{
			FString IPAddress;
			FString Port;
			FString PlayerSessionID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerSessionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IPAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_PlayerSessionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_PlayerSessionID = { UE4CodeGen_Private::EPropertyClass::Str, "PlayerSessionID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_GameLiftClientSDK_eventOnCreatePlayerSessionSuccess_Parms, PlayerSessionID), METADATA_PARAMS(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_PlayerSessionID_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_PlayerSessionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_Port_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_Port = { UE4CodeGen_Private::EPropertyClass::Str, "Port", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_GameLiftClientSDK_eventOnCreatePlayerSessionSuccess_Parms, Port), METADATA_PARAMS(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_Port_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_IPAddress = { UE4CodeGen_Private::EPropertyClass::Str, "IPAddress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_GameLiftClientSDK_eventOnCreatePlayerSessionSuccess_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_IPAddress_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_IPAddress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_PlayerSessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_IPAddress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameLiftClientSDK, "OnCreatePlayerSessionSuccess__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_GameLiftClientSDK_eventOnCreatePlayerSessionSuccess_Parms), Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature_Statics
	{
		struct _Script_GameLiftClientSDK_eventOnDescribeGameSessionStateFailed_Parms
		{
			FString ErrorMessage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature_Statics::NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_GameLiftClientSDK_eventOnDescribeGameSessionStateFailed_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameLiftClientSDK, "OnDescribeGameSessionStateFailed__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_GameLiftClientSDK_eventOnDescribeGameSessionStateFailed_Parms), Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics
	{
		struct _Script_GameLiftClientSDK_eventOnDescribeGameSessionStateSuccess_Parms
		{
			FString SessionID;
			EGameLiftGameSessionStatus SessionState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics::NewProp_SessionState = { UE4CodeGen_Private::EPropertyClass::Enum, "SessionState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_GameLiftClientSDK_eventOnDescribeGameSessionStateSuccess_Parms, SessionState), Z_Construct_UEnum_GameLiftClientSDK_EGameLiftGameSessionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics::NewProp_SessionState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics::NewProp_SessionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics::NewProp_SessionID = { UE4CodeGen_Private::EPropertyClass::Str, "SessionID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_GameLiftClientSDK_eventOnDescribeGameSessionStateSuccess_Parms, SessionID), METADATA_PARAMS(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics::NewProp_SessionID_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics::NewProp_SessionID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics::NewProp_SessionState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics::NewProp_SessionState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics::NewProp_SessionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameLiftClientSDK, "OnDescribeGameSessionStateSuccess__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_GameLiftClientSDK_eventOnDescribeGameSessionStateSuccess_Parms), Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature_Statics
	{
		struct _Script_GameLiftClientSDK_eventOnCreateGameSessionFailed_Parms
		{
			FString ErrorMessage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature_Statics::NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_GameLiftClientSDK_eventOnCreateGameSessionFailed_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameLiftClientSDK, "OnCreateGameSessionFailed__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_GameLiftClientSDK_eventOnCreateGameSessionFailed_Parms), Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature_Statics
	{
		struct _Script_GameLiftClientSDK_eventOnCreateGameSessionSuccess_Parms
		{
			FString GameSessionID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameSessionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature_Statics::NewProp_GameSessionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature_Statics::NewProp_GameSessionID = { UE4CodeGen_Private::EPropertyClass::Str, "GameSessionID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_GameLiftClientSDK_eventOnCreateGameSessionSuccess_Parms, GameSessionID), METADATA_PARAMS(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature_Statics::NewProp_GameSessionID_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature_Statics::NewProp_GameSessionID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature_Statics::NewProp_GameSessionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameLiftClientSDK, "OnCreateGameSessionSuccess__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_GameLiftClientSDK_eventOnCreateGameSessionSuccess_Parms), Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EActivateStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameLiftClientSDK_EActivateStatus, Z_Construct_UPackage__Script_GameLiftClientSDK(), TEXT("EActivateStatus"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EActivateStatus(EActivateStatus_StaticEnum, TEXT("/Script/GameLiftClientSDK"), TEXT("EActivateStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameLiftClientSDK_EActivateStatus_CRC() { return 44983125U; }
	UEnum* Z_Construct_UEnum_GameLiftClientSDK_EActivateStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameLiftClientSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EActivateStatus"), 0, Get_Z_Construct_UEnum_GameLiftClientSDK_EActivateStatus_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EActivateStatus::ACTIVATE_Success", (int64)EActivateStatus::ACTIVATE_Success },
				{ "EActivateStatus::ACTIVATE_NoGameLift", (int64)EActivateStatus::ACTIVATE_NoGameLift },
				{ "EActivateStatus::ACTIVATE_NoSuccessCallback", (int64)EActivateStatus::ACTIVATE_NoSuccessCallback },
				{ "EActivateStatus::ACTIVATE_NoFailCallback", (int64)EActivateStatus::ACTIVATE_NoFailCallback },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACTIVATE_NoFailCallback.DisplayName", "Failed Delegate not bound" },
				{ "ACTIVATE_NoFailCallback.ToolTip", "Delegate that was suppose to call when outcome is a failure was not binded to any function." },
				{ "ACTIVATE_NoGameLift.DisplayName", "Null GameLift" },
				{ "ACTIVATE_NoGameLift.ToolTip", "GameLiftClient was null. Make sure you called CreateGameLiftObject function." },
				{ "ACTIVATE_NoSuccessCallback.DisplayName", "Success Delegate not bound" },
				{ "ACTIVATE_NoSuccessCallback.ToolTip", "Delegate that was suppose to call when outcome is a success was not binded to any function." },
				{ "ACTIVATE_Success.DisplayName", "Success" },
				{ "ACTIVATE_Success.ToolTip", "Successfully activated." },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameLiftClientSDK,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EActivateStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EActivateStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UGameLiftCreateGameSession::StaticRegisterNativesUGameLiftCreateGameSession()
	{
		UClass* Class = UGameLiftCreateGameSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &UGameLiftCreateGameSession::execActivate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameLiftCreateGameSession_Activate_Statics
	{
		struct GameLiftCreateGameSession_eventActivate_Parms
		{
			EActivateStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameLiftCreateGameSession_Activate_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameLiftCreateGameSession_eventActivate_Parms, ReturnValue), Z_Construct_UEnum_GameLiftClientSDK_EActivateStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameLiftCreateGameSession_Activate_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftCreateGameSession_Activate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftCreateGameSession_Activate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftCreateGameSession_Activate_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftCreateGameSession_Activate_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameLift CreateGameSession" },
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftCreateGameSession_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftCreateGameSession, "Activate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GameLiftCreateGameSession_eventActivate_Parms), Z_Construct_UFunction_UGameLiftCreateGameSession_Activate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameLiftCreateGameSession_Activate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftCreateGameSession_Activate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameLiftCreateGameSession_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftCreateGameSession_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftCreateGameSession_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameLiftCreateGameSession_NoRegister()
	{
		return UGameLiftCreateGameSession::StaticClass();
	}
	struct Z_Construct_UClass_UGameLiftCreateGameSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCreateGameSessionFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCreateGameSessionFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCreateGameSessionSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCreateGameSessionSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameLiftCreateGameSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameLiftClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameLiftCreateGameSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameLiftCreateGameSession_Activate, "Activate" }, // 4186842936
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftCreateGameSession_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameLiftClientApi.h" },
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftCreateGameSession_Statics::NewProp_OnCreateGameSessionFailed_MetaData[] = {
		{ "Category", "GameLift CreateGameSession" },
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameLiftCreateGameSession_Statics::NewProp_OnCreateGameSessionFailed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnCreateGameSessionFailed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGameLiftCreateGameSession, OnCreateGameSessionFailed), Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameLiftCreateGameSession_Statics::NewProp_OnCreateGameSessionFailed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameLiftCreateGameSession_Statics::NewProp_OnCreateGameSessionFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftCreateGameSession_Statics::NewProp_OnCreateGameSessionSuccess_MetaData[] = {
		{ "Category", "GameLift CreateGameSession" },
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameLiftCreateGameSession_Statics::NewProp_OnCreateGameSessionSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnCreateGameSessionSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGameLiftCreateGameSession, OnCreateGameSessionSuccess), Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameLiftCreateGameSession_Statics::NewProp_OnCreateGameSessionSuccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameLiftCreateGameSession_Statics::NewProp_OnCreateGameSessionSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameLiftCreateGameSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLiftCreateGameSession_Statics::NewProp_OnCreateGameSessionFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLiftCreateGameSession_Statics::NewProp_OnCreateGameSessionSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameLiftCreateGameSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameLiftCreateGameSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameLiftCreateGameSession_Statics::ClassParams = {
		&UGameLiftCreateGameSession::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UGameLiftCreateGameSession_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGameLiftCreateGameSession_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGameLiftCreateGameSession_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameLiftCreateGameSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameLiftCreateGameSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameLiftCreateGameSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameLiftCreateGameSession, 1113115813);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameLiftCreateGameSession(Z_Construct_UClass_UGameLiftCreateGameSession, &UGameLiftCreateGameSession::StaticClass, TEXT("/Script/GameLiftClientSDK"), TEXT("UGameLiftCreateGameSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameLiftCreateGameSession);
	void UGameLiftDescribeGameSession::StaticRegisterNativesUGameLiftDescribeGameSession()
	{
		UClass* Class = UGameLiftDescribeGameSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &UGameLiftDescribeGameSession::execActivate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameLiftDescribeGameSession_Activate_Statics
	{
		struct GameLiftDescribeGameSession_eventActivate_Parms
		{
			EActivateStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameLiftDescribeGameSession_Activate_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameLiftDescribeGameSession_eventActivate_Parms, ReturnValue), Z_Construct_UEnum_GameLiftClientSDK_EActivateStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameLiftDescribeGameSession_Activate_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftDescribeGameSession_Activate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftDescribeGameSession_Activate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftDescribeGameSession_Activate_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftDescribeGameSession_Activate_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameLift DescribeGameSession" },
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftDescribeGameSession_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftDescribeGameSession, "Activate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GameLiftDescribeGameSession_eventActivate_Parms), Z_Construct_UFunction_UGameLiftDescribeGameSession_Activate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameLiftDescribeGameSession_Activate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftDescribeGameSession_Activate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameLiftDescribeGameSession_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftDescribeGameSession_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftDescribeGameSession_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameLiftDescribeGameSession_NoRegister()
	{
		return UGameLiftDescribeGameSession::StaticClass();
	}
	struct Z_Construct_UClass_UGameLiftDescribeGameSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDescribeGameSessionStateFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDescribeGameSessionStateFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDescribeGameSessionStateSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDescribeGameSessionStateSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameLiftClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameLiftDescribeGameSession_Activate, "Activate" }, // 2008112808
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameLiftClientApi.h" },
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::NewProp_OnDescribeGameSessionStateFailed_MetaData[] = {
		{ "Category", "GameLift DescribeGameSession" },
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::NewProp_OnDescribeGameSessionStateFailed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnDescribeGameSessionStateFailed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGameLiftDescribeGameSession, OnDescribeGameSessionStateFailed), Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::NewProp_OnDescribeGameSessionStateFailed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::NewProp_OnDescribeGameSessionStateFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::NewProp_OnDescribeGameSessionStateSuccess_MetaData[] = {
		{ "Category", "GameLift DescribeGameSession" },
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::NewProp_OnDescribeGameSessionStateSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnDescribeGameSessionStateSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGameLiftDescribeGameSession, OnDescribeGameSessionStateSuccess), Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::NewProp_OnDescribeGameSessionStateSuccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::NewProp_OnDescribeGameSessionStateSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::NewProp_OnDescribeGameSessionStateFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::NewProp_OnDescribeGameSessionStateSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameLiftDescribeGameSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::ClassParams = {
		&UGameLiftDescribeGameSession::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameLiftDescribeGameSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameLiftDescribeGameSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameLiftDescribeGameSession, 1509884993);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameLiftDescribeGameSession(Z_Construct_UClass_UGameLiftDescribeGameSession, &UGameLiftDescribeGameSession::StaticClass, TEXT("/Script/GameLiftClientSDK"), TEXT("UGameLiftDescribeGameSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameLiftDescribeGameSession);
	void UGameLiftCreatePlayerSession::StaticRegisterNativesUGameLiftCreatePlayerSession()
	{
		UClass* Class = UGameLiftCreatePlayerSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &UGameLiftCreatePlayerSession::execActivate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameLiftCreatePlayerSession_Activate_Statics
	{
		struct GameLiftCreatePlayerSession_eventActivate_Parms
		{
			EActivateStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameLiftCreatePlayerSession_Activate_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameLiftCreatePlayerSession_eventActivate_Parms, ReturnValue), Z_Construct_UEnum_GameLiftClientSDK_EActivateStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameLiftCreatePlayerSession_Activate_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftCreatePlayerSession_Activate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftCreatePlayerSession_Activate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftCreatePlayerSession_Activate_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftCreatePlayerSession_Activate_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameLift CreatePlayerSession" },
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftCreatePlayerSession_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftCreatePlayerSession, "Activate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GameLiftCreatePlayerSession_eventActivate_Parms), Z_Construct_UFunction_UGameLiftCreatePlayerSession_Activate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameLiftCreatePlayerSession_Activate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftCreatePlayerSession_Activate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameLiftCreatePlayerSession_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftCreatePlayerSession_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftCreatePlayerSession_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameLiftCreatePlayerSession_NoRegister()
	{
		return UGameLiftCreatePlayerSession::StaticClass();
	}
	struct Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCreatePlayerSessionFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCreatePlayerSessionFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCreatePlayerSessionSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCreatePlayerSessionSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameLiftClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameLiftCreatePlayerSession_Activate, "Activate" }, // 3051763175
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameLiftClientApi.h" },
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::NewProp_OnCreatePlayerSessionFailed_MetaData[] = {
		{ "Category", "GameLift CreatePlayerSession" },
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::NewProp_OnCreatePlayerSessionFailed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnCreatePlayerSessionFailed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGameLiftCreatePlayerSession, OnCreatePlayerSessionFailed), Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::NewProp_OnCreatePlayerSessionFailed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::NewProp_OnCreatePlayerSessionFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::NewProp_OnCreatePlayerSessionSuccess_MetaData[] = {
		{ "Category", "GameLift CreatePlayerSession" },
		{ "ModuleRelativePath", "Public/GameLiftClientApi.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::NewProp_OnCreatePlayerSessionSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnCreatePlayerSessionSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGameLiftCreatePlayerSession, OnCreatePlayerSessionSuccess), Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::NewProp_OnCreatePlayerSessionSuccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::NewProp_OnCreatePlayerSessionSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::NewProp_OnCreatePlayerSessionFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::NewProp_OnCreatePlayerSessionSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameLiftCreatePlayerSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::ClassParams = {
		&UGameLiftCreatePlayerSession::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameLiftCreatePlayerSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameLiftCreatePlayerSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameLiftCreatePlayerSession, 2365744153);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameLiftCreatePlayerSession(Z_Construct_UClass_UGameLiftCreatePlayerSession, &UGameLiftCreatePlayerSession::StaticClass, TEXT("/Script/GameLiftClientSDK"), TEXT("UGameLiftCreatePlayerSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameLiftCreatePlayerSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
