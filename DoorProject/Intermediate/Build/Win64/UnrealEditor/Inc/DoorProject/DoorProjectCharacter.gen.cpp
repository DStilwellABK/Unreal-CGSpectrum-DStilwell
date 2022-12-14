// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoorProject/DoorProjectCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorProjectCharacter() {}
// Cross Module References
	DOORPROJECT_API UFunction* Z_Construct_UDelegateFunction_DoorProject_OnUseItem__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DoorProject();
	DOORPROJECT_API UClass* Z_Construct_UClass_ADoorProjectCharacter_NoRegister();
	DOORPROJECT_API UClass* Z_Construct_UClass_ADoorProjectCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DOORPROJECT_API UClass* Z_Construct_UClass_UHudWidget_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DoorProject_OnUseItem__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DoorProject_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declaration of the delegate that will be called when the Primary Action is triggered\n// It is declared as dynamic so it can be accessed also in Blueprints\n" },
		{ "ModuleRelativePath", "DoorProjectCharacter.h" },
		{ "ToolTip", "Declaration of the delegate that will be called when the Primary Action is triggered\nIt is declared as dynamic so it can be accessed also in Blueprints" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DoorProject_OnUseItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DoorProject, nullptr, "OnUseItem__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DoorProject_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DoorProject_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DoorProject_OnUseItem__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DoorProject_OnUseItem__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ADoorProjectCharacter::StaticRegisterNativesADoorProjectCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoorProjectCharacter);
	UClass* Z_Construct_UClass_ADoorProjectCharacter_NoRegister()
	{
		return ADoorProjectCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ADoorProjectCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HudWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HudWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUseItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUseItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractLineTraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractLineTraceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponCooldownTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponCooldownTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmoCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxAmmoCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmoInClip_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxAmmoInClip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteAmmo_MetaData[];
#endif
		static void NewProp_InfiniteAmmo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InfiniteAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteMaxAmmo_MetaData[];
#endif
		static void NewProp_InfiniteMaxAmmo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InfiniteMaxAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasWeapon_MetaData[];
#endif
		static void NewProp_HasWeapon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMaxAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentMaxAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmoCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentAmmoCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorProjectCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DoorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorProjectCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DoorProjectCharacter.h" },
		{ "ModuleRelativePath", "DoorProjectCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorProjectCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorProjectCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorProjectCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorProjectCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "Class Types" },
		{ "ModuleRelativePath", "DoorProjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorProjectCharacter, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_HudWidget_MetaData[] = {
		{ "Category", "Runtime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorProjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_HudWidget = { "HudWidget", nullptr, (EPropertyFlags)0x00200800000a0809, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorProjectCharacter, HudWidget), Z_Construct_UClass_UHudWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_HudWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_HudWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "DoorProjectCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorProjectCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_OnUseItem_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Delegate to whom anyone can subscribe to receive this event */" },
		{ "ModuleRelativePath", "DoorProjectCharacter.h" },
		{ "ToolTip", "Delegate to whom anyone can subscribe to receive this event" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_OnUseItem = { "OnUseItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorProjectCharacter, OnUseItem), Z_Construct_UDelegateFunction_DoorProject_OnUseItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_OnUseItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_OnUseItem_MetaData)) }; // 573616971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InteractLineTraceLength_MetaData[] = {
		{ "Category", "DoorProjectCharacter" },
		{ "ModuleRelativePath", "DoorProjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InteractLineTraceLength = { "InteractLineTraceLength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorProjectCharacter, InteractLineTraceLength), METADATA_PARAMS(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InteractLineTraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InteractLineTraceLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_WeaponCooldownTimer_MetaData[] = {
		{ "Category", "DoorProjectCharacter" },
		{ "Comment", "// Set the weapon shooting cooldown timer.\n" },
		{ "ModuleRelativePath", "DoorProjectCharacter.h" },
		{ "ToolTip", "Set the weapon shooting cooldown timer." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_WeaponCooldownTimer = { "WeaponCooldownTimer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorProjectCharacter, WeaponCooldownTimer), METADATA_PARAMS(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_WeaponCooldownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_WeaponCooldownTimer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_MaxAmmoCount_MetaData[] = {
		{ "Category", "DoorProjectCharacter" },
		{ "ModuleRelativePath", "DoorProjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_MaxAmmoCount = { "MaxAmmoCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorProjectCharacter, MaxAmmoCount), METADATA_PARAMS(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_MaxAmmoCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_MaxAmmoCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_MaxAmmoInClip_MetaData[] = {
		{ "Category", "DoorProjectCharacter" },
		{ "ModuleRelativePath", "DoorProjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_MaxAmmoInClip = { "MaxAmmoInClip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorProjectCharacter, MaxAmmoInClip), METADATA_PARAMS(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_MaxAmmoInClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_MaxAmmoInClip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InfiniteAmmo_MetaData[] = {
		{ "Category", "DoorProjectCharacter" },
		{ "Comment", "// Shoudl we have Infinite Ammo, and never have to reload?\n" },
		{ "ModuleRelativePath", "DoorProjectCharacter.h" },
		{ "ToolTip", "Shoudl we have Infinite Ammo, and never have to reload?" },
	};
#endif
	void Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InfiniteAmmo_SetBit(void* Obj)
	{
		((ADoorProjectCharacter*)Obj)->InfiniteAmmo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InfiniteAmmo = { "InfiniteAmmo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADoorProjectCharacter), &Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InfiniteAmmo_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InfiniteAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InfiniteAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InfiniteMaxAmmo_MetaData[] = {
		{ "Category", "DoorProjectCharacter" },
		{ "Comment", "// Should we have infinite max ammo, but still reload?\n" },
		{ "ModuleRelativePath", "DoorProjectCharacter.h" },
		{ "ToolTip", "Should we have infinite max ammo, but still reload?" },
	};
#endif
	void Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InfiniteMaxAmmo_SetBit(void* Obj)
	{
		((ADoorProjectCharacter*)Obj)->InfiniteMaxAmmo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InfiniteMaxAmmo = { "InfiniteMaxAmmo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADoorProjectCharacter), &Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InfiniteMaxAmmo_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InfiniteMaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InfiniteMaxAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_HasWeapon_MetaData[] = {
		{ "Category", "DoorProjectCharacter" },
		{ "ModuleRelativePath", "DoorProjectCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_HasWeapon_SetBit(void* Obj)
	{
		((ADoorProjectCharacter*)Obj)->HasWeapon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_HasWeapon = { "HasWeapon", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADoorProjectCharacter), &Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_HasWeapon_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_HasWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_HasWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_CurrentMaxAmmo_MetaData[] = {
		{ "Category", "DoorProjectCharacter" },
		{ "ModuleRelativePath", "DoorProjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_CurrentMaxAmmo = { "CurrentMaxAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorProjectCharacter, CurrentMaxAmmo), METADATA_PARAMS(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_CurrentMaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_CurrentMaxAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_CurrentAmmoCount_MetaData[] = {
		{ "Category", "DoorProjectCharacter" },
		{ "ModuleRelativePath", "DoorProjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_CurrentAmmoCount = { "CurrentAmmoCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorProjectCharacter, CurrentAmmoCount), METADATA_PARAMS(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_CurrentAmmoCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_CurrentAmmoCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorProjectCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_HudWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_OnUseItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InteractLineTraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_WeaponCooldownTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_MaxAmmoCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_MaxAmmoInClip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InfiniteAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_InfiniteMaxAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_HasWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_CurrentMaxAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorProjectCharacter_Statics::NewProp_CurrentAmmoCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorProjectCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorProjectCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoorProjectCharacter_Statics::ClassParams = {
		&ADoorProjectCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADoorProjectCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADoorProjectCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorProjectCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoorProjectCharacter()
	{
		if (!Z_Registration_Info_UClass_ADoorProjectCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoorProjectCharacter.OuterSingleton, Z_Construct_UClass_ADoorProjectCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoorProjectCharacter.OuterSingleton;
	}
	template<> DOORPROJECT_API UClass* StaticClass<ADoorProjectCharacter>()
	{
		return ADoorProjectCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorProjectCharacter);
	struct Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoorProjectCharacter, ADoorProjectCharacter::StaticClass, TEXT("ADoorProjectCharacter"), &Z_Registration_Info_UClass_ADoorProjectCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorProjectCharacter), 42253410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_2739832148(TEXT("/Script/DoorProject"),
		Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_DoorProjectCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
