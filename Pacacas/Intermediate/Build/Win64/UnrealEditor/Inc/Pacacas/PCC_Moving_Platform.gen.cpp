// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacacas/Public/PCC_Moving_Platform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCC_Moving_Platform() {}
// Cross Module References
	PACACAS_API UClass* Z_Construct_UClass_APCC_Moving_Platform_NoRegister();
	PACACAS_API UClass* Z_Construct_UClass_APCC_Moving_Platform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pacacas();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APCC_Moving_Platform::execMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move();
		P_NATIVE_END;
	}
	void APCC_Moving_Platform::StaticRegisterNativesAPCC_Moving_Platform()
	{
		UClass* Class = APCC_Moving_Platform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Move", &APCC_Moving_Platform::execMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APCC_Moving_Platform_Move_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APCC_Moving_Platform_Move_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PCC_Moving_Platform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APCC_Moving_Platform_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APCC_Moving_Platform, nullptr, "Move", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APCC_Moving_Platform_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APCC_Moving_Platform_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APCC_Moving_Platform_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APCC_Moving_Platform_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCC_Moving_Platform);
	UClass* Z_Construct_UClass_APCC_Moving_Platform_NoRegister()
	{
		return APCC_Moving_Platform::StaticClass();
	}
	struct Z_Construct_UClass_APCC_Moving_Platform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformRootComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformRootComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGoingUp_MetaData[];
#endif
		static void NewProp_bIsGoingUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGoingUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APCC_Moving_Platform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacacas,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APCC_Moving_Platform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APCC_Moving_Platform_Move, "Move" }, // 4177606600
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Moving_Platform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCC_Moving_Platform.h" },
		{ "ModuleRelativePath", "Public/PCC_Moving_Platform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_PlatformRootComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PCC_Moving_Platform.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_PlatformRootComponent = { "PlatformRootComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APCC_Moving_Platform, PlatformRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_PlatformRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_PlatformRootComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_PlatformMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PCC_Moving_Platform.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_PlatformMeshComponent = { "PlatformMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APCC_Moving_Platform, PlatformMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_PlatformMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_PlatformMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_bIsGoingUp_MetaData[] = {
		{ "Category", "Platform" },
		{ "Comment", "//variables\n" },
		{ "ModuleRelativePath", "Public/PCC_Moving_Platform.h" },
		{ "ToolTip", "variables" },
	};
#endif
	void Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_bIsGoingUp_SetBit(void* Obj)
	{
		((APCC_Moving_Platform*)Obj)->bIsGoingUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_bIsGoingUp = { "bIsGoingUp", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APCC_Moving_Platform), &Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_bIsGoingUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_bIsGoingUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_bIsGoingUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/PCC_Moving_Platform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APCC_Moving_Platform, speed), METADATA_PARAMS(Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_minHeight_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/PCC_Moving_Platform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_minHeight = { "minHeight", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APCC_Moving_Platform, minHeight), METADATA_PARAMS(Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_minHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_minHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_maxHeight_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/PCC_Moving_Platform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_maxHeight = { "maxHeight", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APCC_Moving_Platform, maxHeight), METADATA_PARAMS(Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_maxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_maxHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APCC_Moving_Platform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_PlatformRootComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_PlatformMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_bIsGoingUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_minHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCC_Moving_Platform_Statics::NewProp_maxHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APCC_Moving_Platform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCC_Moving_Platform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APCC_Moving_Platform_Statics::ClassParams = {
		&APCC_Moving_Platform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APCC_Moving_Platform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Moving_Platform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APCC_Moving_Platform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Moving_Platform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APCC_Moving_Platform()
	{
		if (!Z_Registration_Info_UClass_APCC_Moving_Platform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCC_Moving_Platform.OuterSingleton, Z_Construct_UClass_APCC_Moving_Platform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APCC_Moving_Platform.OuterSingleton;
	}
	template<> PACACAS_API UClass* StaticClass<APCC_Moving_Platform>()
	{
		return APCC_Moving_Platform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APCC_Moving_Platform);
	struct Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_Public_PCC_Moving_Platform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_Public_PCC_Moving_Platform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APCC_Moving_Platform, APCC_Moving_Platform::StaticClass, TEXT("APCC_Moving_Platform"), &Z_Registration_Info_UClass_APCC_Moving_Platform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCC_Moving_Platform), 4263558213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_Public_PCC_Moving_Platform_h_791498202(TEXT("/Script/Pacacas"),
		Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_Public_PCC_Moving_Platform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_Public_PCC_Moving_Platform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
