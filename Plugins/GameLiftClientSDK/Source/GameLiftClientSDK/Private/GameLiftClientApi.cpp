// Created by YetiTech Studios.

#include "GameLiftClientApi.h"
#include "GameLiftClientGlobals.h"
//#include "windows.h"
//#include "engine/EngineTypes.h"
//#include "engine/Engine.h"
#include <thread>
#if WITH_GAMELIFTCLIENTSDK
#include "aws/gamelift/model/DescribeGameSessionDetailsRequest.h"
#include "aws/gamelift/GameLiftClient.h"
#include "aws/core/utils/Outcome.h"
#include "aws/core/auth/AWSCredentialsProvider.h"
#include "aws/gamelift/model/GameProperty.h"
#include "aws/gamelift/model/SearchGameSessionsRequest.h"
#include "aws/gamelift/model/CreatePlayerSessionRequest.h"
#include "aws/gamelift/model/CreateGameSessionRequest.h"
#include"aws/gamelift/model/StartGameSessionPlacementRequest.h"
#include "aws/gamelift/model/DescribeGameSessionPlacementRequest.h"

#include"aws/gamelift/model/startGameSessionPlacementResult.h"
#include <aws/core/http/HttpRequest.h>


#endif

UGameLiftCreateGameSession* UGameLiftCreateGameSession::CreateGameSession(FGameLiftGameSessionConfig GameSessionProperties, bool bIsGameLiftLocal)
{
#if WITH_GAMELIFTCLIENTSDK
	UGameLiftCreateGameSession* Proxy = NewObject<UGameLiftCreateGameSession>();
	Proxy->SessionConfig = GameSessionProperties;
	Proxy->bIsUsingGameLiftLocal = bIsGameLiftLocal;
	return Proxy;
#endif
	return nullptr;
}

EActivateStatus UGameLiftCreateGameSession::Activate()
{
#if WITH_GAMELIFTCLIENTSDK
	if (GameLiftClient)
	{
		LOG_NORMAL("Preparing to create game session...");

		if (OnCreateGameSessionSuccess.IsBound() == false)
		{
			LOG_ERROR("No functions were bound to OnCreateGameSessionSuccess multi-cast delegate! Aborting Activate.");
			return EActivateStatus::ACTIVATE_NoSuccessCallback;
		}

		if (OnCreateGameSessionFailed.IsBound() == false)
		{
			LOG_ERROR("No functions were bound to OnCreateGameSessionFailed multi-cast delegate! Aborting Activate.");
			return EActivateStatus::ACTIVATE_NoFailCallback;
		}

		Aws::GameLift::Model::CreateGameSessionRequest GameSessionRequest;

		GameSessionRequest.SetMaximumPlayerSessionCount(SessionConfig.GetMaxPlayers());
		
		if (bIsUsingGameLiftLocal)
		{
			GameSessionRequest.SetFleetId(TCHAR_TO_UTF8(*SessionConfig.GetGameLiftLocalFleetID()));
		}
		else
		{
			GameSessionRequest.SetAliasId(TCHAR_TO_UTF8(*SessionConfig.GetAliasID()));
		}

		LOG_NORMAL("Setting Alias ID: " + SessionConfig.GetAliasID());
		for (FGameLiftGameSessionServerProperties ServerSetting : SessionConfig.GetGameSessionProperties())
		{
			LOG_NORMAL("********************************************************************");
			Aws::GameLift::Model::GameProperty MapProperty;
			MapProperty.SetKey(TCHAR_TO_UTF8(*ServerSetting.Key));
			MapProperty.SetValue(TCHAR_TO_UTF8(*ServerSetting.Value));
			GameSessionRequest.AddGameProperties(MapProperty);
			LOG_NORMAL(FString::Printf(TEXT("New GameProperty added. Key: (%s) Value: (%s)"), *ServerSetting.Key, *ServerSetting.Value));
		}

		Aws::GameLift::CreateGameSessionResponseReceivedHandler Handler;
		Handler = std::bind(&UGameLiftCreateGameSession::OnCreateGameSession, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4);

		LOG_NORMAL("Starting game session...");
		GameLiftClient->CreateGameSessionAsync(GameSessionRequest, Handler);
		return EActivateStatus::ACTIVATE_Success;
	}
	LOG_ERROR("GameLiftClient is null. Did you call CreateGameLiftObject first?");	
#endif
	return EActivateStatus::ACTIVATE_NoGameLift;
}

