// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorInteractionComponent.h"

// Sets default values for this component's properties
UDoorInteractionComponent::UDoorInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDoorInteractionComponent::BeginPlay()
{
	Super::BeginPlay();
	//UE_LOG(LogTemp, Warning, TEXT("Hello"));
	//FRotator DesiredRotation(0.0f, -90.0f, 0.0f);
	//GetOwner()->SetActorRotation(DesiredRotation);
	// ...
	
}


// Called every frame
void UDoorInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FRotator CurrentRotation = GetOwner()->GetActorRotation();
	if (!CurrentRotation.Equals(FinalRotation, 5.0f)) {
		// Calculate the rotation based on the speed * deltatime.
		CurrentRotation += DeltaRotation * DeltaTime;

		// Set the objects rotation or transform.rotation = this
		GetOwner()->SetActorRotation(CurrentRotation);
	}

	// ...
}

