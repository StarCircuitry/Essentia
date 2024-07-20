// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Essentia/Public/EssenceTagContainer_Base.h"
#include "Essentia/Public/EssentiaAppendix.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEssenceTagContainer_Base() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ESSENTIA_API UClass* Z_Construct_UClass_UEssenceTag_Base_NoRegister();
	ESSENTIA_API UClass* Z_Construct_UClass_UEssenceTagContainer_Base();
	ESSENTIA_API UClass* Z_Construct_UClass_UEssenceTagContainer_Base_NoRegister();
	ESSENTIA_API UClass* Z_Construct_UClass_UEssentiaWidget_Base();
	ESSENTIA_API UScriptStruct* Z_Construct_UScriptStruct_FEssenceStack();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Essentia();
// End Cross Module References
	DEFINE_FUNCTION(UEssenceTagContainer_Base::execRemoveEssenceTag)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveEssenceTag(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssenceTagContainer_Base::execAddEssenceTag)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_Stack);
		P_GET_OBJECT(UClass,Z_Param_NewTagClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddEssenceTag(Z_Param_Stack,Z_Param_NewTagClass);
		P_NATIVE_END;
	}
	void UEssenceTagContainer_Base::StaticRegisterNativesUEssenceTagContainer_Base()
	{
		UClass* Class = UEssenceTagContainer_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEssenceTag", &UEssenceTagContainer_Base::execAddEssenceTag },
			{ "RemoveEssenceTag", &UEssenceTagContainer_Base::execRemoveEssenceTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag_Statics
	{
		struct EssenceTagContainer_Base_eventAddEssenceTag_Parms
		{
			FEssenceStack Stack;
			TSubclassOf<UEssenceTag_Base>  NewTagClass;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewTagClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssenceTagContainer_Base_eventAddEssenceTag_Parms, Stack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 379299852
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag_Statics::NewProp_NewTagClass = { "NewTagClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssenceTagContainer_Base_eventAddEssenceTag_Parms, NewTagClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEssenceTag_Base_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag_Statics::NewProp_Stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag_Statics::NewProp_NewTagClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Logic for adding and removing tags happens here\n// It's called from the essential component through the reference stored in their owner\n" },
#endif
		{ "ModuleRelativePath", "Public/EssenceTagContainer_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logic for adding and removing tags happens here\nIt's called from the essential component through the reference stored in their owner" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssenceTagContainer_Base, nullptr, "AddEssenceTag", nullptr, nullptr, Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag_Statics::EssenceTagContainer_Base_eventAddEssenceTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag_Statics::EssenceTagContainer_Base_eventAddEssenceTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssenceTagContainer_Base_RemoveEssenceTag_Statics
	{
		struct EssenceTagContainer_Base_eventRemoveEssenceTag_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssenceTagContainer_Base_RemoveEssenceTag_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssenceTagContainer_Base_eventRemoveEssenceTag_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssenceTagContainer_Base_RemoveEssenceTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssenceTagContainer_Base_RemoveEssenceTag_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssenceTagContainer_Base_RemoveEssenceTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssenceTagContainer_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssenceTagContainer_Base_RemoveEssenceTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssenceTagContainer_Base, nullptr, "RemoveEssenceTag", nullptr, nullptr, Z_Construct_UFunction_UEssenceTagContainer_Base_RemoveEssenceTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssenceTagContainer_Base_RemoveEssenceTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssenceTagContainer_Base_RemoveEssenceTag_Statics::EssenceTagContainer_Base_eventRemoveEssenceTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssenceTagContainer_Base_RemoveEssenceTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssenceTagContainer_Base_RemoveEssenceTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssenceTagContainer_Base_RemoveEssenceTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssenceTagContainer_Base_RemoveEssenceTag_Statics::EssenceTagContainer_Base_eventRemoveEssenceTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssenceTagContainer_Base_RemoveEssenceTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssenceTagContainer_Base_RemoveEssenceTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEssenceTagContainer_Base);
	UClass* Z_Construct_UClass_UEssenceTagContainer_Base_NoRegister()
	{
		return UEssenceTagContainer_Base::StaticClass();
	}
	struct Z_Construct_UClass_UEssenceTagContainer_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TagArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TagArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEssenceTagContainer_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEssentiaWidget_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Essentia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTagContainer_Base_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEssenceTagContainer_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEssenceTagContainer_Base_AddEssenceTag, "AddEssenceTag" }, // 2526441391
		{ &Z_Construct_UFunction_UEssenceTagContainer_Base_RemoveEssenceTag, "RemoveEssenceTag" }, // 964330743
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTagContainer_Base_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssenceTagContainer_Base_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EssenceTagContainer_Base.h" },
		{ "ModuleRelativePath", "Public/EssenceTagContainer_Base.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssenceTagContainer_Base_Statics::NewProp_TagContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Constituent Controls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EssenceTagContainer_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEssenceTagContainer_Base_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0014000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEssenceTagContainer_Base, TagContainer), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTagContainer_Base_Statics::NewProp_TagContainer_MetaData), Z_Construct_UClass_UEssenceTagContainer_Base_Statics::NewProp_TagContainer_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEssenceTagContainer_Base_Statics::NewProp_TagArray_Inner = { "TagArray", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssenceTagContainer_Base_Statics::NewProp_TagArray_MetaData[] = {
		{ "Category", "EssenceTagContainer_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EssenceTagContainer_Base.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEssenceTagContainer_Base_Statics::NewProp_TagArray = { "TagArray", nullptr, (EPropertyFlags)0x0010008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEssenceTagContainer_Base, TagArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTagContainer_Base_Statics::NewProp_TagArray_MetaData), Z_Construct_UClass_UEssenceTagContainer_Base_Statics::NewProp_TagArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEssenceTagContainer_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssenceTagContainer_Base_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssenceTagContainer_Base_Statics::NewProp_TagArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssenceTagContainer_Base_Statics::NewProp_TagArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEssenceTagContainer_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEssenceTagContainer_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEssenceTagContainer_Base_Statics::ClassParams = {
		&UEssenceTagContainer_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEssenceTagContainer_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTagContainer_Base_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTagContainer_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UEssenceTagContainer_Base_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEssenceTagContainer_Base_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEssenceTagContainer_Base()
	{
		if (!Z_Registration_Info_UClass_UEssenceTagContainer_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEssenceTagContainer_Base.OuterSingleton, Z_Construct_UClass_UEssenceTagContainer_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEssenceTagContainer_Base.OuterSingleton;
	}
	template<> ESSENTIA_API UClass* StaticClass<UEssenceTagContainer_Base>()
	{
		return UEssenceTagContainer_Base::StaticClass();
	}
	UEssenceTagContainer_Base::UEssenceTagContainer_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEssenceTagContainer_Base);
	UEssenceTagContainer_Base::~UEssenceTagContainer_Base() {}
	struct Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssenceTagContainer_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssenceTagContainer_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEssenceTagContainer_Base, UEssenceTagContainer_Base::StaticClass, TEXT("UEssenceTagContainer_Base"), &Z_Registration_Info_UClass_UEssenceTagContainer_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEssenceTagContainer_Base), 2502210827U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssenceTagContainer_Base_h_3804847689(TEXT("/Script/Essentia"),
		Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssenceTagContainer_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssenceTagContainer_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
