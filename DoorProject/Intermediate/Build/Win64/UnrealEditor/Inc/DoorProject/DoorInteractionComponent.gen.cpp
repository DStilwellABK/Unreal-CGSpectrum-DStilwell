// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoorProject/Public/DoorInteractionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorInteractionComponent() {}
// Cross Module References
	DOORPROJECT_API UClass* Z_Construct_UClass_UDoorInteractionComponent_NoRegister();
	DOORPROJECT_API UClass* Z_Construct_UClass_UDoorInteractionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DoorProject();
// End Cross Module References
	void UDoorInteractionComponent::StaticRegisterNativesUDoorInteractionComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDoorInteractionComponent);
	UClass* Z_Construct_UClass_UDoorInteractionComponent_NoRegister()
	{
		return UDoorInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDoorInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DoorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DoorInteractionComponent.h" },
		{ "ModuleRelativePath", "Public/DoorInteractionComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorInteractionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoorInteractionComponent_Statics::ClassParams = {
		&UDoorInteractionComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorInteractionComponent()
	{
		if (!Z_Registration_Info_UClass_UDoorInteractionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoorInteractionComponent.OuterSingleton, Z_Construct_UClass_UDoorInteractionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDoorInteractionComponent.OuterSingleton;
	}
	template<> DOORPROJECT_API UClass* StaticClass<UDoorInteractionComponent>()
	{
		return UDoorInteractionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorInteractionComponent);
	struct Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorInteractionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorInteractionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDoorInteractionComponent, UDoorInteractionComponent::StaticClass, TEXT("UDoorInteractionComponent"), &Z_Registration_Info_UClass_UDoorInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoorInteractionComponent), 2133853789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorInteractionComponent_h_4272571380(TEXT("/Script/DoorProject"),
		Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorInteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorInteractionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS