// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EVERSTORM_Kalo_generated_h
#error "Kalo.generated.h already included, missing '#pragma once' in Kalo.h"
#endif
#define EVERSTORM_Kalo_generated_h

#define Everstorm_Source_Everstorm_Kalo_h_15_SPARSE_DATA
#define Everstorm_Source_Everstorm_Kalo_h_15_RPC_WRAPPERS
#define Everstorm_Source_Everstorm_Kalo_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Everstorm_Source_Everstorm_Kalo_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKalo(); \
	friend struct Z_Construct_UClass_AKalo_Statics; \
public: \
	DECLARE_CLASS(AKalo, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Everstorm"), NO_API) \
	DECLARE_SERIALIZER(AKalo)


#define Everstorm_Source_Everstorm_Kalo_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAKalo(); \
	friend struct Z_Construct_UClass_AKalo_Statics; \
public: \
	DECLARE_CLASS(AKalo, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Everstorm"), NO_API) \
	DECLARE_SERIALIZER(AKalo)


#define Everstorm_Source_Everstorm_Kalo_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKalo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKalo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKalo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKalo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKalo(AKalo&&); \
	NO_API AKalo(const AKalo&); \
public:


#define Everstorm_Source_Everstorm_Kalo_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKalo(AKalo&&); \
	NO_API AKalo(const AKalo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKalo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKalo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKalo)


#define Everstorm_Source_Everstorm_Kalo_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__primaryCooldown() { return STRUCT_OFFSET(AKalo, primaryCooldown); } \
	FORCEINLINE static uint32 __PPO__BaseTurnRate() { return STRUCT_OFFSET(AKalo, BaseTurnRate); } \
	FORCEINLINE static uint32 __PPO__BaseLookUpAtRate() { return STRUCT_OFFSET(AKalo, BaseLookUpAtRate); }


#define Everstorm_Source_Everstorm_Kalo_h_12_PROLOG
#define Everstorm_Source_Everstorm_Kalo_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Everstorm_Source_Everstorm_Kalo_h_15_PRIVATE_PROPERTY_OFFSET \
	Everstorm_Source_Everstorm_Kalo_h_15_SPARSE_DATA \
	Everstorm_Source_Everstorm_Kalo_h_15_RPC_WRAPPERS \
	Everstorm_Source_Everstorm_Kalo_h_15_INCLASS \
	Everstorm_Source_Everstorm_Kalo_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Everstorm_Source_Everstorm_Kalo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Everstorm_Source_Everstorm_Kalo_h_15_PRIVATE_PROPERTY_OFFSET \
	Everstorm_Source_Everstorm_Kalo_h_15_SPARSE_DATA \
	Everstorm_Source_Everstorm_Kalo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Everstorm_Source_Everstorm_Kalo_h_15_INCLASS_NO_PURE_DECLS \
	Everstorm_Source_Everstorm_Kalo_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVERSTORM_API UClass* StaticClass<class AKalo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Everstorm_Source_Everstorm_Kalo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
