// Fill out your copyright notice in the Description page of Project Settings.

#include "HashStringLibrary.h"
#include "sha512.h"
#include "Runtime/Core/Public/Misc/AES.h"
#include "Runtime/Core/Public/Misc/SecureHash.h"
#include "Runtime/Core/Public/Misc/Base64.h"

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

FString UHashStringLibrary::Encrypt(FString InputString, FString Key)
{
	// Check inputs
	if (InputString.IsEmpty()) return "";  //empty string? do nothing
	if (Key.IsEmpty()) return "";

	// To split correctly final result of decryption from trash symbols
	FString SplitSymbol = "EL@$@!";
	InputString.Append(SplitSymbol);

	// We need at least 32 symbols key
	Key = FMD5::HashAnsiString(*Key);
	TCHAR *KeyTChar = Key.GetCharArray().GetData();
	ANSICHAR *KeyAnsi = (ANSICHAR*)TCHAR_TO_ANSI(KeyTChar);

	// Calculate blob size and create blob
	uint8* Blob;
	uint32 Size;

	Size = InputString.Len();
	Size = Size + (FAES::AESBlockSize - (Size % FAES::AESBlockSize));

	Blob = new uint8[Size];

	// Convert string to bytes and encrypt
	if (StringToBytes(InputString, Blob, Size)) {

		FAES::EncryptData(Blob, Size, KeyAnsi);
		InputString = FString::FromHexBlob(Blob, Size);

		delete Blob;
		return InputString;
	}

	delete Blob;
	return "";
}

FString UHashStringLibrary::Decrypt(FString InputString, FString Key)
{
	// Check inputs
	if (InputString.IsEmpty()) return "";
	if (Key.IsEmpty()) return "";

	// To split correctly final result of decryption from trash symbols
	FString SplitSymbol = "EL@$@!";

	// We need at least 32 symbols key
	Key = FMD5::HashAnsiString(*Key);
	TCHAR *KeyTChar = Key.GetCharArray().GetData();
	ANSICHAR *KeyAnsi = (ANSICHAR*)TCHAR_TO_ANSI(KeyTChar);

	// Calculate blob size and create blob
	uint8* Blob;
	uint32 Size;

	Size = InputString.Len();
	Size = Size + (FAES::AESBlockSize - (Size % FAES::AESBlockSize));

	Blob = new uint8[Size];

	// Convert string to bytes and decrypt
	if (FString::ToHexBlob(InputString, Blob, Size)) {

		FAES::DecryptData(Blob, Size, KeyAnsi);
		InputString = BytesToString(Blob, Size);

		// Split required data from trash
		FString LeftData;
		FString RightData;
		InputString.Split(SplitSymbol, &LeftData, &RightData, ESearchCase::CaseSensitive, ESearchDir::FromStart);
		InputString = LeftData;

		delete Blob;
		return InputString;
	}

	delete Blob;
	return "";
}