void UGameLiftCreateGameSession::OnCreateGameSession(const Aws::GameLift::GameLiftClient* Client, const Aws::GameLift::Model::CreateGameSessionRequest& Request, const Aws::GameLift::Model::CreateGameSessionOutcome& Outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& Context)
{
#if WITH_GAMELIFTCLIENTSDK
	if (Outcome.IsSuccess())
	{
		LOG_NORMAL("Received OnCreateGameSession with Success outcome.");
		const FString GameSessionID = FString(Outcome.GetResult().GetGameSession().GetGameSessionId().c_str());
		OnCreateGameSessionSuccess.Broadcast(GameSessionID);
	}
	else
	{
		const FString MyErrorMessage = FString(Outcome.GetError().GetMessage().c_str());
		LOG_ERROR("Received OnCreateGameSession with failed outcome. Error: " + MyErrorMessage);
		OnCreateGameSessionFailed.Broadcast(MyErrorMessage);
	}
#endif
}

UGameLiftDescribeGameSession* UGameLiftDescribeGameSession::DescribeGameSession(FString GameSessionID)
{
#if WITH_GAMELIFTCLIENTSDK
	UGameLiftDescribeGameSession* Proxy = NewObject<UGameLiftDescribeGameSession>();
	Proxy->SessionID = GameSessionID;
	return Proxy;
#endif
	return nullptr;
}

EActivateStatus UGameLiftDescribeGameSession::Activate()
{
#if WITH_GAMELIFTCLIENTSDK
	if (GameLiftClient)
	{
		LOG_NORMAL("Preparing to describe game session...");

		if (OnDescribeGameSessionStateSuccess.IsBound() == false)
		{
			LOG_ERROR("No functions were bound to OnDescribeGameSessionStateSuccess multi-cast delegate! Aborting Activate.");
			return EActivateStatus::ACTIVATE_NoSuccessCallback;
		}

		if (OnDescribeGameSessionStateFailed.IsBound() == false)
		{
			LOG_ERROR("No functions were bound to OnDescribeGameSessionStateFailed multi-cast delegate! Aborting Activate.");
			return EActivateStatus::ACTIVATE_NoFailCallback;
		}

		Aws::GameLift::Model::DescribeGameSessionDetailsRequest Request;
		Request.SetGameSessionId(TCHAR_TO_UTF8(*SessionID));

		Aws::GameLift::DescribeGameSessionDetailsResponseReceivedHandler Handler;
		Handler = std::bind(&UGameLiftDescribeGameSession::OnDescribeGameSessionState, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4);

		LOG_NORMAL("Requesting to describe game session with ID: " + SessionID);
		GameLiftClient->DescribeGameSessionDetailsAsync(Request, Handler);
		return EActivateStatus::ACTIVATE_Success;
	}
	LOG_ERROR("GameLiftClient is null. Did you call CreateGameLiftObject first?");
#endif
	return EActivateStatus::ACTIVATE_NoGameLift;
}

