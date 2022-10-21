// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacacas_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Pacacas;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Pacacas()
	{
		if (!Z_Registration_Info_UPackage__Script_Pacacas.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Pacacas",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFB3E4FA8,
				0x730DEA5E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Pacacas.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Pacacas.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Pacacas(Z_Construct_UPackage__Script_Pacacas, TEXT("/Script/Pacacas"), Z_Registration_Info_UPackage__Script_Pacacas, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFB3E4FA8, 0x730DEA5E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
