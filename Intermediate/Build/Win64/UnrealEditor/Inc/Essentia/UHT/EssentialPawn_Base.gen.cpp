// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Essentia/Public/EssentialPawn_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEssentialPawn_Base() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ESSENTIA_API UClass* Z_Construct_UClass_AEssentialPawn_Base();
	ESSENTIA_API UClass* Z_Construct_UClass_AEssentialPawn_Base_NoRegister();
	ESSENTIA_API UClass* Z_Construct_UClass_UEssenceTagBarComponent_Base_NoRegister();
	ESSENTIA_API UClass* Z_Construct_UClass_UEssentialComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Essentia();
// End Cross Module References
	void AEssentialPawn_Base::StaticRegisterNativesAEssentialPawn_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEssentialPawn_Base);
	UClass* Z_Construct_UClass_AEssentialPawn_Base_NoRegister()
	{
		return AEssentialPawn_Base::StaticClass();
	}
	struct Z_Construct_UClass_AEssentialPawn_Base_Statics
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
	UObject* (*const Z_Construct_UClass_AEssentialPawn_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Essentia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialPawn_Base_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEssentialPawn_Base_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EssentialPawn_Base.h" },
		{ "ModuleRelativePath", "Public/EssentialPawn_Base.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_EssentialComponent_MetaData[] = {
		{ "Category", "Essentia" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the essential component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EssentialPawn_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the essential component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_EssentialComponent = { "EssentialComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEssentialPawn_Base, EssentialComponent), Z_Construct_UClass_UEssentialComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_EssentialComponent_MetaData), Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_EssentialComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_bHasDisplayWidget_MetaData[] = {
		{ "Category", "Essentia|UI" },
		{ "ModuleRelativePath", "Public/EssentialPawn_Base.h" },
	};
#endif
	void Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_bHasDisplayWidget_SetBit(void* Obj)
	{
		((AEssentialPawn_Base*)Obj)->bHasDisplayWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_bHasDisplayWidget = { "bHasDisplayWidget", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEssentialPawn_Base), &Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_bHasDisplayWidget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_bHasDisplayWidget_MetaData), Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_bHasDisplayWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_TagWidget_MetaData[] = {
		{ "Category", "Essentia|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the WidgetComponent that will hold all our tag stuff\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EssentialPawn_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the WidgetComponent that will hold all our tag stuff" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_TagWidget = { "TagWidget", nullptr, (EPropertyFlags)0x0014000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEssentialPawn_Base, TagWidget), Z_Construct_UClass_UEssenceTagBarComponent_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_TagWidget_MetaData), Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_TagWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_World_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// World reference\n" },
#endif
		{ "ModuleRelativePath", "Public/EssentialPawn_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World reference" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEssentialPawn_Base, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_World_MetaData), Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEssentialPawn_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_EssentialComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_bHasDisplayWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_TagWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEssentialPawn_Base_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEssentialPawn_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEssentialPawn_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEssentialPawn_Base_Statics::ClassParams = {
		&AEssentialPawn_Base::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEssentialPawn_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialPawn_Base_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialPawn_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_AEssentialPawn_Base_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialPawn_Base_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEssentialPawn_Base()
	{
		if (!Z_Registration_Info_UClass_AEssentialPawn_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEssentialPawn_Base.OuterSingleton, Z_Construct_UClass_AEssentialPawn_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEssentialPawn_Base.OuterSingleton;
	}
	template<> ESSENTIA_API UClass* StaticClass<AEssentialPawn_Base>()
	{
		return AEssentialPawn_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEssentialPawn_Base);
	AEssentialPawn_Base::~AEssentialPawn_Base() {}
	struct Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialPawn_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialPawn_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEssentialPawn_Base, AEssentialPawn_Base::StaticClass, TEXT("AEssentialPawn_Base"), &Z_Registration_Info_UClass_AEssentialPawn_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEssentialPawn_Base), 424357641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialPawn_Base_h_3088702593(TEXT("/Script/Essentia"),
		Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialPawn_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialPawn_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
