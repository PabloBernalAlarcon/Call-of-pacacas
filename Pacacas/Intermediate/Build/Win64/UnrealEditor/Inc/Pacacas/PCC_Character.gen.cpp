// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacacas/Public/PCC_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCC_Character() {}
// Cross Module References
	PACACAS_API UClass* Z_Construct_UClass_APCC_Character_NoRegister();
	PACACAS_API UClass* Z_Construct_UClass_APCC_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Pacacas();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void APCC_Character::StaticRegisterNativesAPCC_Character()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCC_Character);
	UClass* Z_Construct_UClass_APCC_Character_NoRegister()
	{
		return APCC_Character::StaticClass();
	}
	struct Z_Construct_UClass_APCC_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FPSCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FPSCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TPSCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TPSCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_b_useFirstPersonView_MetaData[];
#endif
		static void NewProp_b_useFirstPersonView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_b_useFirstPersonView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_b_isYLookInverted_MetaData[];
#endif
		static void NewProp_b_isYLookInverted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_b_isYLookInverted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FPSCameraSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FPSCameraSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_b_isSprinting_MetaData[];
#endif
		static void NewProp_b_isSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_b_isSprinting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APCC_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacacas,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PCC_Character.h" },
		{ "ModuleRelativePath", "Public/PCC_Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Character_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PCC_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCC_Character_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APCC_Character, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APCC_Character_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Character_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Character_Statics::NewProp_FPSCamera_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PCC_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCC_Character_Statics::NewProp_FPSCamera = { "FPSCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APCC_Character, FPSCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APCC_Character_Statics::NewProp_FPSCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Character_Statics::NewProp_FPSCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Character_Statics::NewProp_TPSCamera_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PCC_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCC_Character_Statics::NewProp_TPSCamera = { "TPSCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APCC_Character, TPSCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APCC_Character_Statics::NewProp_TPSCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Character_Statics::NewProp_TPSCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Character_Statics::NewProp_b_useFirstPersonView_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Public/PCC_Character.h" },
	};
#endif
	void Z_Construct_UClass_APCC_Character_Statics::NewProp_b_useFirstPersonView_SetBit(void* Obj)
	{
		((APCC_Character*)Obj)->b_useFirstPersonView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APCC_Character_Statics::NewProp_b_useFirstPersonView = { "b_useFirstPersonView", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APCC_Character), &Z_Construct_UClass_APCC_Character_Statics::NewProp_b_useFirstPersonView_SetBit, METADATA_PARAMS(Z_Construct_UClass_APCC_Character_Statics::NewProp_b_useFirstPersonView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Character_Statics::NewProp_b_useFirstPersonView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Character_Statics::NewProp_b_isYLookInverted_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Public/PCC_Character.h" },
	};
#endif
	void Z_Construct_UClass_APCC_Character_Statics::NewProp_b_isYLookInverted_SetBit(void* Obj)
	{
		((APCC_Character*)Obj)->b_isYLookInverted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APCC_Character_Statics::NewProp_b_isYLookInverted = { "b_isYLookInverted", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APCC_Character), &Z_Construct_UClass_APCC_Character_Statics::NewProp_b_isYLookInverted_SetBit, METADATA_PARAMS(Z_Construct_UClass_APCC_Character_Statics::NewProp_b_isYLookInverted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Character_Statics::NewProp_b_isYLookInverted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Character_Statics::NewProp_FPSCameraSocketName_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Public/PCC_Character.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APCC_Character_Statics::NewProp_FPSCameraSocketName = { "FPSCameraSocketName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APCC_Character, FPSCameraSocketName), METADATA_PARAMS(Z_Construct_UClass_APCC_Character_Statics::NewProp_FPSCameraSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Character_Statics::NewProp_FPSCameraSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCC_Character_Statics::NewProp_b_isSprinting_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PCC_Character.h" },
	};
#endif
	void Z_Construct_UClass_APCC_Character_Statics::NewProp_b_isSprinting_SetBit(void* Obj)
	{
		((APCC_Character*)Obj)->b_isSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APCC_Character_Statics::NewProp_b_isSprinting = { "b_isSprinting", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APCC_Character), &Z_Construct_UClass_APCC_Character_Statics::NewProp_b_isSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_APCC_Character_Statics::NewProp_b_isSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Character_Statics::NewProp_b_isSprinting_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APCC_Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCC_Character_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCC_Character_Statics::NewProp_FPSCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCC_Character_Statics::NewProp_TPSCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCC_Character_Statics::NewProp_b_useFirstPersonView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCC_Character_Statics::NewProp_b_isYLookInverted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCC_Character_Statics::NewProp_FPSCameraSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCC_Character_Statics::NewProp_b_isSprinting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APCC_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCC_Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APCC_Character_Statics::ClassParams = {
		&APCC_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APCC_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Character_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APCC_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APCC_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APCC_Character()
	{
		if (!Z_Registration_Info_UClass_APCC_Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCC_Character.OuterSingleton, Z_Construct_UClass_APCC_Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APCC_Character.OuterSingleton;
	}
	template<> PACACAS_API UClass* StaticClass<APCC_Character>()
	{
		return APCC_Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APCC_Character);
	struct Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_Public_PCC_Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_Public_PCC_Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APCC_Character, APCC_Character::StaticClass, TEXT("APCC_Character"), &Z_Registration_Info_UClass_APCC_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCC_Character), 720400788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_Public_PCC_Character_h_3658218805(TEXT("/Script/Pacacas"),
		Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_Public_PCC_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pacacas_Source_Pacacas_Public_PCC_Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
