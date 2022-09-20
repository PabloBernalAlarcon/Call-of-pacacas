// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacacas/PacacasGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacacasGameModeBase() {}
// Cross Module References
	PACACAS_API UClass* Z_Construct_UClass_APacacasGameModeBase_NoRegister();
	PACACAS_API UClass* Z_Construct_UClass_APacacasGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Pacacas();
// End Cross Module References
	void APacacasGameModeBase::StaticRegisterNativesAPacacasGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APacacasGameModeBase);
	UClass* Z_Construct_UClass_APacacasGameModeBase_NoRegister()
	{
		return APacacasGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APacacasGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacacasGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacacas,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacacasGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PacacasGameModeBase.h" },
		{ "ModuleRelativePath", "PacacasGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacacasGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacacasGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APacacasGameModeBase_Statics::ClassParams = {
		&APacacasGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APacacasGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacacasGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacacasGameModeBase()
	{
		if (!Z_Registration_Info_UClass_APacacasGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APacacasGameModeBase.OuterSingleton, Z_Construct_UClass_APacacasGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APacacasGameModeBase.OuterSingleton;
	}
	template<> PACACAS_API UClass* StaticClass<APacacasGameModeBase>()
	{
		return APacacasGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacacasGameModeBase);
	struct Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_PacacasGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_PacacasGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APacacasGameModeBase, APacacasGameModeBase::StaticClass, TEXT("APacacasGameModeBase"), &Z_Registration_Info_UClass_APacacasGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APacacasGameModeBase), 2209368005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_PacacasGameModeBase_h_1267479685(TEXT("/Script/Pacacas"),
		Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_PacacasGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_PacacasGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
