// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Essentia/Public/EssentialParticle_Base.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEssentialParticle_Base() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ESSENTIA_API UClass* Z_Construct_UClass_AEssentialActor_Base();
	ESSENTIA_API UClass* Z_Construct_UClass_AEssentialParticle_Base();
	ESSENTIA_API UClass* Z_Construct_UClass_AEssentialParticle_Base_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Essentia();
// End Cross Module References
	DEFINE_FUNCTION(AEssentialParticle_Base::execOnComponentHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void AEssentialParticle_Base::StaticRegisterNativesAEssentialParticle_Base()
	{
		UClass* Class = AEssentialParticle_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnComponentHit", &AEssentialParticle_Base::execOnComponentHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics
	{
		struct EssentialParticle_Base_eventOnComponentHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialParticle_Base_eventOnComponentHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_HitComp_MetaData), Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_HitComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialParticle_Base_eventOnComponentHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialParticle_Base_eventOnComponentHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialParticle_Base_eventOnComponentHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EssentialParticle_Base_eventOnComponentHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_HitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EssentialParticle_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEssentialParticle_Base, nullptr, "OnComponentHit", nullptr, nullptr, Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::EssentialParticle_Base_eventOnComponentHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::EssentialParticle_Base_eventOnComponentHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEssentialParticle_Base);
	UClass* Z_Construct_UClass_AEssentialParticle_Base_NoRegister()
	{
		return AEssentialParticle_Base::StaticClass();
	}
	struct Z_Construct_UClass_AEssentialParticle_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleBody_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParticleBody;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDisplayMaterial_MetaData[];
#endif
		static void NewProp_bHasDisplayMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDisplayMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EssentiaDisplayMaterialBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EssentiaDisplayMaterialBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EssentiaDisplayMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EssentiaDisplayMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEssentialParticle_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEssentialActor_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Essentia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialParticle_Base_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AEssentialParticle_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEssentialParticle_Base_OnComponentHit, "OnComponentHit" }, // 266366268
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialParticle_Base_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEssentialParticle_Base_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EssentialParticle_Base.h" },
		{ "ModuleRelativePath", "Public/EssentialParticle_Base.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_ParticleBody_MetaData[] = {
		{ "Category", "Physicals" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EssentialParticle_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_ParticleBody = { "ParticleBody", nullptr, (EPropertyFlags)0x001400000009000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEssentialParticle_Base, ParticleBody), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_ParticleBody_MetaData), Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_ParticleBody_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_bHasDisplayMaterial_MetaData[] = {
		{ "Category", "Essentia|UI" },
		{ "ModuleRelativePath", "Public/EssentialParticle_Base.h" },
	};
#endif
	void Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_bHasDisplayMaterial_SetBit(void* Obj)
	{
		((AEssentialParticle_Base*)Obj)->bHasDisplayMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_bHasDisplayMaterial = { "bHasDisplayMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEssentialParticle_Base), &Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_bHasDisplayMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_bHasDisplayMaterial_MetaData), Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_bHasDisplayMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_EssentiaDisplayMaterialBase_MetaData[] = {
		{ "Category", "Essentia|UI" },
		{ "ModuleRelativePath", "Public/EssentialParticle_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_EssentiaDisplayMaterialBase = { "EssentiaDisplayMaterialBase", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEssentialParticle_Base, EssentiaDisplayMaterialBase), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_EssentiaDisplayMaterialBase_MetaData), Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_EssentiaDisplayMaterialBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_EssentiaDisplayMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/EssentialParticle_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_EssentiaDisplayMaterial = { "EssentiaDisplayMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEssentialParticle_Base, EssentiaDisplayMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_EssentiaDisplayMaterial_MetaData), Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_EssentiaDisplayMaterial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEssentialParticle_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_ParticleBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_bHasDisplayMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_EssentiaDisplayMaterialBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEssentialParticle_Base_Statics::NewProp_EssentiaDisplayMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEssentialParticle_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEssentialParticle_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEssentialParticle_Base_Statics::ClassParams = {
		&AEssentialParticle_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEssentialParticle_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialParticle_Base_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialParticle_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_AEssentialParticle_Base_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEssentialParticle_Base_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEssentialParticle_Base()
	{
		if (!Z_Registration_Info_UClass_AEssentialParticle_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEssentialParticle_Base.OuterSingleton, Z_Construct_UClass_AEssentialParticle_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEssentialParticle_Base.OuterSingleton;
	}
	template<> ESSENTIA_API UClass* StaticClass<AEssentialParticle_Base>()
	{
		return AEssentialParticle_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEssentialParticle_Base);
	AEssentialParticle_Base::~AEssentialParticle_Base() {}
	struct Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialParticle_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialParticle_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEssentialParticle_Base, AEssentialParticle_Base::StaticClass, TEXT("AEssentialParticle_Base"), &Z_Registration_Info_UClass_AEssentialParticle_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEssentialParticle_Base), 3995034418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialParticle_Base_h_4149342203(TEXT("/Script/Essentia"),
		Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialParticle_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_silen_Documents_Unreal_Projects_Laboratory_Plugins_Essentia_Source_Essentia_Public_EssentialParticle_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
