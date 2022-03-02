// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tutorial_LoadLevel : ModuleRules
{
	public Tutorial_LoadLevel(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
