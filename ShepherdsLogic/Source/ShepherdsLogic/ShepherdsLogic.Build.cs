// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ShepherdsLogic : ModuleRules
{
	public ShepherdsLogic(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"NavigationSystem",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"Niagara",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ShepherdsLogic",
			"ShepherdsLogic/Variant_Strategy",
			"ShepherdsLogic/Variant_Strategy/UI",
			"ShepherdsLogic/Variant_TwinStick",
			"ShepherdsLogic/Variant_TwinStick/AI",
			"ShepherdsLogic/Variant_TwinStick/Gameplay",
			"ShepherdsLogic/Variant_TwinStick/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
