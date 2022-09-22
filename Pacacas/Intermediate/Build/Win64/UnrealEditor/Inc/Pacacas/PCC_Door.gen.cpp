// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacacas/Public/PCC_Door.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCC_Door() {}
// Cross Module References
	PACACAS_API UClass* Z_Construct_UClass_APCC_Door_NoRegister();
	PACACAS_API UClass* Z_Construct_UClass_APCC_Door();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pacacas();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APCC_Door::StaticRegisterNativesAPCC_Door()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCC_Door);
	UClass* Z_Construct_UClass_APCC_Door_NoRegister()
	{
		return APCC_Door::StaticClass();
	}
	struct Z_Construct_UClass_APCC_Door_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorRootComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorRootComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorFrameComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorFrameComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OpenAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APCC_Door_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacacas,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Door_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCC_Door.h" },
		{ "ModuleRelativePath", "Public/PCC_Door.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Door_Statics::NewProp_DoorRootComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PCC_Door.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCC_Door_Statics::NewProp_DoorRootComponent = { "DoorRootComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APCC_Door, DoorRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APCC_Door_Statics::NewProp_DoorRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Door_Statics::NewProp_DoorRootComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Door_Statics::NewProp_DoorFrameComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PCC_Door.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCC_Door_Statics::NewProp_DoorFrameComponent = { "DoorFrameComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APCC_Door, DoorFrameComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APCC_Door_Statics::NewProp_DoorFrameComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Door_Statics::NewProp_DoorFrameComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Door_Statics::NewProp_DoorComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PCC_Door.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCC_Door_Statics::NewProp_DoorComponent = { "DoorComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APCC_Door, DoorComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APCC_Door_Statics::NewProp_DoorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Door_Statics::NewProp_DoorComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Door_Statics::NewProp_OpenAngle_MetaData[] = {
		{ "Category", "My door" },
		{ "ModuleRelativePath", "Public/PCC_Door.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APCC_Door_Statics::NewProp_OpenAngle = { "OpenAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APCC_Door, OpenAngle), METADATA_PARAMS(Z_Construct_UClass_APCC_Door_Statics::NewProp_OpenAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Door_Statics::NewProp_OpenAngle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APCC_Door_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCC_Door_Statics::NewProp_DoorRootComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCC_Door_Statics::NewProp_DoorFrameComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCC_Door_Statics::NewProp_DoorComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCC_Door_Statics::NewProp_OpenAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APCC_Door_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCC_Door>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APCC_Door_Statics::ClassParams = {
		&APCC_Door::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APCC_Door_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Door_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APCC_Door_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Door_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APCC_Door()
	{
		if (!Z_Registration_Info_UClass_APCC_Door.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCC_Door.OuterSingleton, Z_Construct_UClass_APCC_Door_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APCC_Door.OuterSingleton;
	}
	template<> PACACAS_API UClass* StaticClass<APCC_Door>()
	{
		return APCC_Door::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APCC_Door);
	struct Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_Public_PCC_Door_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_Public_PCC_Door_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APCC_Door, APCC_Door::StaticClass, TEXT("APCC_Door"), &Z_Registration_Info_UClass_APCC_Door, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCC_Door), 2757119110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_Public_PCC_Door_h_2824914252(TEXT("/Script/Pacacas"),
		Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_Public_PCC_Door_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_Public_PCC_Door_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
