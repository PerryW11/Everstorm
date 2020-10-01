// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Everstorm/Kalonymus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKalonymus() {}
// Cross Module References
	EVERSTORM_API UClass* Z_Construct_UClass_AKalonymus_NoRegister();
	EVERSTORM_API UClass* Z_Construct_UClass_AKalonymus();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Everstorm();
// End Cross Module References
	void AKalonymus::StaticRegisterNativesAKalonymus()
	{
	}
	UClass* Z_Construct_UClass_AKalonymus_NoRegister()
	{
		return AKalonymus::StaticClass();
	}
	struct Z_Construct_UClass_AKalonymus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKalonymus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Everstorm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKalonymus_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Kalonymus.h" },
		{ "ModuleRelativePath", "Kalonymus.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKalonymus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKalonymus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKalonymus_Statics::ClassParams = {
		&AKalonymus::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AKalonymus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKalonymus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKalonymus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKalonymus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKalonymus, 3199109531);
	template<> EVERSTORM_API UClass* StaticClass<AKalonymus>()
	{
		return AKalonymus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKalonymus(Z_Construct_UClass_AKalonymus, &AKalonymus::StaticClass, TEXT("/Script/Everstorm"), TEXT("AKalonymus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKalonymus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
