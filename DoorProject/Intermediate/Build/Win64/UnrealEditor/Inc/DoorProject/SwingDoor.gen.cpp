// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoorProject/Public/SwingDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwingDoor() {}
// Cross Module References
	DOORPROJECT_API UClass* Z_Construct_UClass_USwingDoor_NoRegister();
	DOORPROJECT_API UClass* Z_Construct_UClass_USwingDoor();
	DOORPROJECT_API UClass* Z_Construct_UClass_UDoorInteractionComponent();
	UPackage* Z_Construct_UPackage__Script_DoorProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void USwingDoor::StaticRegisterNativesUSwingDoor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USwingDoor);
	UClass* Z_Construct_UClass_USwingDoor_NoRegister()
	{
		return USwingDoor::StaticClass();
	}
	struct Z_Construct_UClass_USwingDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closeDoorRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_closeDoorRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_openDoorRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_openDoorRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRotationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentRotationTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USwingDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDoorInteractionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DoorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwingDoor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SwingDoor.h" },
		{ "ModuleRelativePath", "Public/SwingDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwingDoor_Statics::NewProp_closeDoorRotation_MetaData[] = {
		{ "Category", "SwingDoor" },
		{ "Comment", "//virtual void SetupDoor() override;\n//virtual void Use() override;\n" },
		{ "ModuleRelativePath", "Public/SwingDoor.h" },
		{ "ToolTip", "virtual void SetupDoor() override;\nvirtual void Use() override;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwingDoor_Statics::NewProp_closeDoorRotation = { "closeDoorRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwingDoor, closeDoorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USwingDoor_Statics::NewProp_closeDoorRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwingDoor_Statics::NewProp_closeDoorRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwingDoor_Statics::NewProp_openDoorRotation_MetaData[] = {
		{ "Category", "SwingDoor" },
		{ "ModuleRelativePath", "Public/SwingDoor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwingDoor_Statics::NewProp_openDoorRotation = { "openDoorRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwingDoor, openDoorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USwingDoor_Statics::NewProp_openDoorRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwingDoor_Statics::NewProp_openDoorRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwingDoor_Statics::NewProp_CurrentRotationTime_MetaData[] = {
		{ "Category", "SwingDoor" },
		{ "ModuleRelativePath", "Public/SwingDoor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwingDoor_Statics::NewProp_CurrentRotationTime = { "CurrentRotationTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwingDoor, CurrentRotationTime), METADATA_PARAMS(Z_Construct_UClass_USwingDoor_Statics::NewProp_CurrentRotationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwingDoor_Statics::NewProp_CurrentRotationTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USwingDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwingDoor_Statics::NewProp_closeDoorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwingDoor_Statics::NewProp_openDoorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwingDoor_Statics::NewProp_CurrentRotationTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USwingDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwingDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USwingDoor_Statics::ClassParams = {
		&USwingDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USwingDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USwingDoor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USwingDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USwingDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USwingDoor()
	{
		if (!Z_Registration_Info_UClass_USwingDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USwingDoor.OuterSingleton, Z_Construct_UClass_USwingDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USwingDoor.OuterSingleton;
	}
	template<> DOORPROJECT_API UClass* StaticClass<USwingDoor>()
	{
		return USwingDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwingDoor);
	struct Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_SwingDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_SwingDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USwingDoor, USwingDoor::StaticClass, TEXT("USwingDoor"), &Z_Registration_Info_UClass_USwingDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USwingDoor), 4158529191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_SwingDoor_h_3949685735(TEXT("/Script/DoorProject"),
		Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_SwingDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_SwingDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
