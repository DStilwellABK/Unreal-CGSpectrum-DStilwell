// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorActor.h"
//#include "DoorInteractionComponent.h"

// Sets default values
ADoorActor::ADoorActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//InputComponent->BindAxis("MoveForward", this, &ADoorActor::MoveForward);
//	Trigger = CreateDefaultSubobject<USphereComponent>(TEXT("TriggerCollider"));
//
//	// Both colliders need to have this set to true for events to fire
//	Trigger.bGenerateOverlapEvents = true;
//
//	// Set the collision mode for the collider
//	// This mode will only enable the collider for raycasts, sweeps, and overlaps
//	Trigger.SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void ADoorActor::Use() {
	// E key is presed.
	// If we're open, close.
	if (doorState != DoorStates::DOOR_MOVING) {
		doorState = DoorStates::DOOR_MOVING;

		if (doorState == DoorStates::DOOR_OPEN) {
			UE_LOG(LogTemp, Warning, TEXT("DOOR STATE IS SET TO MOVING, AND WE ARE CLOSING THE DOOR"));
			nextDoorState = DoorStates::DOOR_CLOSED;
			ToggleDoor(originalRotation, false);
		}
		// If  we're closed, open.
		else {
			UE_LOG(LogTemp, Warning, TEXT("DOOR STATE IS SET TO MOVING, AND WE ARE OPENING THE DOOR"));
			nextDoorState = DoorStates::DOOR_OPEN;
			ToggleDoor(FRotator(0.0f, -90.0f, 0.0f), true);
		}
	}


}

void ADoorActor::ToggleDoor(FRotator rotation, bool add) {
	DesiredRotation = rotation;

	if (add) FinalRotation = this->GetActorRotation() + DesiredRotation;
	else FinalRotation = this->GetActorRotation() - DesiredRotation;

	doorState = DoorStates::DOOR_MOVING;

	CurrentRotationTime = 0.0f;
}

void ADoorActor::BindToInput()
{
	// Initialize our component
	InputComponent = NewObject<UInputComponent>(this);
	InputComponent->RegisterComponent();
	if (InputComponent)
	{
		EnableInput(GetWorld()->GetFirstPlayerController());
	}
}

// Called when the game starts or when spawned
void ADoorActor::BeginPlay()
{
	Super::BeginPlay();
	PlayerIsInRange = false;
	BindToInput();
	if (InputComponent) {
		UE_LOG(LogTemp, Warning, TEXT("Input Component does exist, we're setting Use to the use functionn on ADoorActor class"));
		InputComponent->BindAction("Use", IE_Pressed, this, &ADoorActor::Use);
	}
	// Start with getting the original rotation of the door.
	originalRotation = this->GetActorRotation();

	
	//UE_LOG(LogTemp, Warning, TEXT(originalRotation.ToString()));

	// Do we want to start with the door open? If no, keep the final rotation set to the orginial rotation. Else set it to open, and don't do the 
	// programmed animation.
	//TODO: Fix this so that it's in one function instead of duplicated code.
	if (!startDoorOpen) {
		doorState = DoorStates::DOOR_CLOSED;
	}
	else {
		doorState = DoorStates::DOOR_OPEN;
		nextDoorState = DoorStates::DOOR_OPEN;
		//FinalRotation=

		DesiredRotation = FRotator(0.0f, -90.0f, 0.0f);
		FinalRotation = this->GetActorRotation() + DesiredRotation;
		this->SetActorRotation(FinalRotation);
	}

}

bool ADoorActor::DoorIsMoving(float DeltaTime) {
	// Calculate the rotation based on the speed * deltatime.

	if (CurrentRotationTime < TimeToRotate) {
		CurrentRotationTime += DeltaTime;
		const float RotationAlpha = FMath::Clamp(CurrentRotationTime / TimeToRotate, 0.0f, 1.0f);
		const FRotator CurrentRotation = FMath::Lerp(StartRotation, FinalRotation, RotationAlpha);
		this->SetActorRotation(CurrentRotation);
	}
	else {
		if (doorState == DoorStates::DOOR_MOVING) {
			if (nextDoorState == DoorStates::DOOR_OPEN) {
				UE_LOG(LogTemp, Warning, TEXT("Setting to Open"));
			}
			else UE_LOG(LogTemp, Warning, TEXT("Setting to closed"));
			
			doorState = nextDoorState;
		}
	}
	return doorState == DoorStates::DOOR_MOVING;
}

// Called every frame, Update function
void ADoorActor::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);

	DoorIsMoving(DeltaTime);

}

