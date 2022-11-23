// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMech_WFC/Private/WFC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWFC() {}
// Cross Module References
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_UWFC_NoRegister();
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_UWFC();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameMech_WFC();
// End Cross Module References
	void UWFC::StaticRegisterNativesUWFC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWFC);
	UClass* Z_Construct_UClass_UWFC_NoRegister()
	{
		return UWFC::StaticClass();
	}
	struct Z_Construct_UClass_UWFC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWFC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameMech_WFC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWFC_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WFC.h" },
		{ "ModuleRelativePath", "Private/WFC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWFC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWFC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWFC_Statics::ClassParams = {
		&UWFC::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWFC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWFC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWFC()
	{
		if (!Z_Registration_Info_UClass_UWFC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWFC.OuterSingleton, Z_Construct_UClass_UWFC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWFC.OuterSingleton;
	}
	template<> GAMEMECH_WFC_API UClass* StaticClass<UWFC>()
	{
		return UWFC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWFC);
	struct Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Private_WFC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Private_WFC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWFC, UWFC::StaticClass, TEXT("UWFC"), &Z_Registration_Info_UClass_UWFC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWFC), 3205357700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Private_WFC_h_2864733260(TEXT("/Script/GameMech_WFC"),
		Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Private_WFC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Private_WFC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
