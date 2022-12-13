// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMech_WFC/Public/GridActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridActor() {}
// Cross Module References
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_AGridActor_NoRegister();
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_AGridActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GameMech_WFC();
// End Cross Module References
	void AGridActor::StaticRegisterNativesAGridActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridActor);
	UClass* Z_Construct_UClass_AGridActor_NoRegister()
	{
		return AGridActor::StaticClass();
	}
	struct Z_Construct_UClass_AGridActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_IsOccupied_MetaData[];
#endif
		static void NewProp_m_IsOccupied_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_m_IsOccupied;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameMech_WFC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GridActor.h" },
		{ "ModuleRelativePath", "Public/GridActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridActor_Statics::NewProp_m_IsOccupied_MetaData[] = {
		{ "Category", "Grid Size" },
		{ "ModuleRelativePath", "Public/GridActor.h" },
	};
#endif
	void Z_Construct_UClass_AGridActor_Statics::NewProp_m_IsOccupied_SetBit(void* Obj)
	{
		((AGridActor*)Obj)->m_IsOccupied = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridActor_Statics::NewProp_m_IsOccupied = { "m_IsOccupied", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGridActor), &Z_Construct_UClass_AGridActor_Statics::NewProp_m_IsOccupied_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGridActor_Statics::NewProp_m_IsOccupied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridActor_Statics::NewProp_m_IsOccupied_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridActor_Statics::NewProp_m_IsOccupied,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridActor_Statics::ClassParams = {
		&AGridActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGridActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGridActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridActor()
	{
		if (!Z_Registration_Info_UClass_AGridActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridActor.OuterSingleton, Z_Construct_UClass_AGridActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGridActor.OuterSingleton;
	}
	template<> GAMEMECH_WFC_API UClass* StaticClass<AGridActor>()
	{
		return AGridActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridActor);
	struct Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridActor, AGridActor::StaticClass, TEXT("AGridActor"), &Z_Registration_Info_UClass_AGridActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridActor), 72580441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridActor_h_1690967947(TEXT("/Script/GameMech_WFC"),
		Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_GridActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
