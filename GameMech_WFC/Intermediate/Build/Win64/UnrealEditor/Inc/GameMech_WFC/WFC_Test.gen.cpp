// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMech_WFC/Public/WFC_Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWFC_Test() {}
// Cross Module References
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_UWFC_Test_NoRegister();
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_UWFC_Test();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameMech_WFC();
// End Cross Module References
	void UWFC_Test::StaticRegisterNativesUWFC_Test()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWFC_Test);
	UClass* Z_Construct_UClass_UWFC_Test_NoRegister()
	{
		return UWFC_Test::StaticClass();
	}
	struct Z_Construct_UClass_UWFC_Test_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWFC_Test_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameMech_WFC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWFC_Test_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WFC_Test.h" },
		{ "ModuleRelativePath", "Public/WFC_Test.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWFC_Test_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWFC_Test>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWFC_Test_Statics::ClassParams = {
		&UWFC_Test::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWFC_Test_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWFC_Test_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWFC_Test()
	{
		if (!Z_Registration_Info_UClass_UWFC_Test.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWFC_Test.OuterSingleton, Z_Construct_UClass_UWFC_Test_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWFC_Test.OuterSingleton;
	}
	template<> GAMEMECH_WFC_API UClass* StaticClass<UWFC_Test>()
	{
		return UWFC_Test::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWFC_Test);
	struct Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_WFC_Test_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_WFC_Test_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWFC_Test, UWFC_Test::StaticClass, TEXT("UWFC_Test"), &Z_Registration_Info_UClass_UWFC_Test, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWFC_Test), 782630063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_WFC_Test_h_3888853938(TEXT("/Script/GameMech_WFC"),
		Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_WFC_Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_WFC_Test_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
