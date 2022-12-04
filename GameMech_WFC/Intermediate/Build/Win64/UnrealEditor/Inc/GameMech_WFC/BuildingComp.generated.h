// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEMECH_WFC_BuildingComp_generated_h
#error "BuildingComp.generated.h already included, missing '#pragma once' in BuildingComp.h"
#endif
#define GAMEMECH_WFC_BuildingComp_generated_h

#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_14_SPARSE_DATA
#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnBuilding); \
	DECLARE_FUNCTION(execUpdatePlacement); \
	DECLARE_FUNCTION(execSetplacementEnabled);


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnBuilding); \
	DECLARE_FUNCTION(execUpdatePlacement); \
	DECLARE_FUNCTION(execSetplacementEnabled);


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuildingComp(); \
	friend struct Z_Construct_UClass_UBuildingComp_Statics; \
public: \
	DECLARE_CLASS(UBuildingComp, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameMech_WFC"), NO_API) \
	DECLARE_SERIALIZER(UBuildingComp)


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBuildingComp(); \
	friend struct Z_Construct_UClass_UBuildingComp_Statics; \
public: \
	DECLARE_CLASS(UBuildingComp, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameMech_WFC"), NO_API) \
	DECLARE_SERIALIZER(UBuildingComp)


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuildingComp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuildingComp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildingComp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildingComp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuildingComp(UBuildingComp&&); \
	NO_API UBuildingComp(const UBuildingComp&); \
public:


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuildingComp(UBuildingComp&&); \
	NO_API UBuildingComp(const UBuildingComp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildingComp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildingComp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBuildingComp)


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_11_PROLOG
#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_14_SPARSE_DATA \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_14_RPC_WRAPPERS \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_14_INCLASS \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_14_SPARSE_DATA \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_14_INCLASS_NO_PURE_DECLS \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEMECH_WFC_API UClass* StaticClass<class UBuildingComp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildingComp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
