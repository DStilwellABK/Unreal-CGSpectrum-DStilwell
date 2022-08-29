// Fill out your copyright notice in the Description page of Project Settings.


#include "SlidingDoorComponent.h"

// Sets default values for this component's properties
USlidingDoorComponent::USlidingDoorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void USlidingDoorComponent::OpenDoor() {
	CurrentMovementTime = 0;
	SetupDoorState(DoorStates::DOOR_MOVING, DoorStates::DOOR_OPEN);
	StartPosition = GetOwner()->GetActorLocation();
	FinalPositon = GetOwner()->GetActorLocation() + PositionToMoveTo;
}

void USlidingDoorComponent::CloseDoor() {
	CurrentMovementTime = 0;
	SetupDoorState(DoorStates::DOOR_MOVING, DoorStates::DOOR_CLOSED);
	StartPosition = GetOwner()->GetActorLocation();
	FinalPositon = OriginalPosition;
}

void USlidingDoorComponent::SetupDoor() {
	OriginalPosition = GetOwner()->GetActorLocation();
}

void USlidingDoorComponent::DoorIsMoving(float DeltaTime) {
	if (CurrentMovementTime < TimeForDoorToSwitchToNextState) {
		//UE_LOG(LogTemp, Warning, TEXT("We are Sliding the door right now."))
		CurrentMovementTime += DeltaTime;
		const float RotationAlpha = FMath::Clamp(CurrentMovementTime / TimeForDoorToSwitchToNextState, 0.0f, 1.0f);
		const FVector CurrentPosition = FMath::Lerp(StartPosition, FinalPositon, RotationAlpha);
		GetOwner()->SetActorLocation(CurrentPosition);
	}
	else {
		if (DoorState == DoorStates::DOOR_MOVING) {
			DoorState = NextDoorState;

			if (DoorState == DoorStates::DOOR_OPEN) UE_LOG(LogTemp, Warning, TEXT("We set door to Open state, it's working here"));
		}
	}
}
