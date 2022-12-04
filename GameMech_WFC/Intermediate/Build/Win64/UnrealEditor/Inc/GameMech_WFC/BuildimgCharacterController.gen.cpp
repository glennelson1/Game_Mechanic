// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMech_WFC/Public/BuildimgCharacterController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildimgCharacterController() {}
// Cross Module References
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_ABuildimgCharacterController_NoRegister();
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_ABuildimgCharacterController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GameMech_WFC();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ABuildimgCharacterController::execSpawnBuilding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnBuilding_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildimgCharacterController::execUpdatePlacement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlacement_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildimgCharacterController::execSetplacementEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetplacementEnabled_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ABuildimgCharacterController_SetplacementEnabled = FName(TEXT("SetplacementEnabled"));
	void ABuildimgCharacterController::SetplacementEnabled()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABuildimgCharacterController_SetplacementEnabled),NULL);
	}
	static FName NAME_ABuildimgCharacterController_SpawnBuilding = FName(TEXT("SpawnBuilding"));
	void ABuildimgCharacterController::SpawnBuilding()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABuildimgCharacterController_SpawnBuilding),NULL);
	}
	static FName NAME_ABuildimgCharacterController_UpdatePlacement = FName(TEXT("UpdatePlacement"));
	void ABuildimgCharacterController::UpdatePlacement()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABuildimgCharacterController_UpdatePlacement),NULL);
	}
	void ABuildimgCharacterController::StaticRegisterNativesABuildimgCharacterController()
	{
		UClass* Class = ABuildimgCharacterController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetplacementEnabled", &ABuildimgCharacterController::execSetplacementEnabled },
			{ "SpawnBuilding", &ABuildimgCharacterController::execSpawnBuilding },
			{ "UpdatePlacement", &ABuildimgCharacterController::execUpdatePlacement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABuildimgCharacterController_SetplacementEnabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildimgCharacterController_SetplacementEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/BuildimgCharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildimgCharacterController_SetplacementEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildimgCharacterController, nullptr, "SetplacementEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildimgCharacterController_SetplacementEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildimgCharacterController_SetplacementEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildimgCharacterController_SetplacementEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildimgCharacterController_SetplacementEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildimgCharacterController_SpawnBuilding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildimgCharacterController_SpawnBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/BuildimgCharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildimgCharacterController_SpawnBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildimgCharacterController, nullptr, "SpawnBuilding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildimgCharacterController_SpawnBuilding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildimgCharacterController_SpawnBuilding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildimgCharacterController_SpawnBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildimgCharacterController_SpawnBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildimgCharacterController_UpdatePlacement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildimgCharacterController_UpdatePlacement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/BuildimgCharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildimgCharacterController_UpdatePlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildimgCharacterController, nullptr, "UpdatePlacement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildimgCharacterController_UpdatePlacement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildimgCharacterController_UpdatePlacement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildimgCharacterController_UpdatePlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildimgCharacterController_UpdatePlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuildimgCharacterController);
	UClass* Z_Construct_UClass_ABuildimgCharacterController_NoRegister()
	{
		return ABuildimgCharacterController::StaticClass();
	}
	struct Z_Construct_UClass_ABuildimgCharacterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Location_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildimgCharacterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GameMech_WFC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuildimgCharacterController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuildimgCharacterController_SetplacementEnabled, "SetplacementEnabled" }, // 2369520201
		{ &Z_Construct_UFunction_ABuildimgCharacterController_SpawnBuilding, "SpawnBuilding" }, // 880540126
		{ &Z_Construct_UFunction_ABuildimgCharacterController_UpdatePlacement, "UpdatePlacement" }, // 251112159
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildimgCharacterController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BuildimgCharacterController.h" },
		{ "ModuleRelativePath", "Public/BuildimgCharacterController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildimgCharacterController_Statics::NewProp_m_Location_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/BuildimgCharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuildimgCharacterController_Statics::NewProp_m_Location = { "m_Location", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildimgCharacterController, m_Location), METADATA_PARAMS(Z_Construct_UClass_ABuildimgCharacterController_Statics::NewProp_m_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildimgCharacterController_Statics::NewProp_m_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildimgCharacterController_Statics::NewProp_HitLocation_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/BuildimgCharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABuildimgCharacterController_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildimgCharacterController, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABuildimgCharacterController_Statics::NewProp_HitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildimgCharacterController_Statics::NewProp_HitLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildimgCharacterController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildimgCharacterController_Statics::NewProp_m_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildimgCharacterController_Statics::NewProp_HitLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildimgCharacterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildimgCharacterController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuildimgCharacterController_Statics::ClassParams = {
		&ABuildimgCharacterController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABuildimgCharacterController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuildimgCharacterController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuildimgCharacterController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildimgCharacterController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildimgCharacterController()
	{
		if (!Z_Registration_Info_UClass_ABuildimgCharacterController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuildimgCharacterController.OuterSingleton, Z_Construct_UClass_ABuildimgCharacterController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABuildimgCharacterController.OuterSingleton;
	}
	template<> GAMEMECH_WFC_API UClass* StaticClass<ABuildimgCharacterController>()
	{
		return ABuildimgCharacterController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildimgCharacterController);
	struct Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABuildimgCharacterController, ABuildimgCharacterController::StaticClass, TEXT("ABuildimgCharacterController"), &Z_Registration_Info_UClass_ABuildimgCharacterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuildimgCharacterController), 418448345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_2436971434(TEXT("/Script/GameMech_WFC"),
		Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
