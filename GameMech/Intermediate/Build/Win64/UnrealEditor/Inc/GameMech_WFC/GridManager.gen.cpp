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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_AGridActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGridManager::execPopulateGrid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PopulateGrid_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AGridManager_PopulateGrid = FName(TEXT("PopulateGrid"));
	void AGridManager::PopulateGrid()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGridManager_PopulateGrid),NULL);
	}
	void AGridManager::StaticRegisterNativesAGridManager()
	{
		UClass* Class = AGridManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PopulateGrid", &AGridManager::execPopulateGrid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGridManager_PopulateGrid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridManager_PopulateGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_PopulateGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "PopulateGrid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridManager_PopulateGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_PopulateGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridManager_PopulateGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_PopulateGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridManager);
	UClass* Z_Construct_UClass_AGridManager_NoRegister()
	{
		return AGridManager::StaticClass();
	}
	struct Z_Construct_UClass_AGridManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GridArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameMech_WFC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGridManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridManager_PopulateGrid, "PopulateGrid" }, // 2275457638
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_m_GridSize = { "m_GridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridManager, m_GridSize), METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_m_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_m_GridSize_MetaData)) };
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridManager, offset), METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridManager, ActorToSpawn), Z_Construct_UClass_AGridActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_ActorToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_ActorToSpawn_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridArray_Inner = { "GridArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGridActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_GridArray_MetaData[] = {
		{ "Category", "Grid Array" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridArray = { "GridArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridManager, GridArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_GridArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_GridArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_m_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_m_WorldSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_ActorToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridManager_Statics::ClassParams = {
		&AGridManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGridManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AGridManager, AGridManager::StaticClass, TEXT("AGridManager"), &Z_Registration_Info_UClass_AGridManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridManager), 4126142473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_3993279874(TEXT("/Script/GameMech_WFC"),
		Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
