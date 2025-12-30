// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShepherdsLogic_init() {}
	SHEPHERDSLOGIC_API UFunction* Z_Construct_UDelegateFunction_ShepherdsLogic_OnUnitMoveCompletedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShepherdsLogic;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShepherdsLogic()
	{
		if (!Z_Registration_Info_UPackage__Script_ShepherdsLogic.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ShepherdsLogic_OnUnitMoveCompletedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ShepherdsLogic",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3128D8C1,
				0xED9B1B4A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShepherdsLogic.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ShepherdsLogic.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShepherdsLogic(Z_Construct_UPackage__Script_ShepherdsLogic, TEXT("/Script/ShepherdsLogic"), Z_Registration_Info_UPackage__Script_ShepherdsLogic, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3128D8C1, 0xED9B1B4A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
