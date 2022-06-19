// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "mobile_mkrdemo/mobile_mkrdemoWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemobile_mkrdemoWheelFront() {}
// Cross Module References
	MOBILE_MKRDEMO_API UClass* Z_Construct_UClass_Umobile_mkrdemoWheelFront_NoRegister();
	MOBILE_MKRDEMO_API UClass* Z_Construct_UClass_Umobile_mkrdemoWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_mobile_mkrdemo();
// End Cross Module References
	void Umobile_mkrdemoWheelFront::StaticRegisterNativesUmobile_mkrdemoWheelFront()
	{
	}
	UClass* Z_Construct_UClass_Umobile_mkrdemoWheelFront_NoRegister()
	{
		return Umobile_mkrdemoWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_Umobile_mkrdemoWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Umobile_mkrdemoWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_mobile_mkrdemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Umobile_mkrdemoWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "mobile_mkrdemoWheelFront.h" },
		{ "ModuleRelativePath", "mobile_mkrdemoWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Umobile_mkrdemoWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Umobile_mkrdemoWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Umobile_mkrdemoWheelFront_Statics::ClassParams = {
		&Umobile_mkrdemoWheelFront::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_Umobile_mkrdemoWheelFront_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Umobile_mkrdemoWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Umobile_mkrdemoWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Umobile_mkrdemoWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Umobile_mkrdemoWheelFront, 4258111576);
	template<> MOBILE_MKRDEMO_API UClass* StaticClass<Umobile_mkrdemoWheelFront>()
	{
		return Umobile_mkrdemoWheelFront::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Umobile_mkrdemoWheelFront(Z_Construct_UClass_Umobile_mkrdemoWheelFront, &Umobile_mkrdemoWheelFront::StaticClass, TEXT("/Script/mobile_mkrdemo"), TEXT("Umobile_mkrdemoWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Umobile_mkrdemoWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
