// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEMECH_WFC_BuildimgCharacterController_generated_h
#error "BuildimgCharacterController.generated.h already included, missing '#pragma once' in BuildimgCharacterController.h"
#endif
#define GAMEMECH_WFC_BuildimgCharacterController_generated_h

#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_SPARSE_DATA
#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_RPC_WRAPPERS \
	virtual void SpawnBuilding_Implementation(); \
	virtual FVector UpdatePlacement_Implementation(FVector HitLocation); \
	virtual void SetplacementEnabled_Implementation(); \
 \
	DECLARE_FUNCTION(execSpawnBuilding); \
	DECLARE_FUNCTION(execUpdatePlacement); \
	DECLARE_FUNCTION(execSetplacementEnabled);


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SpawnBuilding_Implementation(); \
	virtual FVector UpdatePlacement_Implementation(FVector HitLocation); \
	virtual void SetplacementEnabled_Implementation(); \
 \
	DECLARE_FUNCTION(execSpawnBuilding); \
	DECLARE_FUNCTION(execUpdatePlacement); \
	DECLARE_FUNCTION(execSetplacementEnabled);


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_EVENT_PARMS \
	struct BuildimgCharacterController_eventUpdatePlacement_Parms \
	{ \
		FVector HitLocation; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BuildimgCharacterController_eventUpdatePlacement_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_CALLBACK_WRAPPERS
#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuildimgCharacterController(); \
	friend struct Z_Construct_UClass_ABuildimgCharacterController_Statics; \
public: \
	DECLARE_CLASS(ABuildimgCharacterController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameMech_WFC"), NO_API) \
	DECLARE_SERIALIZER(ABuildimgCharacterController)


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABuildimgCharacterController(); \
	friend struct Z_Construct_UClass_ABuildimgCharacterController_Statics; \
public: \
	DECLARE_CLASS(ABuildimgCharacterController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameMech_WFC"), NO_API) \
	DECLARE_SERIALIZER(ABuildimgCharacterController)


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuildimgCharacterController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuildimgCharacterController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildimgCharacterController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildimgCharacterController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildimgCharacterController(ABuildimgCharacterController&&); \
	NO_API ABuildimgCharacterController(const ABuildimgCharacterController&); \
public:


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuildimgCharacterController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildimgCharacterController(ABuildimgCharacterController&&); \
	NO_API ABuildimgCharacterController(const ABuildimgCharacterController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildimgCharacterController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildimgCharacterController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuildimgCharacterController)


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_12_PROLOG \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_EVENT_PARMS


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_SPARSE_DATA \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_RPC_WRAPPERS \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_CALLBACK_WRAPPERS \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_INCLASS \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_SPARSE_DATA \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_CALLBACK_WRAPPERS \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_INCLASS_NO_PURE_DECLS \
	FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEMECH_WFC_API UClass* StaticClass<class ABuildimgCharacterController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameMech_WFC_Source_GameMech_WFC_Public_BuildimgCharacterController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
