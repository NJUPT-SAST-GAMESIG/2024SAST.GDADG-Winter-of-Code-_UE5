// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SAST_GDADG_WOC_UE5 : ModuleRules
{
	public SAST_GDADG_WOC_UE5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
