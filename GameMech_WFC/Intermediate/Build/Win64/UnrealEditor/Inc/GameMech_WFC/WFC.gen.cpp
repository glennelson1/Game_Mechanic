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
	DEFINE_FUNCTION(UWFC::execRandomNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->RandomNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWFC::execCheckNeibourTile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckNeibourTile_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWFC::execSetTile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTile_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UWFC_CheckNeibourTile = FName(TEXT("CheckNeibourTile"));
	void UWFC::CheckNeibourTile()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWFC_CheckNeibourTile),NULL);
	}
	static FName NAME_UWFC_SetTile = FName(TEXT("SetTile"));
	void UWFC::SetTile()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWFC_SetTile),NULL);
	}
	void UWFC::StaticRegisterNativesUWFC()
	{
		UClass* Class = UWFC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckNeibourTile", &UWFC::execCheckNeibourTile },
			{ "RandomNumber", &UWFC::execRandomNumber },
			{ "SetTile", &UWFC::execSetTile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWFC_CheckNeibourTile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWFC_CheckNeibourTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "WFC_Functions" },
		{ "ModuleRelativePath", "Private/WFC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWFC_CheckNeibourTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWFC, nullptr, "CheckNeibourTile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWFC_CheckNeibourTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWFC_CheckNeibourTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWFC_CheckNeibourTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWFC_CheckNeibourTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWFC_RandomNumber_Statics
	{
		struct WFC_eventRandomNumber_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWFC_RandomNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WFC_eventRandomNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWFC_RandomNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWFC_RandomNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWFC_RandomNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "RandNum" },
		{ "ModuleRelativePath", "Private/WFC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWFC_RandomNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWFC, nullptr, "RandomNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWFC_RandomNumber_Statics::WFC_eventRandomNumber_Parms), Z_Construct_UFunction_UWFC_RandomNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWFC_RandomNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWFC_RandomNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWFC_RandomNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWFC_RandomNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWFC_RandomNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWFC_SetTile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWFC_SetTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "WFC_Functions" },
		{ "ModuleRelativePath", "Private/WFC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWFC_SetTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWFC, nullptr, "SetTile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWFC_SetTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWFC_SetTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWFC_SetTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWFC_SetTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWFC);
	UClass* Z_Construct_UClass_UWFC_NoRegister()
	{
		return UWFC::StaticClass();
	}
	struct Z_Construct_UClass_UWFC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UWFC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWFC_CheckNeibourTile, "CheckNeibourTile" }, // 1055222122
		{ &Z_Construct_UFunction_UWFC_RandomNumber, "RandomNumber" }, // 837775566
		{ &Z_Construct_UFunction_UWFC_SetTile, "SetTile" }, // 672668742
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UWFC, UWFC::StaticClass, TEXT("UWFC"), &Z_Registration_Info_UClass_UWFC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWFC), 3315441251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Private_WFC_h_1975334163(TEXT("/Script/GameMech_WFC"),
		Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Private_WFC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Private_WFC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
