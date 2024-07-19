// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Essentia/Public/EssentialComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "Essentia/Public/EssentiaAppendix.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEssentialComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ESSENTIA_API UClass* Z_Construct_UClass_AEssentialField_Base_NoRegister();
	ESSENTIA_API UClass* Z_Construct_UClass_UEssenceTagBarComponent_Base_NoRegister();
	ESSENTIA_API UClass* Z_Construct_UClass_UEssentialComponent();
	ESSENTIA_API UClass* Z_Construct_UClass_UEssentialComponent_NoRegister();
	ESSENTIA_API UScriptStruct* Z_Construct_UScriptStruct_FCascadeParams();
	ESSENTIA_API UScriptStruct* Z_Construct_UScriptStruct_FEssenceStack();
	UPackage* Z_Construct_UPackage__Script_Essentia();
// End Cross Module References
	DEFINE_FUNCTION(UEssentialComponent::execDestroyEphemeral)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyEphemeral();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execPurgeFire)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_Stack);
		P_GET_PROPERTY(FIntProperty,Z_Param_Bookmark);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PurgeFire(Z_Param_Stack,Z_Param_Bookmark);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execPurgeWood)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_Stack);
		P_GET_PROPERTY(FIntProperty,Z_Param_Bookmark);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PurgeWood(Z_Param_Stack,Z_Param_Bookmark);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execPurgeMetal)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_Stack);
		P_GET_PROPERTY(FIntProperty,Z_Param_Bookmark);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PurgeMetal(Z_Param_Stack,Z_Param_Bookmark);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execPurgeEarth)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_Stack);
		P_GET_PROPERTY(FIntProperty,Z_Param_Bookmark);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PurgeEarth(Z_Param_Stack,Z_Param_Bookmark);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execPurgeWater)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_Stack);
		P_GET_PROPERTY(FIntProperty,Z_Param_Bookmark);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PurgeWater(Z_Param_Stack,Z_Param_Bookmark);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execPurgeStars)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_Stack);
		P_GET_PROPERTY(FIntProperty,Z_Param_Bookmark);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PurgeStars(Z_Param_Stack,Z_Param_Bookmark);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execPurgeLightning)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_Stack);
		P_GET_PROPERTY(FIntProperty,Z_Param_Bookmark);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PurgeLightning(Z_Param_Stack,Z_Param_Bookmark);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execPurgeAir)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_Stack);
		P_GET_PROPERTY(FIntProperty,Z_Param_Bookmark);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PurgeAir(Z_Param_Stack,Z_Param_Bookmark);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execFinishCascade)
	{
		P_GET_STRUCT(FCascadeParams,Z_Param_CascadeParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishCascade(Z_Param_CascadeParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execCheckCascade)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ElemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<int32,FCascadeParams>*)Z_Param__Result=P_THIS->CheckCascade(Z_Param_ElemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execMaterialRemove)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MaterialRemove(Z_Param_StackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execMaterialAdd)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_Stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MaterialAdd(Z_Param_Stack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execTagRemove)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TagRemove(Z_Param_StackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execTagAdd)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_Stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TagAdd(Z_Param_Stack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execInitializeDisplayComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeDisplayComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execDisplayRemove)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayRemove(Z_Param_StackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execDisplayAdd)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_Stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayAdd(Z_Param_Stack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execDisplayEssentia)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_DisplayStack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayEssentia(Z_Param_DisplayStack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execSpawnField)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_Stack);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FieldLifespan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnField(Z_Param_Stack,Z_Param_FieldLifespan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execPurgeStack)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_Stack);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PurgeStack(Z_Param_Stack,Z_Param_StackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execEssentialTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EssentialTick(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execRemoveStack)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_Stack);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackIndex);
		P_GET_UBOOL(Z_Param_bIsPurging);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveStack(Z_Param_Stack,Z_Param_StackIndex,Z_Param_bIsPurging);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execAddStack)
	{
		P_GET_STRUCT(FEssenceStack,Z_Param_NewStack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddStack(Z_Param_NewStack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEssentialComponent::execGetBasicStack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ElemID);
		P_GET_UBOOL(Z_Param_bIsStable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEssenceStack*)Z_Param__Result=P_THIS->GetBasicStack(Z_Param_ElemID,Z_Param_bIsStable);
		P_NATIVE_END;
	}
	void UEssentialComponent::StaticRegisterNativesUEssentialComponent()
	{
		UClass* Class = UEssentialComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddStack", &UEssentialComponent::execAddStack },
			{ "CheckCascade", &UEssentialComponent::execCheckCascade },
			{ "DestroyEphemeral", &UEssentialComponent::execDestroyEphemeral },
			{ "DisplayAdd", &UEssentialComponent::execDisplayAdd },
			{ "DisplayEssentia", &UEssentialComponent::execDisplayEssentia },
			{ "DisplayRemove", &UEssentialComponent::execDisplayRemove },
			{ "EssentialTick", &UEssentialComponent::execEssentialTick },
			{ "FinishCascade", &UEssentialComponent::execFinishCascade },
			{ "GetBasicStack", &UEssentialComponent::execGetBasicStack },
			{ "InitializeDisplayComponent", &UEssentialComponent::execInitializeDisplayComponent },
			{ "MaterialAdd", &UEssentialComponent::execMaterialAdd },
			{ "MaterialRemove", &UEssentialComponent::execMaterialRemove },
			{ "PurgeAir", &UEssentialComponent::execPurgeAir },
			{ "PurgeEarth", &UEssentialComponent::execPurgeEarth },
			{ "PurgeFire", &UEssentialComponent::execPurgeFire },
			{ "PurgeLightning", &UEssentialComponent::execPurgeLightning },
			{ "PurgeMetal", &UEssentialComponent::execPurgeMetal },
			{ "PurgeStack", &UEssentialComponent::execPurgeStack },
			{ "PurgeStars", &UEssentialComponent::execPurgeStars },
			{ "PurgeWater", &UEssentialComponent::execPurgeWater },
			{ "PurgeWood", &UEssentialComponent::execPurgeWood },
			{ "RemoveStack", &UEssentialComponent::execRemoveStack },
			{ "SpawnField", &UEssentialComponent::execSpawnField },
			{ "TagAdd", &UEssentialComponent::execTagAdd },
			{ "TagRemove", &UEssentialComponent::execTagRemove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEssentialComponent_AddStack_Statics
	{
		struct EssentialComponent_eventAddStack_Parms
		{
			FEssenceStack NewStack;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewStack;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_AddStack_Statics::NewProp_NewStack = { "NewStack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventAddStack_Parms, NewStack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
	void Z_Construct_UFunction_UEssentialComponent_AddStack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EssentialComponent_eventAddStack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEssentialComponent_AddStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EssentialComponent_eventAddStack_Parms), &Z_Construct_UFunction_UEssentialComponent_AddStack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_AddStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_AddStack_Statics::NewProp_NewStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_AddStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_AddStack_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* These are the basic functions of the internal physics of a magical object. We can add and\n\x09* remove charge, and when a charge reaches the end of its lifespan, it \"purges\" the stored\n\x09* energy to produce varied effects depending on the other charges present.\n\x09* \n\x09*/// Returns whether add/remove was successful\n" },
#endif
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These are the basic functions of the internal physics of a magical object. We can add and\nremove charge, and when a charge reaches the end of its lifespan, it \"purges\" the stored\nenergy to produce varied effects depending on the other charges present.\n\n       // Returns whether add/remove was successful" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_AddStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "AddStack", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_AddStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_AddStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_AddStack_Statics::EssentialComponent_eventAddStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_AddStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_AddStack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_AddStack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_AddStack_Statics::EssentialComponent_eventAddStack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_AddStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_AddStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics
	{
		struct EssentialComponent_eventCheckCascade_Parms
		{
			int32 ElemID;
			TMap<int32,FCascadeParams> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ElemID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::NewProp_ElemID = { "ElemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventCheckCascade_Parms, ElemID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCascadeParams, METADATA_PARAMS(0, nullptr) }; // 477738419
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventCheckCascade_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 477738419
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::NewProp_ElemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* A cascade is a special process that removes all stacks of a given element and performs a \n\x09* process with that energy. Currently this can only happen as part of specific purge effects.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A cascade is a special process that removes all stacks of a given element and performs a\nprocess with that energy. Currently this can only happen as part of specific purge effects." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "CheckCascade", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::EssentialComponent_eventCheckCascade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::EssentialComponent_eventCheckCascade_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_CheckCascade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_CheckCascade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_DestroyEphemeral_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_DestroyEphemeral_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Destructor function for when essential circumstances require destroying the actor\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destructor function for when essential circumstances require destroying the actor" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_DestroyEphemeral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "DestroyEphemeral", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_DestroyEphemeral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_DestroyEphemeral_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UEssentialComponent_DestroyEphemeral()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_DestroyEphemeral_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_DisplayAdd_Statics
	{
		struct EssentialComponent_eventDisplayAdd_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_DisplayAdd_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventDisplayAdd_Parms, Stack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_DisplayAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_DisplayAdd_Statics::NewProp_Stack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_DisplayAdd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_DisplayAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "DisplayAdd", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_DisplayAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_DisplayAdd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_DisplayAdd_Statics::EssentialComponent_eventDisplayAdd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_DisplayAdd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_DisplayAdd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_DisplayAdd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_DisplayAdd_Statics::EssentialComponent_eventDisplayAdd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_DisplayAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_DisplayAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_DisplayEssentia_Statics
	{
		struct EssentialComponent_eventDisplayEssentia_Parms
		{
			FEssenceStack DisplayStack;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayStack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_DisplayEssentia_Statics::NewProp_DisplayStack = { "DisplayStack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventDisplayEssentia_Parms, DisplayStack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_DisplayEssentia_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_DisplayEssentia_Statics::NewProp_DisplayStack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_DisplayEssentia_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* There are a few different ways we can broadcast information about the current charge state.\n\x09* I currently support widget \"tags\" attached to the main actor, a color-coded material, and\n\x09* printing to the editor screen.\n\x09* \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "There are a few different ways we can broadcast information about the current charge state.\n      * I currently support widget \"tags\" attached to the main actor, a color-coded material, and\n      * printing to the editor screen." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_DisplayEssentia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "DisplayEssentia", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_DisplayEssentia_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_DisplayEssentia_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_DisplayEssentia_Statics::EssentialComponent_eventDisplayEssentia_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_DisplayEssentia_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_DisplayEssentia_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_DisplayEssentia_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_DisplayEssentia_Statics::EssentialComponent_eventDisplayEssentia_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_DisplayEssentia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_DisplayEssentia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_DisplayRemove_Statics
	{
		struct EssentialComponent_eventDisplayRemove_Parms
		{
			int32 StackIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_DisplayRemove_Statics::NewProp_StackIndex = { "StackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventDisplayRemove_Parms, StackIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_DisplayRemove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_DisplayRemove_Statics::NewProp_StackIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_DisplayRemove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_DisplayRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "DisplayRemove", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_DisplayRemove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_DisplayRemove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_DisplayRemove_Statics::EssentialComponent_eventDisplayRemove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_DisplayRemove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_DisplayRemove_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_DisplayRemove_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_DisplayRemove_Statics::EssentialComponent_eventDisplayRemove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_DisplayRemove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_DisplayRemove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_EssentialTick_Statics
	{
		struct EssentialComponent_eventEssentialTick_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEssentialComponent_EssentialTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventEssentialTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_EssentialTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_EssentialTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_EssentialTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_EssentialTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "EssentialTick", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_EssentialTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_EssentialTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_EssentialTick_Statics::EssentialComponent_eventEssentialTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_EssentialTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_EssentialTick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_EssentialTick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_EssentialTick_Statics::EssentialComponent_eventEssentialTick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_EssentialTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_EssentialTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_FinishCascade_Statics
	{
		struct EssentialComponent_eventFinishCascade_Parms
		{
			FCascadeParams CascadeParams;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CascadeParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_FinishCascade_Statics::NewProp_CascadeParams = { "CascadeParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventFinishCascade_Parms, CascadeParams), Z_Construct_UScriptStruct_FCascadeParams, METADATA_PARAMS(0, nullptr) }; // 477738419
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_FinishCascade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_FinishCascade_Statics::NewProp_CascadeParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_FinishCascade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_FinishCascade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "FinishCascade", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_FinishCascade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_FinishCascade_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_FinishCascade_Statics::EssentialComponent_eventFinishCascade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_FinishCascade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_FinishCascade_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_FinishCascade_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_FinishCascade_Statics::EssentialComponent_eventFinishCascade_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_FinishCascade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_FinishCascade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics
	{
		struct EssentialComponent_eventGetBasicStack_Parms
		{
			int32 ElemID;
			bool bIsStable;
			FEssenceStack ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ElemID;
		static void NewProp_bIsStable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::NewProp_ElemID = { "ElemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventGetBasicStack_Parms, ElemID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::NewProp_bIsStable_SetBit(void* Obj)
	{
		((EssentialComponent_eventGetBasicStack_Parms*)Obj)->bIsStable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::NewProp_bIsStable = { "bIsStable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EssentialComponent_eventGetBasicStack_Parms), &Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::NewProp_bIsStable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventGetBasicStack_Parms, ReturnValue), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::NewProp_ElemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::NewProp_bIsStable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Utility function that gets a basic instance of an elemental charge\n\x09*/" },
#endif
		{ "CPP_Default_bIsStable", "false" },
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility function that gets a basic instance of an elemental charge" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "GetBasicStack", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::EssentialComponent_eventGetBasicStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::EssentialComponent_eventGetBasicStack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_GetBasicStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_GetBasicStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_InitializeDisplayComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_InitializeDisplayComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_InitializeDisplayComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "InitializeDisplayComponent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_InitializeDisplayComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_InitializeDisplayComponent_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UEssentialComponent_InitializeDisplayComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_InitializeDisplayComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_MaterialAdd_Statics
	{
		struct EssentialComponent_eventMaterialAdd_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_MaterialAdd_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventMaterialAdd_Parms, Stack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_MaterialAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_MaterialAdd_Statics::NewProp_Stack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_MaterialAdd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_MaterialAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "MaterialAdd", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_MaterialAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_MaterialAdd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_MaterialAdd_Statics::EssentialComponent_eventMaterialAdd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_MaterialAdd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_MaterialAdd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_MaterialAdd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_MaterialAdd_Statics::EssentialComponent_eventMaterialAdd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_MaterialAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_MaterialAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_MaterialRemove_Statics
	{
		struct EssentialComponent_eventMaterialRemove_Parms
		{
			int32 StackIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_MaterialRemove_Statics::NewProp_StackIndex = { "StackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventMaterialRemove_Parms, StackIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_MaterialRemove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_MaterialRemove_Statics::NewProp_StackIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_MaterialRemove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_MaterialRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "MaterialRemove", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_MaterialRemove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_MaterialRemove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_MaterialRemove_Statics::EssentialComponent_eventMaterialRemove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_MaterialRemove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_MaterialRemove_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_MaterialRemove_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_MaterialRemove_Statics::EssentialComponent_eventMaterialRemove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_MaterialRemove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_MaterialRemove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics
	{
		struct EssentialComponent_eventPurgeAir_Parms
		{
			FEssenceStack Stack;
			int32 Bookmark;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bookmark;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeAir_Parms, Stack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics::NewProp_Bookmark = { "Bookmark", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeAir_Parms, Bookmark), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeAir_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics::NewProp_Stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics::NewProp_Bookmark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Possible purge effects are granular enough that the code is very messy if we try to do\n\x09* everything in one function. Instead, the main purge function calls one of these based on input\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Possible purge effects are granular enough that the code is very messy if we try to do\n      * everything in one function. Instead, the main purge function calls one of these based on input" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "PurgeAir", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics::EssentialComponent_eventPurgeAir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics::EssentialComponent_eventPurgeAir_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_PurgeAir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_PurgeAir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics
	{
		struct EssentialComponent_eventPurgeEarth_Parms
		{
			FEssenceStack Stack;
			int32 Bookmark;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bookmark;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeEarth_Parms, Stack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics::NewProp_Bookmark = { "Bookmark", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeEarth_Parms, Bookmark), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeEarth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics::NewProp_Stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics::NewProp_Bookmark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "PurgeEarth", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics::EssentialComponent_eventPurgeEarth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics::EssentialComponent_eventPurgeEarth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_PurgeEarth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_PurgeEarth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics
	{
		struct EssentialComponent_eventPurgeFire_Parms
		{
			FEssenceStack Stack;
			int32 Bookmark;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bookmark;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeFire_Parms, Stack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics::NewProp_Bookmark = { "Bookmark", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeFire_Parms, Bookmark), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeFire_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics::NewProp_Stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics::NewProp_Bookmark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "PurgeFire", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics::EssentialComponent_eventPurgeFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics::EssentialComponent_eventPurgeFire_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_PurgeFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_PurgeFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics
	{
		struct EssentialComponent_eventPurgeLightning_Parms
		{
			FEssenceStack Stack;
			int32 Bookmark;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bookmark;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeLightning_Parms, Stack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics::NewProp_Bookmark = { "Bookmark", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeLightning_Parms, Bookmark), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeLightning_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics::NewProp_Stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics::NewProp_Bookmark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "PurgeLightning", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics::EssentialComponent_eventPurgeLightning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics::EssentialComponent_eventPurgeLightning_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_PurgeLightning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_PurgeLightning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics
	{
		struct EssentialComponent_eventPurgeMetal_Parms
		{
			FEssenceStack Stack;
			int32 Bookmark;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bookmark;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeMetal_Parms, Stack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics::NewProp_Bookmark = { "Bookmark", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeMetal_Parms, Bookmark), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeMetal_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics::NewProp_Stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics::NewProp_Bookmark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "PurgeMetal", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics::EssentialComponent_eventPurgeMetal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics::EssentialComponent_eventPurgeMetal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_PurgeMetal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_PurgeMetal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics
	{
		struct EssentialComponent_eventPurgeStack_Parms
		{
			FEssenceStack Stack;
			int32 StackIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeStack_Parms, Stack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics::NewProp_StackIndex = { "StackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeStack_Parms, StackIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeStack_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics::NewProp_Stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics::NewProp_StackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "PurgeStack", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics::EssentialComponent_eventPurgeStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics::EssentialComponent_eventPurgeStack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_PurgeStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_PurgeStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics
	{
		struct EssentialComponent_eventPurgeStars_Parms
		{
			FEssenceStack Stack;
			int32 Bookmark;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bookmark;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeStars_Parms, Stack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics::NewProp_Bookmark = { "Bookmark", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeStars_Parms, Bookmark), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeStars_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics::NewProp_Stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics::NewProp_Bookmark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "PurgeStars", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics::EssentialComponent_eventPurgeStars_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics::EssentialComponent_eventPurgeStars_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_PurgeStars()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_PurgeStars_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics
	{
		struct EssentialComponent_eventPurgeWater_Parms
		{
			FEssenceStack Stack;
			int32 Bookmark;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bookmark;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeWater_Parms, Stack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics::NewProp_Bookmark = { "Bookmark", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeWater_Parms, Bookmark), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeWater_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics::NewProp_Stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics::NewProp_Bookmark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "PurgeWater", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics::EssentialComponent_eventPurgeWater_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics::EssentialComponent_eventPurgeWater_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_PurgeWater()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_PurgeWater_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics
	{
		struct EssentialComponent_eventPurgeWood_Parms
		{
			FEssenceStack Stack;
			int32 Bookmark;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bookmark;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeWood_Parms, Stack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics::NewProp_Bookmark = { "Bookmark", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeWood_Parms, Bookmark), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventPurgeWood_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics::NewProp_Stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics::NewProp_Bookmark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "PurgeWood", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics::EssentialComponent_eventPurgeWood_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics::EssentialComponent_eventPurgeWood_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_PurgeWood()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_PurgeWood_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics
	{
		struct EssentialComponent_eventRemoveStack_Parms
		{
			FEssenceStack Stack;
			int32 StackIndex;
			bool bIsPurging;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackIndex;
		static void NewProp_bIsPurging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPurging;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventRemoveStack_Parms, Stack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::NewProp_StackIndex = { "StackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventRemoveStack_Parms, StackIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::NewProp_bIsPurging_SetBit(void* Obj)
	{
		((EssentialComponent_eventRemoveStack_Parms*)Obj)->bIsPurging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::NewProp_bIsPurging = { "bIsPurging", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EssentialComponent_eventRemoveStack_Parms), &Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::NewProp_bIsPurging_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EssentialComponent_eventRemoveStack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EssentialComponent_eventRemoveStack_Parms), &Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::NewProp_Stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::NewProp_StackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::NewProp_bIsPurging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_bIsPurging", "false" },
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "RemoveStack", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::EssentialComponent_eventRemoveStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::EssentialComponent_eventRemoveStack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_RemoveStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_RemoveStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_SpawnField_Statics
	{
		struct EssentialComponent_eventSpawnField_Parms
		{
			FEssenceStack Stack;
			float FieldLifespan;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldLifespan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_SpawnField_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventSpawnField_Parms, Stack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEssentialComponent_SpawnField_Statics::NewProp_FieldLifespan = { "FieldLifespan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventSpawnField_Parms, FieldLifespan), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_SpawnField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_SpawnField_Statics::NewProp_Stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_SpawnField_Statics::NewProp_FieldLifespan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_SpawnField_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Certain elemental interactions spawn AOE regions charged with an element. The actual logic\n\x09* takes place in those actors, but this is what we need to create them.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Certain elemental interactions spawn AOE regions charged with an element. The actual logic\n      * takes place in those actors, but this is what we need to create them." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_SpawnField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "SpawnField", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_SpawnField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_SpawnField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_SpawnField_Statics::EssentialComponent_eventSpawnField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_SpawnField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_SpawnField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_SpawnField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_SpawnField_Statics::EssentialComponent_eventSpawnField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_SpawnField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_SpawnField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_TagAdd_Statics
	{
		struct EssentialComponent_eventTagAdd_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEssentialComponent_TagAdd_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventTagAdd_Parms, Stack), Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_TagAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_TagAdd_Statics::NewProp_Stack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_TagAdd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_TagAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "TagAdd", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_TagAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_TagAdd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_TagAdd_Statics::EssentialComponent_eventTagAdd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_TagAdd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_TagAdd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_TagAdd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_TagAdd_Statics::EssentialComponent_eventTagAdd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_TagAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_TagAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEssentialComponent_TagRemove_Statics
	{
		struct EssentialComponent_eventTagRemove_Parms
		{
			int32 StackIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEssentialComponent_TagRemove_Statics::NewProp_StackIndex = { "StackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialComponent_eventTagRemove_Parms, StackIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEssentialComponent_TagRemove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEssentialComponent_TagRemove_Statics::NewProp_StackIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEssentialComponent_TagRemove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEssentialComponent_TagRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEssentialComponent, nullptr, "TagRemove", nullptr, nullptr, Z_Construct_UFunction_UEssentialComponent_TagRemove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_TagRemove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEssentialComponent_TagRemove_Statics::EssentialComponent_eventTagRemove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_TagRemove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEssentialComponent_TagRemove_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEssentialComponent_TagRemove_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEssentialComponent_TagRemove_Statics::EssentialComponent_eventTagRemove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEssentialComponent_TagRemove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEssentialComponent_TagRemove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEssentialComponent);
	UClass* Z_Construct_UClass_UEssentialComponent_NoRegister()
	{
		return UEssentialComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEssentialComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EssentialCharge_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EssentialCharge_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EssentialCharge;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChargeCounts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChargeCounts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChargeCounts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCharge_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCharge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsForceCarrier_MetaData[];
#endif
		static void NewProp_bIsForceCarrier_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsForceCarrier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsForceReceiver_MetaData[];
#endif
		static void NewProp_bIsForceReceiver_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsForceReceiver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEphemeral_MetaData[];
#endif
		static void NewProp_bIsEphemeral_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEphemeral;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShielded_MetaData[];
#endif
		static void NewProp_bIsShielded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShielded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FieldClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayInitTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayInitTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDisplayWidget_MetaData[];
#endif
		static void NewProp_bHasDisplayWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDisplayWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EssenceDisplayWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EssenceDisplayWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDisplayMaterial_MetaData[];
#endif
		static void NewProp_bHasDisplayMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDisplayMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DisplayMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEssentialComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Essentia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEssentialComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEssentialComponent_AddStack, "AddStack" }, // 266752441
		{ &Z_Construct_UFunction_UEssentialComponent_CheckCascade, "CheckCascade" }, // 413540118
		{ &Z_Construct_UFunction_UEssentialComponent_DestroyEphemeral, "DestroyEphemeral" }, // 2202684848
		{ &Z_Construct_UFunction_UEssentialComponent_DisplayAdd, "DisplayAdd" }, // 1662591663
		{ &Z_Construct_UFunction_UEssentialComponent_DisplayEssentia, "DisplayEssentia" }, // 3870514279
		{ &Z_Construct_UFunction_UEssentialComponent_DisplayRemove, "DisplayRemove" }, // 2345153669
		{ &Z_Construct_UFunction_UEssentialComponent_EssentialTick, "EssentialTick" }, // 3753089425
		{ &Z_Construct_UFunction_UEssentialComponent_FinishCascade, "FinishCascade" }, // 773035481
		{ &Z_Construct_UFunction_UEssentialComponent_GetBasicStack, "GetBasicStack" }, // 2570337647
		{ &Z_Construct_UFunction_UEssentialComponent_InitializeDisplayComponent, "InitializeDisplayComponent" }, // 1804942007
		{ &Z_Construct_UFunction_UEssentialComponent_MaterialAdd, "MaterialAdd" }, // 2028630655
		{ &Z_Construct_UFunction_UEssentialComponent_MaterialRemove, "MaterialRemove" }, // 565984376
		{ &Z_Construct_UFunction_UEssentialComponent_PurgeAir, "PurgeAir" }, // 2489361175
		{ &Z_Construct_UFunction_UEssentialComponent_PurgeEarth, "PurgeEarth" }, // 2144811046
		{ &Z_Construct_UFunction_UEssentialComponent_PurgeFire, "PurgeFire" }, // 2719276920
		{ &Z_Construct_UFunction_UEssentialComponent_PurgeLightning, "PurgeLightning" }, // 648056701
		{ &Z_Construct_UFunction_UEssentialComponent_PurgeMetal, "PurgeMetal" }, // 2836359476
		{ &Z_Construct_UFunction_UEssentialComponent_PurgeStack, "PurgeStack" }, // 3622165484
		{ &Z_Construct_UFunction_UEssentialComponent_PurgeStars, "PurgeStars" }, // 4273601166
		{ &Z_Construct_UFunction_UEssentialComponent_PurgeWater, "PurgeWater" }, // 3912437627
		{ &Z_Construct_UFunction_UEssentialComponent_PurgeWood, "PurgeWood" }, // 722159122
		{ &Z_Construct_UFunction_UEssentialComponent_RemoveStack, "RemoveStack" }, // 943032199
		{ &Z_Construct_UFunction_UEssentialComponent_SpawnField, "SpawnField" }, // 578850885
		{ &Z_Construct_UFunction_UEssentialComponent_TagAdd, "TagAdd" }, // 557886155
		{ &Z_Construct_UFunction_UEssentialComponent_TagRemove, "TagRemove" }, // 2577559860
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssentialComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EssentialComponent.h" },
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEssentialComponent_Statics::NewProp_EssentialCharge_Inner = { "EssentialCharge", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEssenceStack, METADATA_PARAMS(0, nullptr) }; // 3386720530
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssentialComponent_Statics::NewProp_EssentialCharge_MetaData[] = {
		{ "Category", "Physics|Charge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* These are the properties essential to the magical \"physics\" of this component. We store \n\x09* elemental charge, how an object can interact with other essential objects and forces,\n\x09* and whether this component is shielded from direct meddling, e.g. by the player.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These are the properties essential to the magical \"physics\" of this component. We store\nelemental charge, how an object can interact with other essential objects and forces,\nand whether this component is shielded from direct meddling, e.g. by the player." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEssentialComponent_Statics::NewProp_EssentialCharge = { "EssentialCharge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEssentialComponent, EssentialCharge), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::NewProp_EssentialCharge_MetaData), Z_Construct_UClass_UEssentialComponent_Statics::NewProp_EssentialCharge_MetaData) }; // 3386720530
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEssentialComponent_Statics::NewProp_ChargeCounts_Inner = { "ChargeCounts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssentialComponent_Statics::NewProp_ChargeCounts_MetaData[] = {
		{ "Category", "Physics|Charge" },
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEssentialComponent_Statics::NewProp_ChargeCounts = { "ChargeCounts", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEssentialComponent, ChargeCounts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::NewProp_ChargeCounts_MetaData), Z_Construct_UClass_UEssentialComponent_Statics::NewProp_ChargeCounts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssentialComponent_Statics::NewProp_MaxCharge_MetaData[] = {
		{ "Category", "Physics|Charge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// By default, charge is uncapped.\n" },
#endif
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "By default, charge is uncapped." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEssentialComponent_Statics::NewProp_MaxCharge = { "MaxCharge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEssentialComponent, MaxCharge), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::NewProp_MaxCharge_MetaData), Z_Construct_UClass_UEssentialComponent_Statics::NewProp_MaxCharge_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsForceCarrier_MetaData[] = {
		{ "Category", "Physics|Interaction" },
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	void Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsForceCarrier_SetBit(void* Obj)
	{
		((UEssentialComponent*)Obj)->bIsForceCarrier = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsForceCarrier = { "bIsForceCarrier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEssentialComponent), &Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsForceCarrier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsForceCarrier_MetaData), Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsForceCarrier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsForceReceiver_MetaData[] = {
		{ "Category", "Physics|Interaction" },
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	void Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsForceReceiver_SetBit(void* Obj)
	{
		((UEssentialComponent*)Obj)->bIsForceReceiver = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsForceReceiver = { "bIsForceReceiver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEssentialComponent), &Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsForceReceiver_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsForceReceiver_MetaData), Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsForceReceiver_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsEphemeral_MetaData[] = {
		{ "Category", "Physics|Interaction" },
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	void Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsEphemeral_SetBit(void* Obj)
	{
		((UEssentialComponent*)Obj)->bIsEphemeral = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsEphemeral = { "bIsEphemeral", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEssentialComponent), &Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsEphemeral_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsEphemeral_MetaData), Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsEphemeral_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsShielded_MetaData[] = {
		{ "Category", "Physics|Interaction" },
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	void Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsShielded_SetBit(void* Obj)
	{
		((UEssentialComponent*)Obj)->bIsShielded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsShielded = { "bIsShielded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEssentialComponent), &Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsShielded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsShielded_MetaData), Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsShielded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssentialComponent_Statics::NewProp_FieldClass_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEssentialComponent_Statics::NewProp_FieldClass = { "FieldClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEssentialComponent, FieldClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEssentialField_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::NewProp_FieldClass_MetaData), Z_Construct_UClass_UEssentialComponent_Statics::NewProp_FieldClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssentialComponent_Statics::NewProp_DisplayInitTimerHandle_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used so the display is only initialized once the components have finished BeginPlay()\n" },
#endif
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used so the display is only initialized once the components have finished BeginPlay()" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEssentialComponent_Statics::NewProp_DisplayInitTimerHandle = { "DisplayInitTimerHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEssentialComponent, DisplayInitTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::NewProp_DisplayInitTimerHandle_MetaData), Z_Construct_UClass_UEssentialComponent_Statics::NewProp_DisplayInitTimerHandle_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bHasDisplayWidget_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	void Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bHasDisplayWidget_SetBit(void* Obj)
	{
		((UEssentialComponent*)Obj)->bHasDisplayWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bHasDisplayWidget = { "bHasDisplayWidget", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEssentialComponent), &Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bHasDisplayWidget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bHasDisplayWidget_MetaData), Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bHasDisplayWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssentialComponent_Statics::NewProp_EssenceDisplayWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEssentialComponent_Statics::NewProp_EssenceDisplayWidget = { "EssenceDisplayWidget", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEssentialComponent, EssenceDisplayWidget), Z_Construct_UClass_UEssenceTagBarComponent_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::NewProp_EssenceDisplayWidget_MetaData), Z_Construct_UClass_UEssentialComponent_Statics::NewProp_EssenceDisplayWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bHasDisplayMaterial_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	void Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bHasDisplayMaterial_SetBit(void* Obj)
	{
		((UEssentialComponent*)Obj)->bHasDisplayMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bHasDisplayMaterial = { "bHasDisplayMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEssentialComponent), &Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bHasDisplayMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bHasDisplayMaterial_MetaData), Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bHasDisplayMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEssentialComponent_Statics::NewProp_DisplayMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/EssentialComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEssentialComponent_Statics::NewProp_DisplayMaterial = { "DisplayMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEssentialComponent, DisplayMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::NewProp_DisplayMaterial_MetaData), Z_Construct_UClass_UEssentialComponent_Statics::NewProp_DisplayMaterial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEssentialComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssentialComponent_Statics::NewProp_EssentialCharge_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssentialComponent_Statics::NewProp_EssentialCharge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssentialComponent_Statics::NewProp_ChargeCounts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssentialComponent_Statics::NewProp_ChargeCounts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssentialComponent_Statics::NewProp_MaxCharge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsForceCarrier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsForceReceiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsEphemeral,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bIsShielded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssentialComponent_Statics::NewProp_FieldClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssentialComponent_Statics::NewProp_DisplayInitTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bHasDisplayWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssentialComponent_Statics::NewProp_EssenceDisplayWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssentialComponent_Statics::NewProp_bHasDisplayMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEssentialComponent_Statics::NewProp_DisplayMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEssentialComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEssentialComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEssentialComponent_Statics::ClassParams = {
		&UEssentialComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEssentialComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEssentialComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEssentialComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEssentialComponent()
	{
		if (!Z_Registration_Info_UClass_UEssentialComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEssentialComponent.OuterSingleton, Z_Construct_UClass_UEssentialComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEssentialComponent.OuterSingleton;
	}
	template<> ESSENTIA_API UClass* StaticClass<UEssentialComponent>()
	{
		return UEssentialComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEssentialComponent);
	UEssentialComponent::~UEssentialComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEssentialComponent, UEssentialComponent::StaticClass, TEXT("UEssentialComponent"), &Z_Registration_Info_UClass_UEssentialComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEssentialComponent), 78323237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialComponent_h_3699565724(TEXT("/Script/Essentia"),
		Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