void UGameLiftDescribeGameSession::OnDescribeGameSessionState(const Aws::GameLift::GameLiftClient* Client, const Aws::GameLift::Model::DescribeGameSessionDetailsRequest& Request, const Aws::GameLift::Model::DescribeGameSessionDetailsOutcome& Outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& Context)
{
#if WITH_GAMELIFTCLIENTSDK
	if (Outcome.IsSuccess())
	{
		LOG_NORMAL("Received OnDescribeGameSessionState with Success outcome.");
		const FString MySessionID = FString(Outcome.GetResult().GetGameSessionDetails().data()->GetGameSession().GetGameSessionId().c_str());
		EGameLiftGameSessionStatus MySessionStatus = GetSessionState(Outcome.GetResult().GetGameSessionDetails().data()->GetGameSession().GetStatus());
		OnDescribeGameSessionStateSuccess.Broadcast(MySessionID, MySessionStatus);
	}
	else
	{
		const FString MyErrorMessage = FString(Outcome.GetError().GetMessage().c_str());
		LOG_ERROR("Received OnDescribeGameSessionState with failed outcome. Error: " + MyErrorMessage);
		OnDescribeGameSessionStateFailed.Broadcast(MyErrorMessage);
	}
#endif
}

EGameLiftGameSessionStatus UGameLiftDescribeGameSession::GetSessionState(const Aws::GameLift::Model::GameSessionStatus& Status)
{
#if WITH_GAMELIFTCLIENTSDK
	switch (Status)
	{
		case Aws::GameLift::Model::GameSessionStatus::ACTIVATING:
			return EGameLiftGameSessionStatus::STATUS_Activating;
		case Aws::GameLift::Model::GameSessionStatus::ACTIVE:
			return EGameLiftGameSessionStatus::STATUS_Active;
		case Aws::GameLift::Model::GameSessionStatus::ERROR_:
			return EGameLiftGameSessionStatus::STATUS_Error;
		case Aws::GameLift::Model::GameSessionStatus::NOT_SET:
			return EGameLiftGameSessionStatus::STATUS_NotSet;
		case Aws::GameLift::Model::GameSessionStatus::TERMINATED:
			return EGameLiftGameSessionStatus::STATUS_Terminated;
		case Aws::GameLift::Model::GameSessionStatus::TERMINATING:
			return EGameLiftGameSessionStatus::STATUS_Terminating;
		default:
			break;
	}
	checkNoEntry(); // This code block should never reach!
#endif
	return EGameLiftGameSessionStatus::STATUS_NoStatus; // Just a dummy return
}

UGameLiftCreatePlayerSession* UGameLiftCreatePlayerSession::CreatePlayerSession(FString GameSessionID, FString UniquePlayerID)
{
#if WITH_GAMELIFTCLIENTSDK
	UGameLiftCreatePlayerSession* Proxy = NewObject<UGameLiftCreatePlayerSession>();
	Proxy->GameSessionID = GameSessionID;
	Proxy->PlayerID = UniquePlayerID;
	return Proxy;
#endif
	return nullptr;
}
UGameLiftStartGameSessionPlacement * UGameLiftStartGameSessionPlacement::StartGameSessionPlacement(FString UniquePlayerID)
{
#if WITH_GAMELIFTCLIENTSDK
	UGameLiftStartGameSessionPlacement* Proxy = NewObject<UGameLiftStartGameSessionPlacement>();
	Proxy->PlayerID = UniquePlayerID;
	return Proxy;
#endif
	return nullptr;
}


EActivateStatus UGameLiftCreatePlayerSession::Activate()
{
#if WITH_GAMELIFTCLIENTSDK
	if (GameLiftClient)
	{		
		LOG_NORMAL("Preparing to create player session...");

		if (OnCreatePlayerSessionSuccess.IsBound() == false)
		{
			LOG_ERROR("No functions were bound to OnCreatePlayerSessionSuccess multi-cast delegate! Aborting Activate.");
			return EActivateStatus::ACTIVATE_NoSuccessCallback;
		}

		if (OnCreatePlayerSessionFailed.IsBound() == false)
		{
			LOG_ERROR("No functions were bound to OnCreatePlayerSessionFailed multi-cast delegate! Aborting Activate.");
			return EActivateStatus::ACTIVATE_NoFailCallback;
		}

		Aws::GameLift::Model::CreatePlayerSessionRequest Request;
		LOG_NORMAL("Setting game session ID: " + GameSessionID);
		Request.SetGameSessionId(TCHAR_TO_UTF8(*GameSessionID));
		LOG_NORMAL("Setting player ID: " + PlayerID);
		Request.SetPlayerId(TCHAR_TO_UTF8(*PlayerID));

		Aws::GameLift::CreatePlayerSessionResponseReceivedHandler Handler;
		Handler = std::bind(&UGameLiftCreatePlayerSession::OnCreatePlayerSession, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4);

		LOG_NORMAL("Creating new player session...");
		GameLiftClient->CreatePlayerSessionAsync(Request, Handler);
		return EActivateStatus::ACTIVATE_Success;
	}
	LOG_ERROR("GameLiftClient is null. Did you call CreateGameLiftObject first?");
#endif
	return EActivateStatus::ACTIVATE_NoGameLift;
}


