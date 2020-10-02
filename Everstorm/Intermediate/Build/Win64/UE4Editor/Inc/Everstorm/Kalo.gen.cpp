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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKalo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKalo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKalo_Statics::ClassParams = {
		&AKalo::StaticClass,
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
	IMPLEMENT_CLASS(AKalo, 2646717094);
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
