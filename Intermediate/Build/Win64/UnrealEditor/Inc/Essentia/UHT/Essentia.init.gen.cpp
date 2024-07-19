// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEssentia_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Essentia;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Essentia()
	{
		if (!Z_Registration_Info_UPackage__Script_Essentia.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Essentia",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x540A9301,
				0x27C04021,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Essentia.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Essentia.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Essentia(Z_Construct_UPackage__Script_Essentia, TEXT("/Script/Essentia"), Z_Registration_Info_UPackage__Script_Essentia, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x540A9301, 0x27C04021));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
