// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LD50_GJ202204 : ModuleRules
{
	public LD50_GJ202204(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
