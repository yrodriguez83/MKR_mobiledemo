// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "mobile_mkrdemo/mobile_mkrdemoGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemobile_mkrdemoGameMode() {}
// Cross Module References
	MOBILE_MKRDEMO_API UClass* Z_Construct_UClass_Amobile_mkrdemoGameMode_NoRegister();
	MOBILE_MKRDEMO_API UClass* Z_Construct_UClass_Amobile_mkrdemoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_mobile_mkrdemo();
// End Cross Module References
	void Amobile_mkrdemoGameMode::StaticRegisterNativesAmobile_mkrdemoGameMode()
	{
	}
	UClass* Z_Construct_UClass_Amobile_mkrdemoGameMode_NoRegister()
	{
		return Amobile_mkrdemoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Amobile_mkrdemoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Amobile_mkrdemoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_mobile_mkrdemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amobile_mkrdemoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "mobile_mkrdemoGameMode.h" },
		{ "ModuleRelativePath", "mobile_mkrdemoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Amobile_mkrdemoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Amobile_mkrdemoGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Amobile_mkrdemoGameMode_Statics::ClassParams = {
		&Amobile_mkrdemoGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_Amobile_mkrdemoGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Amobile_mkrdemoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Amobile_mkrdemoGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Amobile_mkrdemoGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Amobile_mkrdemoGameMode, 251916722);
	template<> MOBILE_MKRDEMO_API UClass* StaticClass<Amobile_mkrdemoGameMode>()
	{
		return Amobile_mkrdemoGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Amobile_mkrdemoGameMode(Z_Construct_UClass_Amobile_mkrdemoGameMode, &Amobile_mkrdemoGameMode::StaticClass, TEXT("/Script/mobile_mkrdemo"), TEXT("Amobile_mkrdemoGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Amobile_mkrdemoGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
