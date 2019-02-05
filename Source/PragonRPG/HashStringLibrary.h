// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HashStringLibrary.generated.h"


/**
 * 
블루프린트 상에서 스트링에 해시를 적용하기 위한 함수 정의 - SHA 해싱 적용
 */
UCLASS()
class PRAGONRPG_API UHashStringLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


	UFUNCTION(Blueprintcallable, Category = "SHA512")
		static FString HashString(FString inputString);
	
	UFUNCTION(BlueprintCallable, Category = "AES256")
		static FString Encrypt(FString InputString, FString Key);

	UFUNCTION(BlueprintCallable, Category = "AES256")
		static FString Decrypt(FString InputString, FString Key);
};
