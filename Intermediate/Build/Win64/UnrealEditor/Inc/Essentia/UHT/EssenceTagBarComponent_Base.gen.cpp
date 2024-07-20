// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Essentia/Public/EssenceTagBarComponent_Base.h"
#include "Essentia/Public/EssentiaAppendix.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEssenceTagBarComponent_Base() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ESSENTIA_API UClass* Z_Construct_UClass_UEssenceTag_Base_NoRegister();
	ESSENTIA_API UClass* Z_Construct_UClass_UEssenceTagBarComponent_Base();
	ESSENTIA_API UClass* Z_Construct_UClass_UEssenceTagBarComponent_Base_NoRegister();
	ESSENTIA_API UClass* Z_Construct_UClass_UEssenceTagContainer_Base_NoRegister();
	ESSENTIA_API UScriptStruct* Z_Construct_UScriptStruct_FEssenceStack();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_Essentia();
// End Cross Module References
	DEFINE_FUNCTION(UEssenceTagBarComponent_Base::execRemoveEssenceTag)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveEssenceTag(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssenceTagBarComponent_Base::execAddEssenceTag)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_Stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddEssenceTag(Z_Param_Stack);
		P_NATIVE_END;
	}
	void UEssenceTagBarComponent_Base::StaticRegisterNativesUEssenceTagBarComponent_Base()
	{
		UClass* Class = UEssenceTagBarComponent_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEssenceTag", &UEssenceTagBarComponent_Base::execAddEssenceTag },
			{ "RemoveEssenceTag", &UEssenceTagBarComponent_Base::execRemoveEssenceTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEssenceTagBarComponent_Base_AddEssenceTag_Statics
	{
		struct EssenceTagBarComponent_Base_eventAddEssenceTag_Parms
		{
			FEssenceStack Stack;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssenceTagBarComponent_Base_AddEssenceTag_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssenceTagBarComponent_Base_eventAddEssenceTag_Parms, Stack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 379299852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssenceTagBarComponent_Base_AddEssenceTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssenceTagBarComponent_Base_AddEssenceTag_Statics::NewProp_Stack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssenceTagBarComponent_Base_AddEssenceTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssenceTagBarComponent_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssenceTagBarComponent_Base_AddEssenceTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssenceTagBarComponent_Base, nullptr, "AddEssenceTag", nullptr, nullptr, Z_Construct_UFunction_UEssenceTagBarComponent_Base_AddEssenceTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssenceTagBarComponent_Base_AddEssenceTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssenceTagBarComponent_Base_AddEssenceTag_Statics::EssenceTagBarComponent_Base_eventAddEssenceTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssenceTagBarComponent_Base_AddEssenceTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssenceTagBarComponent_Base_AddEssenceTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssenceTagBarComponent_Base_AddEssenceTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssenceTagBarComponent_Base_AddEssenceTag_Statics::EssenceTagBarComponent_Base_eventAddEssenceTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssenceTagBarComponent_Base_AddEssenceTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssenceTagBarComponent_Base_AddEssenceTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssenceTagBarComponent_Base_RemoveEssenceTag_Statics
	{
		struct EssenceTagBarComponent_Base_eventRemoveEssenceTag_Parms
		{
			int32 Index;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssenceTagBarComponent_Base_RemoveEssenceTag_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssenceTagBarComponent_Base_eventRemoveEssenceTag_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssenceTagBarComponent_Base_RemoveEssenceTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssenceTagBarComponent_Base_RemoveEssenceTag_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssenceTagBarComponent_Base_RemoveEssenceTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssenceTagBarComponent_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssenceTagBarComponent_Base_RemoveEssenceTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssenceTagBarComponent_Base, nullptr, "RemoveEssenceTag", nullptr, nullptr, Z_Construct_UFunction_UEssenceTagBarComponent_Base_RemoveEssenceTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssenceTagBarComponent_Base_RemoveEssenceTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssenceTagBarComponent_Base_RemoveEssenceTag_Statics::EssenceTagBarComponent_Base_eventRemoveEssenceTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssenceTagBarComponent_Base_RemoveEssenceTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssenceTagBarComponent_Base_RemoveEssenceTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssenceTagBarComponent_Base_RemoveEssenceTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssenceTagBarComponent_Base_RemoveEssenceTag_Statics::EssenceTagBarComponent_Base_eventRemoveEssenceTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssenceTagBarComponent_Base_RemoveEssenceTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssenceTagBarComponent_Base_RemoveEssenceTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEssenceTagBarComponent_Base);
	UClass* Z_Construct_UClass_UEssenceTagBarComponent_Base_NoRegister()
	{
		return UEssenceTagBarComponent_Base::StaticClass();
	}
	struct Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TagContainerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MainWidget;
		static const UECodeGen_Private::FClassPropertyParams NewProp_TagClassArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagClassArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TagClassArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Essentia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEssenceTagBarComponent_Base_AddEssenceTag, "AddEssenceTag" }, // 943256192
		{ &Z_Construct_UFunction_UEssenceTagBarComponent_Base_RemoveEssenceTag, "RemoveEssenceTag" }, // 2279806789
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "EssenceTagBarComponent_Base.h" },
		{ "ModuleRelativePath", "Public/EssenceTagBarComponent_Base.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::NewProp_TagContainerClass_MetaData[] = {
		{ "Category", "Constituent Controls" },
		{ "ModuleRelativePath", "Public/EssenceTagBarComponent_Base.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::NewProp_TagContainerClass = { "TagContainerClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEssenceTagBarComponent_Base, TagContainerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEssenceTagContainer_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::NewProp_TagContainerClass_MetaData), Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::NewProp_TagContainerClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::NewProp_MainWidget_MetaData[] = {
		{ "Category", "Constituent Controls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EssenceTagBarComponent_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::NewProp_MainWidget = { "MainWidget", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEssenceTagBarComponent_Base, MainWidget), Z_Construct_UClass_UEssenceTagContainer_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::NewProp_MainWidget_MetaData), Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::NewProp_MainWidget_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::NewProp_TagClassArray_Inner = { "TagClassArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UEssenceTag_Base_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::NewProp_TagClassArray_MetaData[] = {
		{ "Category", "Constituent Controls" },
		{ "ModuleRelativePath", "Public/EssenceTagBarComponent_Base.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::NewProp_TagClassArray = { "TagClassArray", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEssenceTagBarComponent_Base, TagClassArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::NewProp_TagClassArray_MetaData), Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::NewProp_TagClassArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::NewProp_TagContainerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::NewProp_MainWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::NewProp_TagClassArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::NewProp_TagClassArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEssenceTagBarComponent_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::ClassParams = {
		&UEssenceTagBarComponent_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEssenceTagBarComponent_Base()
	{
		if (!Z_Registration_Info_UClass_UEssenceTagBarComponent_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEssenceTagBarComponent_Base.OuterSingleton, Z_Construct_UClass_UEssenceTagBarComponent_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEssenceTagBarComponent_Base.OuterSingleton;
	}
	template<> ESSENTIA_API UClass* StaticClass<UEssenceTagBarComponent_Base>()
	{
		return UEssenceTagBarComponent_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEssenceTagBarComponent_Base);
	UEssenceTagBarComponent_Base::~UEssenceTagBarComponent_Base() {}
	struct Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssenceTagBarComponent_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssenceTagBarComponent_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEssenceTagBarComponent_Base, UEssenceTagBarComponent_Base::StaticClass, TEXT("UEssenceTagBarComponent_Base"), &Z_Registration_Info_UClass_UEssenceTagBarComponent_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEssenceTagBarComponent_Base), 1014137136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssenceTagBarComponent_Base_h_3418622755(TEXT("/Script/Essentia"),
		Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssenceTagBarComponent_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssenceTagBarComponent_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
