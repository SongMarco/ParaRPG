// Fill out your copyright notice in the Description page of Project Settings.

#include "HashStringLibrary.h"
#include "sha512.h"

FString UHashStringLibrary::HashString(FString inputString)
{
	FString outputString;
		
	//std:string to FString
	std::string MyStdString(TCHAR_TO_UTF8(*inputString));
	   
	//std:string에 해싱을 적용해 변환한다.
	MyStdString = sha512(MyStdString);
	
	//변환한 std string을 Fstring으로 변환
	outputString = MyStdString.c_str();

	//결과물 Fstring 반환

	return outputString;
}
