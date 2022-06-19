// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOBILE_MKRDEMO_mobile_mkrdemoPawn_generated_h
#error "mobile_mkrdemoPawn.generated.h already included, missing '#pragma once' in mobile_mkrdemoPawn.h"
#endif
#define MOBILE_MKRDEMO_mobile_mkrdemoPawn_generated_h

#define mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_SPARSE_DATA
#define mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_RPC_WRAPPERS
#define mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmobile_mkrdemoPawn(); \
	friend struct Z_Construct_UClass_Amobile_mkrdemoPawn_Statics; \
public: \
	DECLARE_CLASS(Amobile_mkrdemoPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/mobile_mkrdemo"), NO_API) \
	DECLARE_SERIALIZER(Amobile_mkrdemoPawn)


#define mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAmobile_mkrdemoPawn(); \
	friend struct Z_Construct_UClass_Amobile_mkrdemoPawn_Statics; \
public: \
	DECLARE_CLASS(Amobile_mkrdemoPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/mobile_mkrdemo"), NO_API) \
	DECLARE_SERIALIZER(Amobile_mkrdemoPawn)


#define mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Amobile_mkrdemoPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Amobile_mkrdemoPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Amobile_mkrdemoPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Amobile_mkrdemoPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Amobile_mkrdemoPawn(Amobile_mkrdemoPawn&&); \
	NO_API Amobile_mkrdemoPawn(const Amobile_mkrdemoPawn&); \
public:


#define mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Amobile_mkrdemoPawn(Amobile_mkrdemoPawn&&); \
	NO_API Amobile_mkrdemoPawn(const Amobile_mkrdemoPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Amobile_mkrdemoPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Amobile_mkrdemoPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Amobile_mkrdemoPawn)


#define mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(Amobile_mkrdemoPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(Amobile_mkrdemoPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(Amobile_mkrdemoPawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(Amobile_mkrdemoPawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(Amobile_mkrdemoPawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(Amobile_mkrdemoPawn, InCarGear); } \
	FORCEINLINE static uint32 __PPO__EngineSoundComponent() { return STRUCT_OFFSET(Amobile_mkrdemoPawn, EngineSoundComponent); }


#define mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_18_PROLOG
#define mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_SPARSE_DATA \
	mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_RPC_WRAPPERS \
	mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_INCLASS \
	mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_SPARSE_DATA \
	mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_INCLASS_NO_PURE_DECLS \
	mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOBILE_MKRDEMO_API UClass* StaticClass<class Amobile_mkrdemoPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID mobile_mkrdemo_Source_mobile_mkrdemo_mobile_mkrdemoPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
