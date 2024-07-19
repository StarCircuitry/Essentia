// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Essentia/Public/EssentialCharacter_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEssentialCharacter_Base() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ESSENTIA_API UClass* Z_Construct_UClass_AEssentialCharacter_Base();
	ESSENTIA_API UClass* Z_Construct_UClass_AEssentialCharacter_Base_NoRegister();
	ESSENTIA_API UClass* Z_Construct_UClass_UEssenceTagBarComponent_Base_NoRegister();
	ESSENTIA_API UClass* Z_Construct_UClass_UEssentialComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Essentia();
// End Cross Module References
	void AEssentialCharacter_Base::StaticRegisterNativesAEssentialCharacter_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEssentialCharacter_Base);
	UClass* Z_Construct_UClass_AEssentialCharacter_Base_NoRegister()
	{
		return AEssentialCharacter_Base::StaticClass();
	}
	struct Z_Construct_UClass_AEssentialCharacter_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EssentialComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EssentialComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDisplayWidget_MetaData[];
#endif
		static void NewProp_bHasDisplayWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDisplayWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TagWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEssentialCharacter_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Essentia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialCharacter_Base_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEssentialCharacter_Base_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EssentialCharacter_Base.h" },
		{ "ModuleRelativePath", "Public/EssentialCharacter_Base.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_EssentialComponent_MetaData[] = {
		{ "Category", "Essentia" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EssentialCharacter_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_EssentialComponent = { "EssentialComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEssentialCharacter_Base, EssentialComponent), Z_Construct_UClass_UEssentialComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_EssentialComponent_MetaData), Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_EssentialComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_bHasDisplayWidget_MetaData[] = {
		{ "Category", "Essentia|UI" },
		{ "ModuleRelativePath", "Public/EssentialCharacter_Base.h" },
	};
#endif
	void Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_bHasDisplayWidget_SetBit(void* Obj)
	{
		((AEssentialCharacter_Base*)Obj)->bHasDisplayWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_bHasDisplayWidget = { "bHasDisplayWidget", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEssentialCharacter_Base), &Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_bHasDisplayWidget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_bHasDisplayWidget_MetaData), Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_bHasDisplayWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_TagWidget_MetaData[] = {
		{ "Category", "Essentia|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the WidgetComponent that will hold all our tag stuff\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EssentialCharacter_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the WidgetComponent that will hold all our tag stuff" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_TagWidget = { "TagWidget", nullptr, (EPropertyFlags)0x0014000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEssentialCharacter_Base, TagWidget), Z_Construct_UClass_UEssenceTagBarComponent_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_TagWidget_MetaData), Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_TagWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_World_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// World reference\n" },
#endif
		{ "ModuleRelativePath", "Public/EssentialCharacter_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World reference" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEssentialCharacter_Base, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_World_MetaData), Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEssentialCharacter_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_EssentialComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_bHasDisplayWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_TagWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEssentialCharacter_Base_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEssentialCharacter_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEssentialCharacter_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEssentialCharacter_Base_Statics::ClassParams = {
		&AEssentialCharacter_Base::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEssentialCharacter_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialCharacter_Base_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialCharacter_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_AEssentialCharacter_Base_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialCharacter_Base_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEssentialCharacter_Base()
	{
		if (!Z_Registration_Info_UClass_AEssentialCharacter_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEssentialCharacter_Base.OuterSingleton, Z_Construct_UClass_AEssentialCharacter_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEssentialCharacter_Base.OuterSingleton;
	}
	template<> ESSENTIA_API UClass* StaticClass<AEssentialCharacter_Base>()
	{
		return AEssentialCharacter_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEssentialCharacter_Base);
	AEssentialCharacter_Base::~AEssentialCharacter_Base() {}
	struct Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialCharacter_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialCharacter_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEssentialCharacter_Base, AEssentialCharacter_Base::StaticClass, TEXT("AEssentialCharacter_Base"), &Z_Registration_Info_UClass_AEssentialCharacter_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEssentialCharacter_Base), 645107325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialCharacter_Base_h_492331088(TEXT("/Script/Essentia"),
		Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialCharacter_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialCharacter_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
