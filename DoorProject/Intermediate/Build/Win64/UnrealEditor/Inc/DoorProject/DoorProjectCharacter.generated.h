// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DOORPROJECT_DoorProjectCharacter_generated_h
#error "DoorProjectCharacter.generated.h already included, missing '#pragma once' in DoorProjectCharacter.h"
#endif
#define DOORPROJECT_DoorProjectCharacter_generated_h

#define FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_23_SPARSE_DATA
#define FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_23_RPC_WRAPPERS
#define FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoorProjectCharacter(); \
	friend struct Z_Construct_UClass_ADoorProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ADoorProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DoorProject"), NO_API) \
	DECLARE_SERIALIZER(ADoorProjectCharacter)


#define FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesADoorProjectCharacter(); \
	friend struct Z_Construct_UClass_ADoorProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ADoorProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DoorProject"), NO_API) \
	DECLARE_SERIALIZER(ADoorProjectCharacter)


#define FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoorProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoorProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorProjectCharacter(ADoorProjectCharacter&&); \
	NO_API ADoorProjectCharacter(const ADoorProjectCharacter&); \
public:


#define FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorProjectCharacter(ADoorProjectCharacter&&); \
	NO_API ADoorProjectCharacter(const ADoorProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoorProjectCharacter)


#define FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_20_PROLOG
#define FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_23_SPARSE_DATA \
	FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_23_RPC_WRAPPERS \
	FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_23_INCLASS \
	FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_23_SPARSE_DATA \
	FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DOORPROJECT_API UClass* StaticClass<class ADoorProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
