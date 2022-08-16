// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DOORPROJECT_DoorProjectProjectile_generated_h
#error "DoorProjectProjectile.generated.h already included, missing '#pragma once' in DoorProjectProjectile.h"
#endif
#define DOORPROJECT_DoorProjectProjectile_generated_h

#define FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_15_SPARSE_DATA
#define FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoorProjectProjectile(); \
	friend struct Z_Construct_UClass_ADoorProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(ADoorProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DoorProject"), NO_API) \
	DECLARE_SERIALIZER(ADoorProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADoorProjectProjectile(); \
	friend struct Z_Construct_UClass_ADoorProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(ADoorProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DoorProject"), NO_API) \
	DECLARE_SERIALIZER(ADoorProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoorProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoorProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorProjectProjectile(ADoorProjectProjectile&&); \
	NO_API ADoorProjectProjectile(const ADoorProjectProjectile&); \
public:


#define FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorProjectProjectile(ADoorProjectProjectile&&); \
	NO_API ADoorProjectProjectile(const ADoorProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoorProjectProjectile)


#define FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_12_PROLOG
#define FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_15_SPARSE_DATA \
	FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_15_RPC_WRAPPERS \
	FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_15_INCLASS \
	FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_15_SPARSE_DATA \
	FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DOORPROJECT_API UClass* StaticClass<class ADoorProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DoorProject_Source_DoorProject_DoorProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
