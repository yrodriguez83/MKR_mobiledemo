// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "mobile_mkrdemo/mobile_mkrdemoHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemobile_mkrdemoHud() {}
// Cross Module References
	MOBILE_MKRDEMO_API UClass* Z_Construct_UClass_Amobile_mkrdemoHud_NoRegister();
	MOBILE_MKRDEMO_API UClass* Z_Construct_UClass_Amobile_mkrdemoHud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_mobile_mkrdemo();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void Amobile_mkrdemoHud::StaticRegisterNativesAmobile_mkrdemoHud()
	{
	}
	UClass* Z_Construct_UClass_Amobile_mkrdemoHud_NoRegister()
	{
		return Amobile_mkrdemoHud::StaticClass();
	}
	struct Z_Construct_UClass_Amobile_mkrdemoHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Amobile_mkrdemoHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_mobile_mkrdemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amobile_mkrdemoHud_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "mobile_mkrdemoHud.h" },
		{ "ModuleRelativePath", "mobile_mkrdemoHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amobile_mkrdemoHud_Statics::NewProp_HUDFont_MetaData[] = {
		{ "Comment", "/** Font used to render the vehicle info */" },
		{ "ModuleRelativePath", "mobile_mkrdemoHud.h" },
		{ "ToolTip", "Font used to render the vehicle info" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Amobile_mkrdemoHud_Statics::NewProp_HUDFont = { "HUDFont", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amobile_mkrdemoHud, HUDFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Amobile_mkrdemoHud_Statics::NewProp_HUDFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amobile_mkrdemoHud_Statics::NewProp_HUDFont_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Amobile_mkrdemoHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amobile_mkrdemoHud_Statics::NewProp_HUDFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Amobile_mkrdemoHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Amobile_mkrdemoHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Amobile_mkrdemoHud_Statics::ClassParams = {
		&Amobile_mkrdemoHud::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Amobile_mkrdemoHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Amobile_mkrdemoHud_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Amobile_mkrdemoHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Amobile_mkrdemoHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Amobile_mkrdemoHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Amobile_mkrdemoHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Amobile_mkrdemoHud, 2754267912);
	template<> MOBILE_MKRDEMO_API UClass* StaticClass<Amobile_mkrdemoHud>()
	{
		return Amobile_mkrdemoHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Amobile_mkrdemoHud(Z_Construct_UClass_Amobile_mkrdemoHud, &Amobile_mkrdemoHud::StaticClass, TEXT("/Script/mobile_mkrdemo"), TEXT("Amobile_mkrdemoHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Amobile_mkrdemoHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
