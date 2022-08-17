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


// Called when the game starts, our void Start() in terms of unity
void UDoorInteractionComponent::BeginPlay()
{
	Super::BeginPlay();
	//UE_LOG(LogTemp, Warning, TEXT("Hello"));
	//originalRotation = GetOwner()->GetActorRotation();
	
	//if ()
	// ...
	
}




// Called every frame, Our void Update() in terms of Unity
void UDoorInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

//void UDoorInteractionComponent::SetupDoorInputComponent(class UInputComponent* PlayerInputComponent) {
//
//}