//////////


EActivateStatus UGameLiftStartGameSessionPlacement::Activate()
{
#if WITH_GAMELIFTCLIENTSDK
	if (GameLiftClient)
	{
		LOG_NORMAL("Preparing to StartGameSessionPlacement...");

		if (OnStartGameSessionPlacementSuccess.IsBound() == false)
		{
			LOG_ERROR("No functions were bound to OnCreatePlayerSessionSuccess multi-cast delegate! Aborting Activate.");
			return EActivateStatus::ACTIVATE_NoSuccessCallback;
		}

		if (OnStartGameSessionPlacementFailed.IsBound() == false)
		{
			LOG_ERROR("No functions were bound to OnCreatePlayerSessionFailed multi-cast delegate! Aborting Activate.");
			return EActivateStatus::ACTIVATE_NoFailCallback;
		}

		Aws::GameLift::Model::StartGameSessionPlacementRequest Request;
	
		LOG_NORMAL("Setting player ID: " + PlayerID);

		//placement id를 플레이어 id로 설정(1 플레이어는 1 플레이만 가능하니까 사용가능)
		Request.SetPlacementId(TCHAR_TO_UTF8(*PlayerID));
		Request.SetGameSessionQueueName("ParagonQueue");
		Request.SetMaximumPlayerSessionCount(2);

		Aws::GameLift::StartGameSessionPlacementResponseReceivedHandler Handler;
		Handler = std::bind(&UGameLiftStartGameSessionPlacement::OnStartGameSessionPlacement, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4);

		LOG_NORMAL("Creating new player session...");

		//여기서@@@ 세션을 찾는 리퀘스트가 시작된다~~~~~
		GameLiftClient->StartGameSessionPlacementAsync(Request, Handler);
		return EActivateStatus::ACTIVATE_Success;
	}
	LOG_ERROR("GameLiftClient is null. Did you call CreateGameLiftObject first?");
#endif
	return EActivateStatus::ACTIVATE_NoGameLift;
}


void UGameLiftCreatePlayerSession::OnCreatePlayerSession(const Aws::GameLift::GameLiftClient* Client, const Aws::GameLift::Model::CreatePlayerSessionRequest& Request, const Aws::GameLift::Model::CreatePlayerSessionOutcome& Outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& Context)
{
#if WITH_GAMELIFTCLIENTSDK
	if (Outcome.IsSuccess())
	{
		LOG_NORMAL("Received OnCreatePlayerSession with Success outcome.");

		const FString ServerIpAddress = FString(Outcome.GetResult().GetPlayerSession().GetIpAddress().c_str());
		const FString ServerPort = FString::FromInt(Outcome.GetResult().GetPlayerSession().GetPort());
		const FString MyPlayerSessionID = FString(Outcome.GetResult().GetPlayerSession().GetPlayerSessionId().c_str());

		OnCreatePlayerSessionSuccess.Broadcast(ServerIpAddress, ServerPort, MyPlayerSessionID);
	}
	else
	{
		const FString MyErrorMessage = FString(Outcome.GetError().GetMessage().c_str());
		LOG_ERROR("Received OnCreatePlayerSession with failed outcome. Error: " + MyErrorMessage);
		OnCreatePlayerSessionFailed.Broadcast(MyErrorMessage);
	}
#endif
}




