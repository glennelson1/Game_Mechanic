// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMech_WFC/Public/BuildingComp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingComp() {}
// Cross Module References
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_UBuildingComp_NoRegister();
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_UBuildingComp();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameMech_WFC();
// End Cross Module References
	DEFINE_FUNCTION(UBuildingComp::execSpawnBuilding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnBuilding();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBuildingComp::execUpdatePlacement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlacement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBuildingComp::execSetplacementEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetplacementEnabled();
		P_NATIVE_END;
	}
	void UBuildingComp::StaticRegisterNativesUBuildingComp()
	{
		UClass* Class = UBuildingComp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetplacementEnabled", &UBuildingComp::execSetplacementEnabled },
			{ "SpawnBuilding", &UBuildingComp::execSpawnBuilding },
			{ "UpdatePlacement", &UBuildingComp::execUpdatePlacement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBuildingComp_SetplacementEnabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuildingComp_SetplacementEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/BuildingComp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuildingComp_SetplacementEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuildingComp, nullptr, "SetplacementEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuildingComp_SetplacementEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuildingComp_SetplacementEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuildingComp_SetplacementEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuildingComp_SetplacementEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBuildingComp_SpawnBuilding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuildingComp_SpawnBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/BuildingComp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuildingComp_SpawnBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuildingComp, nullptr, "SpawnBuilding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuildingComp_SpawnBuilding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuildingComp_SpawnBuilding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuildingComp_SpawnBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuildingComp_SpawnBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBuildingComp_UpdatePlacement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuildingComp_UpdatePlacement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/BuildingComp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuildingComp_UpdatePlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuildingComp, nullptr, "UpdatePlacement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuildingComp_UpdatePlacement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuildingComp_UpdatePlacement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuildingComp_UpdatePlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuildingComp_UpdatePlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuildingComp);
	UClass* Z_Construct_UClass_UBuildingComp_NoRegister()
	{
		return UBuildingComp::StaticClass();
	}
	struct Z_Construct_UClass_UBuildingComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuildingComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameMech_WFC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBuildingComp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBuildingComp_SetplacementEnabled, "SetplacementEnabled" }, // 68942326
		{ &Z_Construct_UFunction_UBuildingComp_SpawnBuilding, "SpawnBuilding" }, // 3280215320
		{ &Z_Construct_UFunction_UBuildingComp_UpdatePlacement, "UpdatePlacement" }, // 2561998681
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildingComp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BuildingComp.h" },
		{ "ModuleRelativePath", "Public/BuildingComp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuildingComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingComp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuildingComp_Statics::ClassParams = {
		&UBuildingComp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBuildingComp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingComp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuildingComp()
	{
		if (!Z_Registration_Info_UClass_UBuildingComp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingComp.OuterSingleton, Z_Construct_UClass_UBuildingComp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBuildingComp.OuterSingleton;
	}
	template<> GAMEMECH_WFC_API UClass* StaticClass<UBuildingComp>()
	{
		return UBuildingComp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildingComp);
	struct Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBuildingComp, UBuildingComp::StaticClass, TEXT("UBuildingComp"), &Z_Registration_Info_UClass_UBuildingComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingComp), 1759970772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_1950584345(TEXT("/Script/GameMech_WFC"),
		Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
