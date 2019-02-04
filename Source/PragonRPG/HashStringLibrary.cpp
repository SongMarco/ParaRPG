// Fill out your copyright notice in the Description page of Project Settings.

#include "HashStringLibrary.h"
#include "sha512.h"

FString UHashStringLibrary::HashString(FString inputString)
{
	FString outputString;
		
	//std:string to FString
	std::string MyStdString(TCHAR_TO_UTF8(*inputString));
	   
	//std:string�� �ؽ��� ������ ��ȯ�Ѵ�.
	MyStdString = sha512(MyStdString);
	
	//��ȯ�� std string�� Fstring���� ��ȯ
	outputString = MyStdString.c_str();

	//����� Fstring ��ȯ

	return outputString;
}
