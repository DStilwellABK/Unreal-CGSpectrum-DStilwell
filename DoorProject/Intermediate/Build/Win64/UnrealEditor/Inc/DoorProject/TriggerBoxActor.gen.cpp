// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoorProject/Public/TriggerBoxActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerBoxActor() {}
// Cross Module References
	DOORPROJECT_API UClass* Z_Construct_UClass_ATriggerBoxActor_NoRegister();
	DOORPROJECT_API UClass* Z_Construct_UClass_ATriggerBoxActor();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_DoorProject();
// End Cross Module References
	void ATriggerBoxActor::StaticRegisterNativesATriggerBoxActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriggerBoxActor);
	UClass* Z_Construct_UClass_ATriggerBoxActor_NoRegister()
	{
		return ATriggerBoxActor::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerBoxActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerBoxActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_DoorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TriggerBoxActor.h" },
		{ "ModuleRelativePath", "Public/TriggerBoxActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerBoxActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerBoxActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerBoxActor_Statics::ClassParams = {
		&ATriggerBoxActor::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerBoxActor()
	{
		if (!Z_Registration_Info_UClass_ATriggerBoxActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerBoxActor.OuterSingleton, Z_Construct_UClass_ATriggerBoxActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATriggerBoxActor.OuterSingleton;
	}
	template<> DOORPROJECT_API UClass* StaticClass<ATriggerBoxActor>()
	{
		return ATriggerBoxActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerBoxActor);
	struct Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_TriggerBoxActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_TriggerBoxActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerBoxActor, ATriggerBoxActor::StaticClass, TEXT("ATriggerBoxActor"), &Z_Registration_Info_UClass_ATriggerBoxActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerBoxActor), 3081513622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_TriggerBoxActor_h_2845383615(TEXT("/Script/DoorProject"),
		Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_TriggerBoxActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_TriggerBoxActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
