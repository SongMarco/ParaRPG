// Fill out your copyright notice in the Description page of Project Settings.
using System.IO;
using UnrealBuildTool;

public class PragonRPG : ModuleRules
{
    //convinience properties
    private string ModulePath
    {
        get { return ModuleDirectory; }
    }

    private string ThirdPartyPath
    {
        get { return Path.GetFullPath(Path.Combine(ModulePath, "../../packages/vcpkg/packages/")); }
    }

    public PragonRPG(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bEnableExceptions = true;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore",
            "JsonUtilities", "Http",
            "Json", "GameLiftServerSDK",
          //  "GameLiftClientSDK", "AWSCore"
        });

        PrivateDependencyModuleNames.AddRange(new string[] { });



                          

        //LoadYJMagicLib(Target);
   
    }

    public bool LoadYJMagicLib(ReadOnlyTargetRules Target)
    {
        bool isLibrarySupported = false;

        if ((Target.Platform == UnrealTargetPlatform.Win64) || (Target.Platform == UnrealTargetPlatform.Win32))
        {
            isLibrarySupported = true;

            string PlatformString = (Target.Platform == UnrealTargetPlatform.Win64) ? "x64" : "x86";

            //D:\Ue4Project\ParaRPG\ThirdParty\GameLiftLib\lib
            string LibrariesPath = Path.Combine(ThirdPartyPath, "aws-sdk-cpp_x64-windows", "lib");

            /*
            test your path with:
            using System; // Console.WriteLine("");
            Console.WriteLine("... LibrariesPath -> " + LibrariesPath);
            */

            ////라이브러리(x.lib) 패스 추가 - 헤더 파일 추가 확인할 것(아래 If~내용)                     
            PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "aws-cpp-sdk-core." + PlatformString + ".lib"));
            PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "aws-cpp-sdk-gamelift." + PlatformString + ".lib"));
            PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "aws-cpp-sdk-kinesis." + PlatformString + ".lib"));
            PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "aws-cpp-sdk-s3." +PlatformString+ ".lib"));

        }

        if (isLibrarySupported)
        {
            //헤더파일 디렉토리 추가함

            // Include path for gamelift
            //PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "GameLiftLib", "Include"));
            PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "aws-sdk-cpp_x64-windows", "Include"));

            //// Include path for aws core
            //PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "aws-cpp-sdk-core", "Include"));

            // Include path for aws core
            //PublicIncludePaths.Add("D:/Ue4Project/ParaRPG/ThirdParty/aws-cpp-sdk-core/include");

            // Include path for aws core
            //PublicIncludePaths.Add("D:/Ue4Project/ParaRPG/packages/vcpkg/packages/aws-sdk-cpp_x64-windows/include");
        }

        PublicDefinitions.Add(string.Format("WITH_YJ_MAGIC_LIB_BINDING={0}", isLibrarySupported ? 1 : 0));

        return isLibrarySupported;
    }


  






}
