// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Essentia/Public/EssenceTag_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEssenceTag_Base() {}
// Cross Module References
	ESSENTIA_API UClass* Z_Construct_UClass_UEssenceTag_Base();
	ESSENTIA_API UClass* Z_Construct_UClass_UEssenceTag_Base_NoRegister();
	ESSENTIA_API UClass* Z_Construct_UClass_UEssentiaWidget_Base();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Essentia();
// End Cross Module References
	void UEssenceTag_Base::StaticRegisterNativesUEssenceTag_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEssenceTag_Base);
	UClass* Z_Construct_UClass_UEssenceTag_Base_NoRegister()
	{
		return UEssenceTag_Base::StaticClass();
	}
	struct Z_Construct_UClass_UEssenceTag_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TagImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEssenceTag_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEssentiaWidget_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Essentia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTag_Base_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssenceTag_Base_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EssenceTag_Base.h" },
		{ "ModuleRelativePath", "Public/EssenceTag_Base.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssenceTag_Base_Statics::NewProp_TagImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Constituent Controls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EssenceTag_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEssenceTag_Base_Statics::NewProp_TagImage = { "TagImage", nullptr, (EPropertyFlags)0x0014000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEssenceTag_Base, TagImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTag_Base_Statics::NewProp_TagImage_MetaData), Z_Construct_UClass_UEssenceTag_Base_Statics::NewProp_TagImage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEssenceTag_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssenceTag_Base_Statics::NewProp_TagImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEssenceTag_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEssenceTag_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEssenceTag_Base_Statics::ClassParams = {
		&UEssenceTag_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEssenceTag_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTag_Base_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTag_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UEssenceTag_Base_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTag_Base_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEssenceTag_Base()
	{
		if (!Z_Registration_Info_UClass_UEssenceTag_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEssenceTag_Base.OuterSingleton, Z_Construct_UClass_UEssenceTag_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEssenceTag_Base.OuterSingleton;
	}
	template<> ESSENTIA_API UClass* StaticClass<UEssenceTag_Base>()
	{
		return UEssenceTag_Base::StaticClass();
	}
	UEssenceTag_Base::UEssenceTag_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEssenceTag_Base);
	UEssenceTag_Base::~UEssenceTag_Base() {}
	struct Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssenceTag_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssenceTag_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEssenceTag_Base, UEssenceTag_Base::StaticClass, TEXT("UEssenceTag_Base"), &Z_Registration_Info_UClass_UEssenceTag_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEssenceTag_Base), 2900237097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssenceTag_Base_h_730208938(TEXT("/Script/Essentia"),
		Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssenceTag_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssenceTag_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
