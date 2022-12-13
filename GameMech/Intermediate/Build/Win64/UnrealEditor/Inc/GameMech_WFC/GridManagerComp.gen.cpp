// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMech_WFC/Public/GridManagerComp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridManagerComp() {}
// Cross Module References
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_UGridManagerComp_NoRegister();
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_UGridManagerComp();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameMech_WFC();
// End Cross Module References
	DEFINE_FUNCTION(UGridManagerComp::execPopulateGrid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PopulateGrid_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UGridManagerComp_PopulateGrid = FName(TEXT("PopulateGrid"));
	void UGridManagerComp::PopulateGrid()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGridManagerComp_PopulateGrid),NULL);
	}
	void UGridManagerComp::StaticRegisterNativesUGridManagerComp()
	{
		UClass* Class = UGridManagerComp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PopulateGrid", &UGridManagerComp::execPopulateGrid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridManagerComp_PopulateGrid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridManagerComp_PopulateGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/GridManagerComp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridManagerComp_PopulateGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridManagerComp, nullptr, "PopulateGrid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridManagerComp_PopulateGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridManagerComp_PopulateGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridManagerComp_PopulateGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridManagerComp_PopulateGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridManagerComp);
	UClass* Z_Construct_UClass_UGridManagerComp_NoRegister()
	{
		return UGridManagerComp::StaticClass();
	}
	struct Z_Construct_UClass_UGridManagerComp_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridManagerComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameMech_WFC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridManagerComp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridManagerComp_PopulateGrid, "PopulateGrid" }, // 2771953525
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridManagerComp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GridManagerComp.h" },
		{ "ModuleRelativePath", "Public/GridManagerComp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridManagerComp_Statics::NewProp_m_GridSize_MetaData[] = {
		{ "Category", "Grid Size" },
		{ "ModuleRelativePath", "Public/GridManagerComp.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGridManagerComp_Statics::NewProp_m_GridSize = { "m_GridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridManagerComp, m_GridSize), METADATA_PARAMS(Z_Construct_UClass_UGridManagerComp_Statics::NewProp_m_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridManagerComp_Statics::NewProp_m_GridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridManagerComp_Statics::NewProp_m_WorldSize_MetaData[] = {
		{ "Category", "World Size" },
		{ "ModuleRelativePath", "Public/GridManagerComp.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGridManagerComp_Statics::NewProp_m_WorldSize = { "m_WorldSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridManagerComp, m_WorldSize), METADATA_PARAMS(Z_Construct_UClass_UGridManagerComp_Statics::NewProp_m_WorldSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridManagerComp_Statics::NewProp_m_WorldSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridManagerComp_Statics::NewProp_offset_MetaData[] = {
		{ "Category", "Grid Size" },
		{ "ModuleRelativePath", "Public/GridManagerComp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridManagerComp_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridManagerComp, offset), METADATA_PARAMS(Z_Construct_UClass_UGridManagerComp_Statics::NewProp_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridManagerComp_Statics::NewProp_offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridManagerComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridManagerComp_Statics::NewProp_m_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridManagerComp_Statics::NewProp_m_WorldSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridManagerComp_Statics::NewProp_offset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridManagerComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridManagerComp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridManagerComp_Statics::ClassParams = {
		&UGridManagerComp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGridManagerComp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridManagerComp_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGridManagerComp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridManagerComp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridManagerComp()
	{
		if (!Z_Registration_Info_UClass_UGridManagerComp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridManagerComp.OuterSingleton, Z_Construct_UClass_UGridManagerComp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridManagerComp.OuterSingleton;
	}
	template<> GAMEMECH_WFC_API UClass* StaticClass<UGridManagerComp>()
	{
		return UGridManagerComp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridManagerComp);
	struct Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManagerComp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManagerComp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridManagerComp, UGridManagerComp::StaticClass, TEXT("UGridManagerComp"), &Z_Registration_Info_UClass_UGridManagerComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridManagerComp), 2181915342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManagerComp_h_3253607774(TEXT("/Script/GameMech_WFC"),
		Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManagerComp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManagerComp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
