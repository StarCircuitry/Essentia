// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Essentia/Public/EssentialProjectileBasic_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEssentialProjectileBasic_Base() {}
// Cross Module References
	ESSENTIA_API UClass* Z_Construct_UClass_AEssentialParticle_Base();
	ESSENTIA_API UClass* Z_Construct_UClass_AEssentialProjectileBasic_Base();
	ESSENTIA_API UClass* Z_Construct_UClass_AEssentialProjectileBasic_Base_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Essentia();
// End Cross Module References
	void AEssentialProjectileBasic_Base::StaticRegisterNativesAEssentialProjectileBasic_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEssentialProjectileBasic_Base);
	UClass* Z_Construct_UClass_AEssentialProjectileBasic_Base_NoRegister()
	{
		return AEssentialProjectileBasic_Base::StaticClass();
	}
	struct Z_Construct_UClass_AEssentialProjectileBasic_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEssentialProjectileBasic_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEssentialParticle_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Essentia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialProjectileBasic_Base_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEssentialProjectileBasic_Base_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EssentialProjectileBasic_Base.h" },
		{ "ModuleRelativePath", "Public/EssentialProjectileBasic_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEssentialProjectileBasic_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEssentialProjectileBasic_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEssentialProjectileBasic_Base_Statics::ClassParams = {
		&AEssentialProjectileBasic_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialProjectileBasic_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_AEssentialProjectileBasic_Base_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEssentialProjectileBasic_Base()
	{
		if (!Z_Registration_Info_UClass_AEssentialProjectileBasic_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEssentialProjectileBasic_Base.OuterSingleton, Z_Construct_UClass_AEssentialProjectileBasic_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEssentialProjectileBasic_Base.OuterSingleton;
	}
	template<> ESSENTIA_API UClass* StaticClass<AEssentialProjectileBasic_Base>()
	{
		return AEssentialProjectileBasic_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEssentialProjectileBasic_Base);
	AEssentialProjectileBasic_Base::~AEssentialProjectileBasic_Base() {}
	struct Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialProjectileBasic_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialProjectileBasic_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEssentialProjectileBasic_Base, AEssentialProjectileBasic_Base::StaticClass, TEXT("AEssentialProjectileBasic_Base"), &Z_Registration_Info_UClass_AEssentialProjectileBasic_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEssentialProjectileBasic_Base), 1079847329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialProjectileBasic_Base_h_208940009(TEXT("/Script/Essentia"),
		Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialProjectileBasic_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialProjectileBasic_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
