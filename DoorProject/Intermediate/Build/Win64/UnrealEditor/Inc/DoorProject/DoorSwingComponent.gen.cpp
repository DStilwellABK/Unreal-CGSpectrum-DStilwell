// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoorProject/Public/DoorSwingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorSwingComponent() {}
// Cross Module References
	DOORPROJECT_API UClass* Z_Construct_UClass_UDoorSwingComponent_NoRegister();
	DOORPROJECT_API UClass* Z_Construct_UClass_UDoorSwingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DoorProject();
// End Cross Module References
	void UDoorSwingComponent::StaticRegisterNativesUDoorSwingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDoorSwingComponent);
	UClass* Z_Construct_UClass_UDoorSwingComponent_NoRegister()
	{
		return UDoorSwingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDoorSwingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorSwingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DoorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorSwingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DoorSwingComponent.h" },
		{ "ModuleRelativePath", "Public/DoorSwingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorSwingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorSwingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoorSwingComponent_Statics::ClassParams = {
		&UDoorSwingComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDoorSwingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorSwingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorSwingComponent()
	{
		if (!Z_Registration_Info_UClass_UDoorSwingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoorSwingComponent.OuterSingleton, Z_Construct_UClass_UDoorSwingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDoorSwingComponent.OuterSingleton;
	}
	template<> DOORPROJECT_API UClass* StaticClass<UDoorSwingComponent>()
	{
		return UDoorSwingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorSwingComponent);
	struct Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorSwingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorSwingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDoorSwingComponent, UDoorSwingComponent::StaticClass, TEXT("UDoorSwingComponent"), &Z_Registration_Info_UClass_UDoorSwingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoorSwingComponent), 1715664366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorSwingComponent_h_628856379(TEXT("/Script/DoorProject"),
		Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorSwingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorSwingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
