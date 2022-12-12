// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMech_WFC/Public/GridManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridManager() {}
// Cross Module References
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_AGridManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GameMech_WFC();
// End Cross Module References
	void AGridManager::StaticRegisterNativesAGridManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridManager);
	UClass* Z_Construct_UClass_AGridManager_NoRegister()
	{
		return AGridManager::StaticClass();
	}
	struct Z_Construct_UClass_AGridManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_m_GridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_WorldSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_m_WorldSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameMech_WFC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GridManager.h" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_m_GridSize_MetaData[] = {
		{ "Category", "Grid Size" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_m_GridSize = { "m_GridSize", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridManager, m_GridSize), METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_m_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_m_GridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_m_WorldSize_MetaData[] = {
		{ "Category", "World Size" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_m_WorldSize = { "m_WorldSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridManager, m_WorldSize), METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_m_WorldSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_m_WorldSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_offset_MetaData[] = {
		{ "Category", "Grid Size" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridManager, offset), METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_m_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_m_WorldSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_offset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridManager_Statics::ClassParams = {
		&AGridManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGridManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridManager()
	{
		if (!Z_Registration_Info_UClass_AGridManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridManager.OuterSingleton, Z_Construct_UClass_AGridManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGridManager.OuterSingleton;
	}
	template<> GAMEMECH_WFC_API UClass* StaticClass<AGridManager>()
	{
		return AGridManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridManager);
	struct Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridManager, AGridManager::StaticClass, TEXT("AGridManager"), &Z_Registration_Info_UClass_AGridManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridManager), 3200486055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_2249964306(TEXT("/Script/GameMech_WFC"),
		Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
