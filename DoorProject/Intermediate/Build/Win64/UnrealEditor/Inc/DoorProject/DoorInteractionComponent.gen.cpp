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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeForDoorToSwitchToNextState_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeForDoorToSwitchToNextState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDoorToggable_MetaData[];
#endif
		static void NewProp_IsDoorToggable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDoorToggable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartDoorOpen_MetaData[];
#endif
		static void NewProp_StartDoorOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StartDoorOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Automatic_MetaData[];
#endif
		static void NewProp_Automatic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Automatic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenByUseKey_MetaData[];
#endif
		static void NewProp_OpenByUseKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OpenByUseKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseByUseKey_MetaData[];
#endif
		static void NewProp_CloseByUseKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CloseByUseKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorStartsLocked_MetaData[];
#endif
		static void NewProp_DoorStartsLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoorStartsLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseDoorAutomaticallyTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloseDoorAutomaticallyTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_TimeForDoorToSwitchToNextState_MetaData[] = {
		{ "Category", "DoorInteractionComponent" },
		{ "Comment", "// This should not be public to details/inspector. This is JUST for debugging.\n" },
		{ "ModuleRelativePath", "Public/DoorInteractionComponent.h" },
		{ "ToolTip", "This should not be public to details/inspector. This is JUST for debugging." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_TimeForDoorToSwitchToNextState = { "TimeForDoorToSwitchToNextState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorInteractionComponent, TimeForDoorToSwitchToNextState), METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_TimeForDoorToSwitchToNextState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_TimeForDoorToSwitchToNextState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_IsDoorToggable_MetaData[] = {
		{ "Category", "DoorInteractionComponent" },
		{ "ModuleRelativePath", "Public/DoorInteractionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_IsDoorToggable_SetBit(void* Obj)
	{
		((UDoorInteractionComponent*)Obj)->IsDoorToggable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_IsDoorToggable = { "IsDoorToggable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDoorInteractionComponent), &Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_IsDoorToggable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_IsDoorToggable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_IsDoorToggable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_StartDoorOpen_MetaData[] = {
		{ "Category", "DoorInteractionComponent" },
		{ "ModuleRelativePath", "Public/DoorInteractionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_StartDoorOpen_SetBit(void* Obj)
	{
		((UDoorInteractionComponent*)Obj)->StartDoorOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_StartDoorOpen = { "StartDoorOpen", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDoorInteractionComponent), &Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_StartDoorOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_StartDoorOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_StartDoorOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_Automatic_MetaData[] = {
		{ "Category", "DoorInteractionComponent" },
		{ "ModuleRelativePath", "Public/DoorInteractionComponent.h" },
		{ "ToolTip", "If the door should be autoamtically opned" },
	};
#endif
	void Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_Automatic_SetBit(void* Obj)
	{
		((UDoorInteractionComponent*)Obj)->Automatic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_Automatic = { "Automatic", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDoorInteractionComponent), &Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_Automatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_Automatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_Automatic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_OpenByUseKey_MetaData[] = {
		{ "Category", "DoorInteractionComponent" },
		{ "ModuleRelativePath", "Public/DoorInteractionComponent.h" },
		{ "Tooltip", "Should the door Open if the player uses the use key?" },
	};
#endif
	void Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_OpenByUseKey_SetBit(void* Obj)
	{
		((UDoorInteractionComponent*)Obj)->OpenByUseKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_OpenByUseKey = { "OpenByUseKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDoorInteractionComponent), &Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_OpenByUseKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_OpenByUseKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_OpenByUseKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_CloseByUseKey_MetaData[] = {
		{ "Category", "DoorInteractionComponent" },
		{ "ModuleRelativePath", "Public/DoorInteractionComponent.h" },
		{ "Tooltip", "Should the door Close if the player uses the use key?" },
	};
#endif
	void Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_CloseByUseKey_SetBit(void* Obj)
	{
		((UDoorInteractionComponent*)Obj)->CloseByUseKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_CloseByUseKey = { "CloseByUseKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDoorInteractionComponent), &Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_CloseByUseKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_CloseByUseKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_CloseByUseKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DoorStartsLocked_MetaData[] = {
		{ "Category", "DoorInteractionComponent" },
		{ "ModuleRelativePath", "Public/DoorInteractionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DoorStartsLocked_SetBit(void* Obj)
	{
		((UDoorInteractionComponent*)Obj)->DoorStartsLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DoorStartsLocked = { "DoorStartsLocked", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDoorInteractionComponent), &Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DoorStartsLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DoorStartsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DoorStartsLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_CloseDoorAutomaticallyTime_MetaData[] = {
		{ "Category", "DoorInteractionComponent" },
		{ "ModuleRelativePath", "Public/DoorInteractionComponent.h" },
		{ "ToolTip", "Should the door automatically be closed? If so, for how long should the door remain open?" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_CloseDoorAutomaticallyTime = { "CloseDoorAutomaticallyTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorInteractionComponent, CloseDoorAutomaticallyTime), METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_CloseDoorAutomaticallyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_CloseDoorAutomaticallyTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorInteractionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_TimeForDoorToSwitchToNextState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_IsDoorToggable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_StartDoorOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_Automatic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_OpenByUseKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_CloseByUseKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_DoorStartsLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_CloseDoorAutomaticallyTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorInteractionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoorInteractionComponent_Statics::ClassParams = {
		&UDoorInteractionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDoorInteractionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::PropPointers),
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
		{ Z_Construct_UClass_UDoorInteractionComponent, UDoorInteractionComponent::StaticClass, TEXT("UDoorInteractionComponent"), &Z_Registration_Info_UClass_UDoorInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoorInteractionComponent), 1571388689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorInteractionComponent_h_1108563346(TEXT("/Script/DoorProject"),
		Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorInteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorInteractionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
