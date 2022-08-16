// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoorProject/DoorProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorProjectGameMode() {}
// Cross Module References
	DOORPROJECT_API UClass* Z_Construct_UClass_ADoorProjectGameMode_NoRegister();
	DOORPROJECT_API UClass* Z_Construct_UClass_ADoorProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DoorProject();
// End Cross Module References
	void ADoorProjectGameMode::StaticRegisterNativesADoorProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoorProjectGameMode);
	UClass* Z_Construct_UClass_ADoorProjectGameMode_NoRegister()
	{
		return ADoorProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADoorProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DoorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DoorProjectGameMode.h" },
		{ "ModuleRelativePath", "DoorProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoorProjectGameMode_Statics::ClassParams = {
		&ADoorProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADoorProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoorProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_ADoorProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoorProjectGameMode.OuterSingleton, Z_Construct_UClass_ADoorProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoorProjectGameMode.OuterSingleton;
	}
	template<> DOORPROJECT_API UClass* StaticClass<ADoorProjectGameMode>()
	{
		return ADoorProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorProjectGameMode);
	struct Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_DoorProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_DoorProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoorProjectGameMode, ADoorProjectGameMode::StaticClass, TEXT("ADoorProjectGameMode"), &Z_Registration_Info_UClass_ADoorProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorProjectGameMode), 1445707113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_DoorProjectGameMode_h_3529419325(TEXT("/Script/DoorProject"),
		Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_DoorProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_DoorProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
