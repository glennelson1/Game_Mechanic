// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEMECH_WFC_GridManager_generated_h
#error "GridManager.generated.h already included, missing '#pragma once' in GridManager.h"
#endif
#define GAMEMECH_WFC_GridManager_generated_h

#define FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_SPARSE_DATA
#define FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_RPC_WRAPPERS \
	virtual void PopulateGrid_Implementation(); \
 \
	DECLARE_FUNCTION(execPopulateGrid);


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PopulateGrid_Implementation(); \
 \
	DECLARE_FUNCTION(execPopulateGrid);


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_EVENT_PARMS
#define FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_CALLBACK_WRAPPERS
#define FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridManager(); \
	friend struct Z_Construct_UClass_AGridManager_Statics; \
public: \
	DECLARE_CLASS(AGridManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameMech_WFC"), NO_API) \
	DECLARE_SERIALIZER(AGridManager)


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAGridManager(); \
	friend struct Z_Construct_UClass_AGridManager_Statics; \
public: \
	DECLARE_CLASS(AGridManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameMech_WFC"), NO_API) \
	DECLARE_SERIALIZER(AGridManager)


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGridManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGridManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridManager(AGridManager&&); \
	NO_API AGridManager(const AGridManager&); \
public:


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridManager(AGridManager&&); \
	NO_API AGridManager(const AGridManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridManager)


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_10_PROLOG \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_EVENT_PARMS


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_SPARSE_DATA \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_RPC_WRAPPERS \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_CALLBACK_WRAPPERS \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_INCLASS \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_SPARSE_DATA \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_CALLBACK_WRAPPERS \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_INCLASS_NO_PURE_DECLS \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEMECH_WFC_API UClass* StaticClass<class AGridManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameMech_WFC_Source_GameMech_WFC_Public_GridManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
