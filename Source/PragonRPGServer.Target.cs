// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

//���� ���� ������ ���õ� �ڵ�


// ���� ���� Ÿ���� ����- ���� ���� ������Ʈ�� ParagonRPG�̹Ƿ�, 
// ���� Ÿ�� �̸��� ParagonRPGServerTarget�� �ȴ�.
public class PragonRPGServerTarget : TargetRules
{

    //������Ʈ �� �°� Ÿ�ٸ� ����
	public PragonRPGServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;


        //������Ʈ �� �°� "xxx" �κ��� ������ ��
        ExtraModuleNames.AddRange( new string[] { "PragonRPG" } );
	}
}

//// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

//using UnrealBuildTool;
//using System.Collections.Generic;

//[SupportedPlatforms(UnrealPlatformClass.Server)]
//public class ShooterGameServerTarget : TargetRules   // Change this line as shown previously
//{
//    public ShooterGameServerTarget(TargetInfo Target) : base(Target)  // Change this line as shown previously
//    {
//        Type = TargetType.Server;
//        ExtraModuleNames.Add("ShooterGame");    // Change this line as shown previously
//    }
//}