void UGameLiftStartGameSessionPlacement::OnStartGameSessionPlacement(const Aws::GameLift::GameLiftClient * Client, const Aws::GameLift::Model::StartGameSessionPlacementRequest & Request, const Aws::GameLift::Model::StartGameSessionPlacementOutcome & Outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& Context)
{
#if WITH_GAMELIFTCLIENTSDK
	if (Outcome.IsSuccess())
	{
		LOG_NORMAL("Received OnStartGameSessionPlacement with Success outcome.");

		auto gameSessionPlacement = Outcome.GetResult().GetGameSessionPlacement();
	
		auto status = gameSessionPlacement.GetStatus();
					
		Aws::String mPlacementId;

		mPlacementId = gameSessionPlacement.GetPlacementId();

		int32 statusnum = (int32)status;
			


				

		LOG_NORMAL("status is ===="+FString::FromInt(statusnum));
		LOG_NORMAL("status is ====" + FString::FromInt(statusnum));
	



		//게임 세션이 아직 생성중이므로,
		if (status == Aws::GameLift::Model::GameSessionPlacementState::PENDING)
		{			
		//세션 배치 확인 요청 성공	//세션 배치 확인 요청 성공
			//반복해서 게임세션 배치 확인 요청을 보냄
			for(int i=0;i<10;i++)
			{
				LOG_NORMAL("it's pending!!!");
				Aws::GameLift::Model::DescribeGameSessionPlacementRequest req;
				req.SetPlacementId(mPlacementId);
				auto outcome = Client->DescribeGameSessionPlacement(req);
				//배치 확인 요청이 성공할 경우
				if (outcome.IsSuccess())
				{
					auto gs = outcome.GetResult().GetGameSessionPlacement();

					//배치 확인했는데 방에 들어갈 수 있는 경우
					if (gs.GetStatus() == Aws::GameLift::Model::GameSessionPlacementState::FULFILLED)
					{
						LOG_NORMAL("god we did it!!!");

						const FString ServerIpAddress = FString(gameSessionPlacement.GetIpAddress().c_str());
						const FString ServerPort = FString::FromInt(gameSessionPlacement.GetPort());
						const FString GameSessionId = FString(gameSessionPlacement.GetGameSessionId().c_str());

						OnStartGameSessionPlacementSuccess.Broadcast(ServerIpAddress, ServerPort, GameSessionId);

						break;
					}
				}
			
				//0.5초의 루프 지연 시간 후 반복
				std::this_thread::sleep_for(std::chrono::milliseconds(500)); //c++11

			}
					   
		}		


	}
	else
	{
		const FString MyErrorMessage = FString(Outcome.GetError().GetMessage().c_str());
		LOG_ERROR("Received OnStartGameSessionPlacement with failed outcome. Error: " + MyErrorMessage);
		OnStartGameSessionPlacementFailed.Broadcast(MyErrorMessage);
	}
#endif
}
//
//
//bool UGameLiftStartGameSessionPlacement::CheckGameSessionPlacement()
//{
//	while (true)
//	{
//		Aws::GameLift::Model::DescribeGameSessionPlacementRequest req;
//		req.SetPlacementId(mPlacementId);
//		auto outcome = GGameLiftManager->GetAwsClient()->DescribeGameSessionPlacement(req);
//	
//		if (outcome.IsSuccess())
//		{
//			auto gs = outcome.GetResult().GetGameSessionPlacement();
//
//			if (gs.GetStatus() == Aws::GameLift::Model::GameSessionPlacementState::FULFILLED)
//			{
//				mGameSessionId = gs.GetGameSessionArn();
//				mIpAddress = gs.GetIpAddress();
//				mPort = gs.GetPort();
//
//				/// change region...
//				GGameLiftManager->SetUpAwsClient(gs.GetGameSessionRegion());
//
//				return true;
//			}
//		}
//		else
//		{
//			break;
//		}
//
//		Sleep(500);
//	}
//
//	return false;
//
//}