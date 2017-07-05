// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef RUNEBERGVRPLUGIN_RunebergVR_Pawn_generated_h
#error "RunebergVR_Pawn.generated.h already included, missing '#pragma once' in RunebergVR_Pawn.h"
#endif
#define RUNEBERGVRPLUGIN_RunebergVR_Pawn_generated_h

#define EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverridePawnValues) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PawnBaseEyeHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CapsuleHalfHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CapsuleRadius); \
		P_GET_STRUCT(FVector,Z_Param_CapsuleRelativeLocation); \
		P_GET_STRUCT(FVector,Z_Param_SceneLocation); \
		P_GET_STRUCT(FVector,Z_Param_LeftControllerLocation); \
		P_GET_STRUCT(FVector,Z_Param_RightControllerLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OverridePawnValues(Z_Param_PawnBaseEyeHeight,Z_Param_CapsuleHalfHeight,Z_Param_CapsuleRadius,Z_Param_CapsuleRelativeLocation,Z_Param_SceneLocation,Z_Param_LeftControllerLocation,Z_Param_RightControllerLocation); \
		P_NATIVE_END; \
	}


#define EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverridePawnValues) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PawnBaseEyeHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CapsuleHalfHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CapsuleRadius); \
		P_GET_STRUCT(FVector,Z_Param_CapsuleRelativeLocation); \
		P_GET_STRUCT(FVector,Z_Param_SceneLocation); \
		P_GET_STRUCT(FVector,Z_Param_LeftControllerLocation); \
		P_GET_STRUCT(FVector,Z_Param_RightControllerLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OverridePawnValues(Z_Param_PawnBaseEyeHeight,Z_Param_CapsuleHalfHeight,Z_Param_CapsuleRadius,Z_Param_CapsuleRelativeLocation,Z_Param_SceneLocation,Z_Param_LeftControllerLocation,Z_Param_RightControllerLocation); \
		P_NATIVE_END; \
	}


#define EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunebergVR_Pawn(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_ARunebergVR_Pawn(); \
public: \
	DECLARE_CLASS(ARunebergVR_Pawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(ARunebergVR_Pawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_25_INCLASS \
private: \
	static void StaticRegisterNativesARunebergVR_Pawn(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_ARunebergVR_Pawn(); \
public: \
	DECLARE_CLASS(ARunebergVR_Pawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(ARunebergVR_Pawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunebergVR_Pawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunebergVR_Pawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunebergVR_Pawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunebergVR_Pawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunebergVR_Pawn(ARunebergVR_Pawn&&); \
	NO_API ARunebergVR_Pawn(const ARunebergVR_Pawn&); \
public:


#define EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunebergVR_Pawn(ARunebergVR_Pawn&&); \
	NO_API ARunebergVR_Pawn(const ARunebergVR_Pawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunebergVR_Pawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunebergVR_Pawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunebergVR_Pawn)


#define EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_25_PRIVATE_PROPERTY_OFFSET
#define EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_22_PROLOG
#define EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_25_PRIVATE_PROPERTY_OFFSET \
	EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_25_RPC_WRAPPERS \
	EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_25_INCLASS \
	EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_25_PRIVATE_PROPERTY_OFFSET \
	EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_25_INCLASS_NO_PURE_DECLS \
	EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EarthquakeVR_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
