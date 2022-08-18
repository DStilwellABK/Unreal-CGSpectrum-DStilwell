// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorInteractionComponent.h"
#include "DoorActor.h"

// Sets default values for this component's properties
UDoorInteractionComponent::UDoorInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}




void UDoorInteractionComponent::BindToInput()
{
	// Initialize our component
	GetOwner()->InputComponent = NewObject<UInputComponent>(GetOwner());
	GetOwner()->InputComponent->RegisterComponent();
	if (GetOwner()->InputComponent)
	{
		GetOwner()->EnableInput(GetOwner()->GetWorld()->GetFirstPlayerController());
	}
}


void UDoorInteractionComponent::Use() {
	if (doorState != DoorStates::DOOR_MOVING && IsInTriggerBox) {

		if (doorState == DoorStates::DOOR_OPEN) {
			UE_LOG(LogTemp, Warning, TEXT("DOOR STATE IS SET TO MOVING, AND WE ARE CLOSING THE DOOR"));
			nextDoorState = DoorStates::DOOR_CLOSED;
			ToggleDoor(closeDoorRotation);
		}
		// If  we're closed, open.
		else {
			UE_LOG(LogTemp, Warning, TEXT("DOOR STATE IS SET TO MOVING, AND WE ARE OPENING THE DOOR"));
			nextDoorState = DoorStates::DOOR_OPEN;
			ToggleDoor(openDoorRotation);
		}


		doorState = DoorStates::DOOR_MOVING;
	}
}


void UDoorInteractionComponent::ToggleDoor(FRotator rotation) {
	StartRotation = GetOwner()->GetActorRotation();
	CurrentRotationTime = 0.0f;
	FinalRotation = rotation;
}

// Called when the game starts, our void Start() in terms of unity
void UDoorInteractionComponent::BeginPlay()
{
	Super::BeginPlay();




	PlayerIsInRange = false;
	BindToInput();
	if (GetOwner()->InputComponent) {
		//UE_LOG(LogTemp, Warning, TEXT("Input Component does exist, we're setting Use to the use function on ADoorActor class"));
		GetOwner()->InputComponent->BindAction("Use", IE_Pressed, this, &UDoorInteractionComponent::Use);
	}


	if (!StartDoorOpen) {
		doorState = DoorStates::DOOR_CLOSED;
		UE_LOG(LogTemp, Warning, TEXT("DOOR IS STARTING AS CLOSED"));
	}
	else {
		doorState = DoorStates::DOOR_OPEN;
		nextDoorState = DoorStates::DOOR_OPEN;
		UE_LOG(LogTemp, Warning, TEXT("DOOR IS STARTING AS OPEN"));
		//FinalRotation=

			//DesiredRotation = openDoorRotation;
		FinalRotation = openDoorRotation;
		GetOwner()->SetActorRotation(FinalRotation);
	}

	
	//if ()
	// ...
	
}


void UDoorInteractionComponent::DoorIsMoving(float DeltaTime) {
	// Calculate the rotation based on the speed * deltatime.


	if (CurrentRotationTime < TimeToRotate) {
		//UE_LOG(LogTemp, Warning, TEXT("We are rotating the door right now."))
		CurrentRotationTime += DeltaTime;
		const float RotationAlpha = FMath::Clamp(CurrentRotationTime / TimeToRotate, 0.0f, 1.0f);
		const FRotator CurrentRotation = FMath::Lerp(StartRotation, FinalRotation, RotationAlpha);
		GetOwner()->SetActorRotation(CurrentRotation);
	}
	else {
		if (doorState == DoorStates::DOOR_MOVING) {
			doorState = nextDoorState;

			if (doorState == DoorStates::DOOR_OPEN) UE_LOG(LogTemp, Warning, TEXT("We set door to Open state, it's working here"));
		}
	}
}




// Called every frame, Our void Update() in terms of Unity
void UDoorInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	ADoorActor* parentActor = (ADoorActor*)GetOwner();
	if (parentActor->TriggerBox && GetOwner()->GetWorld() && GetOwner()->GetWorld()->GetFirstLocalPlayerFromController()) {
		APawn* PlayerPawn = GetOwner()->GetWorld()->GetFirstPlayerController()->GetPawn();
		IsInTriggerBox = PlayerPawn && parentActor->TriggerBox->IsOverlappingActor(PlayerPawn);
	}


	DoorIsMoving(DeltaTime);
	// ...
}

//void UDoorInteractionComponent::SetupDoorInputComponent(class UInputComponent* PlayerInputComponent) {
//
//}

