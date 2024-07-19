// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Essentia/Public/EssentiaAppendix.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEssentiaAppendix() {}
// Cross Module References
	ESSENTIA_API UScriptStruct* Z_Construct_UScriptStruct_FCascadeParams();
	ESSENTIA_API UScriptStruct* Z_Construct_UScriptStruct_FEssenceStack();
	UPackage* Z_Construct_UPackage__Script_Essentia();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EssenceStack;
class UScriptStruct* FEssenceStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EssenceStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EssenceStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEssenceStack, (UObject*)Z_Construct_UPackage__Script_Essentia(), TEXT("EssenceStack"));
	}
	return Z_Registration_Info_UScriptStruct_EssenceStack.OuterSingleton;
}
template<> ESSENTIA_API UScriptStruct* StaticStruct<FEssenceStack>()
{
	return FEssenceStack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEssenceStack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElemID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ElemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStable_MetaData[];
#endif
		static void NewProp_bIsStable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPerpetual_MetaData[];
#endif
		static void NewProp_bIsPerpetual_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPerpetual;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PurgeDamage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PurgeDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PurgeTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PurgeTimer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEssenceStack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the basic unit of Essential charge\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EssentiaAppendix.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the basic unit of Essential charge" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FEssenceStack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEssenceStack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_ElemID_MetaData[] = {
		{ "Category", "EssenceStack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variable defs\n" },
#endif
		{ "ModuleRelativePath", "Public/EssentiaAppendix.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable defs" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_ElemID = { "ElemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEssenceStack, ElemID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_ElemID_MetaData), Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_ElemID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_bIsStable_MetaData[] = {
		{ "Category", "EssenceStack" },
		{ "ModuleRelativePath", "Public/EssentiaAppendix.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_bIsStable_SetBit(void* Obj)
	{
		((FEssenceStack*)Obj)->bIsStable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_bIsStable = { "bIsStable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEssenceStack), &Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_bIsStable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_bIsStable_MetaData), Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_bIsStable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_bIsPerpetual_MetaData[] = {
		{ "Category", "EssenceStack" },
		{ "ModuleRelativePath", "Public/EssentiaAppendix.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_bIsPerpetual_SetBit(void* Obj)
	{
		((FEssenceStack*)Obj)->bIsPerpetual = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_bIsPerpetual = { "bIsPerpetual", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEssenceStack), &Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_bIsPerpetual_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_bIsPerpetual_MetaData), Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_bIsPerpetual_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_PurgeDamage_MetaData[] = {
		{ "Category", "EssenceStack" },
		{ "ModuleRelativePath", "Public/EssentiaAppendix.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_PurgeDamage = { "PurgeDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEssenceStack, PurgeDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_PurgeDamage_MetaData), Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_PurgeDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_PurgeTimer_MetaData[] = {
		{ "Category", "EssenceStack" },
		{ "ModuleRelativePath", "Public/EssentiaAppendix.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_PurgeTimer = { "PurgeTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEssenceStack, PurgeTimer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_PurgeTimer_MetaData), Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_PurgeTimer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEssenceStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_ElemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_bIsStable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_bIsPerpetual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_PurgeDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEssenceStack_Statics::NewProp_PurgeTimer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEssenceStack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Essentia,
		nullptr,
		&NewStructOps,
		"EssenceStack",
		Z_Construct_UScriptStruct_FEssenceStack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEssenceStack_Statics::PropPointers),
		sizeof(FEssenceStack),
		alignof(FEssenceStack),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEssenceStack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEssenceStack_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEssenceStack_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEssenceStack()
	{
		if (!Z_Registration_Info_UScriptStruct_EssenceStack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EssenceStack.InnerSingleton, Z_Construct_UScriptStruct_FEssenceStack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EssenceStack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CascadeParams;
class UScriptStruct* FCascadeParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CascadeParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CascadeParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCascadeParams, (UObject*)Z_Construct_UPackage__Script_Essentia(), TEXT("CascadeParams"));
	}
	return Z_Registration_Info_UScriptStruct_CascadeParams.OuterSingleton;
}
template<> ESSENTIA_API UScriptStruct* StaticStruct<FCascadeParams>()
{
	return FCascadeParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCascadeParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectElemID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubjectElemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerElemID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriggerElemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCatalyzed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCatalyzed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCascadeParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EssentiaAppendix.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCascadeParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCascadeParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCascadeParams_Statics::NewProp_SubjectElemID_MetaData[] = {
		{ "Category", "CascadeParams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Element that is being catalyzed\n" },
#endif
		{ "ModuleRelativePath", "Public/EssentiaAppendix.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Element that is being catalyzed" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCascadeParams_Statics::NewProp_SubjectElemID = { "SubjectElemID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCascadeParams, SubjectElemID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCascadeParams_Statics::NewProp_SubjectElemID_MetaData), Z_Construct_UScriptStruct_FCascadeParams_Statics::NewProp_SubjectElemID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCascadeParams_Statics::NewProp_TriggerElemID_MetaData[] = {
		{ "Category", "CascadeParams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Element that triggered the cata reaction\n" },
#endif
		{ "ModuleRelativePath", "Public/EssentiaAppendix.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Element that triggered the cata reaction" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCascadeParams_Statics::NewProp_TriggerElemID = { "TriggerElemID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCascadeParams, TriggerElemID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCascadeParams_Statics::NewProp_TriggerElemID_MetaData), Z_Construct_UScriptStruct_FCascadeParams_Statics::NewProp_TriggerElemID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCascadeParams_Statics::NewProp_NumCatalyzed_MetaData[] = {
		{ "Category", "CascadeParams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of stacks removed\n" },
#endif
		{ "ModuleRelativePath", "Public/EssentiaAppendix.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of stacks removed" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCascadeParams_Statics::NewProp_NumCatalyzed = { "NumCatalyzed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCascadeParams, NumCatalyzed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCascadeParams_Statics::NewProp_NumCatalyzed_MetaData), Z_Construct_UScriptStruct_FCascadeParams_Statics::NewProp_NumCatalyzed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCascadeParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCascadeParams_Statics::NewProp_SubjectElemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCascadeParams_Statics::NewProp_TriggerElemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCascadeParams_Statics::NewProp_NumCatalyzed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCascadeParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Essentia,
		nullptr,
		&NewStructOps,
		"CascadeParams",
		Z_Construct_UScriptStruct_FCascadeParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCascadeParams_Statics::PropPointers),
		sizeof(FCascadeParams),
		alignof(FCascadeParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCascadeParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCascadeParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCascadeParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCascadeParams()
	{
		if (!Z_Registration_Info_UScriptStruct_CascadeParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CascadeParams.InnerSingleton, Z_Construct_UScriptStruct_FCascadeParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CascadeParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentiaAppendix_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentiaAppendix_h_Statics::ScriptStructInfo[] = {
		{ FEssenceStack::StaticStruct, Z_Construct_UScriptStruct_FEssenceStack_Statics::NewStructOps, TEXT("EssenceStack"), &Z_Registration_Info_UScriptStruct_EssenceStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEssenceStack), 3386720530U) },
		{ FCascadeParams::StaticStruct, Z_Construct_UScriptStruct_FCascadeParams_Statics::NewStructOps, TEXT("CascadeParams"), &Z_Registration_Info_UScriptStruct_CascadeParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCascadeParams), 477738419U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentiaAppendix_h_1763082393(TEXT("/Script/Essentia"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentiaAppendix_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentiaAppendix_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
