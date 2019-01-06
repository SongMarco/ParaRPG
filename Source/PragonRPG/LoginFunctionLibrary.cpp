// Fill out your copyright notice in the Description page of Project Settings.

#include "LoginFunctionLibrary.h"



ULoginFunctionLibrary* ULoginFunctionLibrary::Create() {
	// Construct the object and return it
	return NewObject<ULoginFunctionLibrary>();
}

void ULoginFunctionLibrary::FunctionLogin(FString nickName, FString password)
{

	ULoginFunctionLibrary* library = Create();

	// Create the HTTP request
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();

	//This is the url on which to process the request
	//Request->SetURL("http://115.68.231.13/project/ue4/testHttp.php");
	Request->SetURL("http://115.68.231.13/project/ue4/login.php");
	Request->SetVerb("POST");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));


	FString json_data_to_send = "";

	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	
	JsonObject->SetStringField("nickName", nickName);
	JsonObject->SetStringField("password", password);

	TSharedRef<TJsonWriter<>> json_writer = TJsonWriterFactory<>::Create(&json_data_to_send);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), json_writer);

	// Can print the data to check if it is correct

	//Output it to the engine
	//GEngine->AddOnScreenDebugMessage(1, 10.0f, FColor::Green, json_data_to_send);

	UE_LOG(LogHttp, Warning, TEXT("json_data_to_send is %s"), *json_data_to_send);

	//리퀘스트 컨텐츠에 json 스트링을 집어넣는다.
	Request->SetContentAsString(json_data_to_send);
	Request->OnProcessRequestComplete().BindUObject(library, &ULoginFunctionLibrary::OnResponseReceived);


	Request->ProcessRequest();
}


void ULoginFunctionLibrary::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	//Create a pointer to hold the json serialized data
	TSharedPtr<FJsonObject> JsonObject;

	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{

		//Get the value of the json object by field name
		FString nickName = JsonObject->GetStringField("nickName");
		FString password = JsonObject->GetStringField("password");
		bool loginResult = JsonObject->GetBoolField("loginResult");


		//FString receivedString = JsonObject->GetStringField("stringLoginInfo");

		//Output it to the engine
		//GEngine->AddOnScreenDebugMessage(1, 10.0f, FColor::Green, FString::FromInt(recievedInt));
		UE_LOG(LogHttp, Warning, TEXT("nickName is %s"), *nickName);

		UE_LOG(LogHttp, Warning, TEXT("password is %s"), *password);
		UE_LOG(LogHttp, Warning, TEXT("loginResult is %s"), (loginResult ? TEXT("TRUE") : TEXT("FALSE"))  );



		GEngine->AddOnScreenDebugMessage(2, 10.0f, FColor::Yellow, nickName+password);

		//Output it to the engine
		//GEngine->AddOnScreenDebugMessage(2, 10.0f, FColor::Yellow, receivedString);
	}
}




