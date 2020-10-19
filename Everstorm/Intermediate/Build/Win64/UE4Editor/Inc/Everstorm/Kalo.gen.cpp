// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Everstorm/Kalo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKalo() {}
// Cross Module References
	EVERSTORM_API UClass* Z_Construct_UClass_AKalo_NoRegister();
	EVERSTORM_API UClass* Z_Construct_UClass_AKalo();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Everstorm();
// End Cross Module References
	void AKalo::StaticRegisterNativesAKalo()
	{
	}
	UClass* Z_Construct_UClass_AKalo_NoRegister()
	{
		return AKalo::StaticClass();
	}
	struct Z_Construct_UClass_AKalo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpAtRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpAtRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_primaryCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_primaryCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKalo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Everstorm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKalo_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Kalo.h" },
		{ "ModuleRelativePath", "Kalo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKalo_Statics::NewProp_BaseLookUpAtRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Kalo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKalo_Statics::NewProp_BaseLookUpAtRate = { "BaseLookUpAtRate", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKalo, BaseLookUpAtRate), METADATA_PARAMS(Z_Construct_UClass_AKalo_Statics::NewProp_BaseLookUpAtRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKalo_Statics::NewProp_BaseLookUpAtRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKalo_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Kalo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKalo_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKalo, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AKalo_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKalo_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKalo_Statics::NewProp_primaryCooldown_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Kalo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKalo_Statics::NewProp_primaryCooldown = { "primaryCooldown", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKalo, primaryCooldown), METADATA_PARAMS(Z_Construct_UClass_AKalo_Statics::NewProp_primaryCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKalo_Statics::NewProp_primaryCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKalo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKalo_Statics::NewProp_BaseLookUpAtRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKalo_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKalo_Statics::NewProp_primaryCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKalo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKalo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKalo_Statics::ClassParams = {
		&AKalo::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AKalo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AKalo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKalo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKalo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKalo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKalo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKalo, 1356832744);
	template<> EVERSTORM_API UClass* StaticClass<AKalo>()
	{
		return AKalo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKalo(Z_Construct_UClass_AKalo, &AKalo::StaticClass, TEXT("/Script/Everstorm"), TEXT("AKalo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKalo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
