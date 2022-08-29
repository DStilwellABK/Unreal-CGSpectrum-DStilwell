// Fill out your copyright notice in the Description page of Project Settings.


#include "SwingDoor.h"

// Sets default values for this component's properties
USwingDoor::USwingDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
//void USwingDoor::BeginPlay()
//{
//
//	Super::BeginPlay();
//
//
//	// ...
//	
//}

void USwingDoor::OpenDoor() {
	UE_LOG(LogTemp, Warning, TEXT("OPENNING THE DOOR NOW."))
	SetupDoorState(DoorStates::DOOR_MOVING, DoorStates::DOOR_OPEN);
	StartRotation = GetOwner()->GetActorRotation();
	CurrentRotationTime = 0.0f;
	FinalRotation = openDoorRotation;
}

void USwingDoor::CloseDoor() {
	SetupDoorState(DoorStates::DOOR_MOVING, DoorStates::DOOR_CLOSED);
	StartRotation = GetOwner()->GetActorRotation();
	CurrentRotationTime = 0.0f;
	FinalRotation = closeDoorRotation;
}

//void USwingDoor::SetupDoor() {
//	CurrentRotationTime = 1;
//}

//void USwingDoor::Use() {
//
//}

void USwingDoor::DoorIsMoving(float DeltaTime) {
	// Calculate the rotation based on the speed * deltatime.


	if (CurrentRotationTime < TimeForDoorToSwitchToNextState) {
		UE_LOG(LogTemp, Warning, TEXT("We are rotating the door right now."))
		CurrentRotationTime += DeltaTime;
		const float RotationAlpha = FMath::Clamp(CurrentRotationTime / TimeForDoorToSwitchToNextState, 0.0f, 1.0f);
		const FRotator CurrentRotation = FMath::Lerp(StartRotation, FinalRotation, RotationAlpha);
		GetOwner()->SetActorRotation(CurrentRotation);
	}
	else {
		if (DoorState == DoorStates::DOOR_MOVING) {
			DoorState = NextDoorState;

			if (DoorState == DoorStates::DOOR_OPEN) UE_LOG(LogTemp, Warning, TEXT("We set door to Open state, it's working here"));
		}
	}
}

// Called every frame
//void USwingDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
//{
//	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
//
//	DoorIsMoving(DeltaTime);
//	// ...
//}

