// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorProject_init() {}
	DOORPROJECT_API UFunction* Z_Construct_UDelegateFunction_DoorProject_OnPickUp__DelegateSignature();
	DOORPROJECT_API UFunction* Z_Construct_UDelegateFunction_DoorProject_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DoorProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DoorProject()
	{
		if (!Z_Registration_Info_UPackage__Script_DoorProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DoorProject_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DoorProject_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DoorProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE19ADD5E,
				0xC509BEF4,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DoorProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DoorProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DoorProject(Z_Construct_UPackage__Script_DoorProject, TEXT("/Script/DoorProject"), Z_Registration_Info_UPackage__Script_DoorProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE19ADD5E, 0xC509BEF4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
