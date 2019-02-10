// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiftClientSDK_init() {}
	GAMELIFTCLIENTSDK_API UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature();
	GAMELIFTCLIENTSDK_API UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature();
	GAMELIFTCLIENTSDK_API UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature();
	GAMELIFTCLIENTSDK_API UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature();
	GAMELIFTCLIENTSDK_API UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature();
	GAMELIFTCLIENTSDK_API UFunction* Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameLiftClientSDK()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionSuccess__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreateGameSessionFailed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateSuccess__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameLiftClientSDK_OnDescribeGameSessionStateFailed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionSuccess__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameLiftClientSDK_OnCreatePlayerSessionFailed__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/GameLiftClientSDK",
				PKG_CompiledIn | 0x00000000,
				0xF9F4D858,
				0x66821493,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
