// Copyright Epic Games, Inc. All Rights Reserved.

#include "Misc/OutputDevice.h"
#include "Blueprint/UserWidget.h"
#include "DoorProjectCharacter.h"
#include "DoorProjectProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "DoorInteractionComponent.h"
#include "DoorActor.h"


//////////////////////////////////////////////////////////////////////////
// ADoorProjectCharacter

ADoorProjectCharacter::ADoorProjectCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	TurnRateGamepad = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

}

void ADoorProjectCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	CurrentMaxAmmo = MaxAmmoCount;
	CurrentAmmoCount = MaxAmmoInClip;

	if (IsValid(WidgetClass)) {
		//HudWidget = Cast<UHudWidget>(CreateWidget(GetWorld(), WidgetClass));
		
		if (HudWidget != nullptr) {
			//HudWidget->AddToViewport();
		}
	}
}

//////////////////////////////////////////////////////////////////////////// Input

void ADoorProjectCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("PrimaryAction", IE_Pressed, this, &ADoorProjectCharacter::ToggleFiring);
	PlayerInputComponent->BindAction("PrimaryAction", IE_Released, this, &ADoorProjectCharacter::ToggleFiring);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	// Bind movement events
	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &ADoorProjectCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &ADoorProjectCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "Mouse" versions handle devices that provide an absolute delta, such as a mouse.
	// "Gamepad" versions are for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &ADoorProjectCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &ADoorProjectCharacter::LookUpAtRate);

	PlayerInputComponent->BindAction("Use", IE_Pressed, this, &ADoorProjectCharacter::Interact);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &ADoorProjectCharacter::ReloadWeapon);
}

void ADoorProjectCharacter::OnPrimaryAction()
{
	if (CurrentAmmoCount > 0 && HasWeapon) {
		CanFire = false;
		Timer = WeaponCooldownTimer;
		UE_LOG(LogTemp, Warning, TEXT("Primary action touched"));
		// Trigger the OnItemUsed Event
		OnUseItem.Broadcast();

		if (!InfiniteAmmo)
			CurrentAmmoCount--;
	}
}

void ADoorProjectCharacter::ReloadWeapon() {
	// If the player is out of ammo, and we don't have infinite ammo, then don't reload.
	

	int AmmoToGive = MaxAmmoInClip - CurrentAmmoCount;

	if (AmmoToGive > CurrentMaxAmmo)
		AmmoToGive = CurrentMaxAmmo;

	CurrentAmmoCount += AmmoToGive;

	if (!InfiniteMaxAmmo) {
		if (CurrentMaxAmmo <= 0)
			return;
		else
			CurrentMaxAmmo -= AmmoToGive;
	}
	
}

void ADoorProjectCharacter::ObtainAmmo(int amount) {
	CurrentMaxAmmo += amount;
	if (CurrentMaxAmmo > MaxAmmoCount) CurrentMaxAmmo = MaxAmmoCount;
}

void ADoorProjectCharacter::ToggleFiring() {
	IsShooting = !IsShooting;
}

void ADoorProjectCharacter::Interact() {
	if (FirstPersonCameraComponent == nullptr) return;
	FHitResult HitResult;
	FVector Start = FirstPersonCameraComponent->GetComponentLocation();
	FVector End = Start + FirstPersonCameraComponent->GetForwardVector() * InteractLineTraceLength;

	GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECollisionChannel::ECC_Visibility);

	UE_LOG(LogTemp, Warning, TEXT("Interact was used from Player Character."));
	//GLog->Log(HitResult.GetActor()->GetName());

	ADoorActor* Door = Cast<ADoorActor>(HitResult.GetActor());
	if (Door) {
		UE_LOG(LogTemp, Warning, TEXT("Door exists, now we're seeing if the door interaction component exists on the object."));
		UDoorInteractionComponent* DoorInteractionComponent = Door->FindComponentByClass<UDoorInteractionComponent>();
		if (DoorInteractionComponent) {
			DoorInteractionComponent->Use();
			UE_LOG(LogTemp, Warning, TEXT("Door interaction exists, we're gonna use the Use() function  it now."));
		}
	}
}

void ADoorProjectCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		UE_LOG(LogTemp, Warning, TEXT("Beginning Touch"));
		IsShooting = true;
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void ADoorProjectCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

void ADoorProjectCharacter::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);
	if (CanFire && IsShooting) {
		OnPrimaryAction();
		UE_LOG(LogTemp, Warning, TEXT("Firing Weapon"));
	}
	else
		if (Timer > 0) {
			Timer -= DeltaTime;
		}
		else {
			CanFire = true;
		}
}

void ADoorProjectCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ADoorProjectCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ADoorProjectCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void ADoorProjectCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

bool ADoorProjectCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &ADoorProjectCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &ADoorProjectCharacter::EndTouch);

		return true;
	}
	
	return false;
}
