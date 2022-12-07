// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMech_WFC/Public/PloppableComp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePloppableComp() {}
// Cross Module References
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_UPloppableComp_NoRegister();
	GAMEMECH_WFC_API UClass* Z_Construct_UClass_UPloppableComp();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameMech_WFC();
// End Cross Module References
	void UPloppableComp::StaticRegisterNativesUPloppableComp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPloppableComp);
	UClass* Z_Construct_UClass_UPloppableComp_NoRegister()
	{
		return UPloppableComp::StaticClass();
	}
	struct Z_Construct_UClass_UPloppableComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPloppableComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameMech_WFC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPloppableComp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PloppableComp.h" },
		{ "ModuleRelativePath", "Public/PloppableComp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPloppableComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPloppableComp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPloppableComp_Statics::ClassParams = {
		&UPloppableComp::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPloppableComp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPloppableComp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPloppableComp()
	{
		if (!Z_Registration_Info_UClass_UPloppableComp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPloppableComp.OuterSingleton, Z_Construct_UClass_UPloppableComp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPloppableComp.OuterSingleton;
	}
	template<> GAMEMECH_WFC_API UClass* StaticClass<UPloppableComp>()
	{
		return UPloppableComp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPloppableComp);
	struct Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_PloppableComp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_PloppableComp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPloppableComp, UPloppableComp::StaticClass, TEXT("UPloppableComp"), &Z_Registration_Info_UClass_UPloppableComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPloppableComp), 458402075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_PloppableComp_h_3841153338(TEXT("/Script/GameMech_WFC"),
		Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_PloppableComp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_WFC_Source_GameMech_WFC_Public_PloppableComp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
