// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMech_WFC/GameMech_WFCGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMech_WFCGameModeBase() {}
// Cross Module References
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_AGameMech_WFCGameModeBase_NoRegister();
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_AGameMech_WFCGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GameMech_WFC();
// End Cross Module References
	void AGameMech_WFCGameModeBase::StaticRegisterNativesAGameMech_WFCGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameMech_WFCGameModeBase);
	UClass* Z_Construct_UClass_AGameMech_WFCGameModeBase_NoRegister()
	{
		return AGameMech_WFCGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGameMech_WFCGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameMech_WFCGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameMech_WFC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameMech_WFCGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMech_WFCGameModeBase.h" },
		{ "ModuleRelativePath", "GameMech_WFCGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameMech_WFCGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameMech_WFCGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameMech_WFCGameModeBase_Statics::ClassParams = {
		&AGameMech_WFCGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameMech_WFCGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameMech_WFCGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameMech_WFCGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AGameMech_WFCGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameMech_WFCGameModeBase.OuterSingleton, Z_Construct_UClass_AGameMech_WFCGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameMech_WFCGameModeBase.OuterSingleton;
	}
	template<> GAMEMECH_WFC_API UClass* StaticClass<AGameMech_WFCGameModeBase>()
	{
		return AGameMech_WFCGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameMech_WFCGameModeBase);
	struct Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_GameMech_WFCGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_GameMech_WFCGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameMech_WFCGameModeBase, AGameMech_WFCGameModeBase::StaticClass, TEXT("AGameMech_WFCGameModeBase"), &Z_Registration_Info_UClass_AGameMech_WFCGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameMech_WFCGameModeBase), 2667479792U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_GameMech_WFCGameModeBase_h_1087846588(TEXT("/Script/GameMech_WFC"),
		Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_GameMech_WFCGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_GameMech_WFCGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
