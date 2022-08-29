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




// Called when the game starts, our void Start() in terms of unity
void UDoorInteractionComponent::BeginPlay()
{
	Super::BeginPlay();
	SetupDoor();
	DoorLocked = DoorStartsLocked;
	PlayerIsInRange = false;

	if (GetOwner()->InputComponent) {
		GetOwner()->InputComponent->BindAction("Use", IE_Pressed, this, &UDoorInteractionComponent::Use);
	}
	SetupInput();

	if (StartDoorOpen) {
		SetupDoorState(DoorStates::DOOR_OPEN, DoorStates::DOOR_OPEN);
		OpenDoor();
	}
	else {
		SetupDoorState(DoorStates::DOOR_CLOSED, DoorStates::DOOR_CLOSED);
	}


}




void UDoorInteractionComponent::LockDoor(bool AutoClose) {
	if (DoorState == DoorStates::DOOR_OPEN && AutoClose) {
		CloseDoor();
	}
	DoorLocked = true;
}

void UDoorInteractionComponent::UnlockDoor(bool AutoOpen) {
	if (DoorState == DoorStates::DOOR_CLOSED && AutoOpen) {
		OpenDoor();
	}
	DoorLocked = false;
}


// Called every frame, Our void Update() in terms of Unity
void UDoorInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	ADoorActor* parentActor = (ADoorActor*)GetOwner();


	//if (parentActor->TriggerBox && GetOwner()->GetWorld() && GetOwner()->GetWorld()->GetFirstLocalPlayerFromController()) {
		//APawn* PlayerPawn = GetOwner()->GetWorld()->GetFirstPlayerController()->GetPawn();
		//IsInTriggerBox = PlayerPawn && parentActor->TriggerBox->IsOverlappingActor(PlayerPawn);

	if (parentActor->TriggerBox && parentActor->TriggerBox->IsInTrigger) {
		PlayerIsInRange = parentActor->TriggerBox->IsInTrigger;
		if (Automatic) {
			ToggleDoor(true);
		}
	}

	if (CloseDoorAutomaticallyTime > 0) {
		if (TimeUntilDoorCloses > 0) {
			// Did we close before the timer could finish auto closing the door?
			if (DoorStates::DOOR_OPEN) {
				TimeUntilDoorCloses -= DeltaTime;
			}
			else {
				TimeUntilDoorCloses = 0;
			}
		}
		else if (DoorState == DoorStates::DOOR_OPEN) {
			CloseDoor();
		}
	}

	DoorIsMoving(DeltaTime);
	// ...
}

void UDoorInteractionComponent::SetupDoorState(DoorStates doorStateToSet, DoorStates nextDoorStateToSet) {
	DoorState = doorStateToSet;
	NextDoorState = nextDoorStateToSet;
}

void UDoorInteractionComponent::Use() {
	if ((OpenByUseKey || CloseByUseKey) && DoorState != DoorStates::DOOR_MOVING && IsInTriggerBox) ToggleDoor(false);
}

void UDoorInteractionComponent::ToggleDoor(bool DoneAutomatically) {
	// If we're not togglable, don't toggle the door please.
	UE_LOG(LogTemp, Warning, TEXT("Toggle door is activated"));
	if (DoorState == DoorStates::DOOR_OPEN && !IsDoorToggable) {
		UE_LOG(LogTemp, Warning, TEXT("We are not closing the door cause IsDoorToggable is not set to true"));
		return;
	}

	if (CloseDoorAutomaticallyTime > 0 && DoorState == DoorStates::DOOR_OPEN) TimeUntilDoorCloses = CloseDoorAutomaticallyTime;


	UE_LOG(LogTemp, Warning, TEXT("Checking if door state is currently set to open or closed"));
	if (DoorState == DoorStates::DOOR_OPEN) {
		if (!CloseByUseKey && !DoneAutomatically) return;

		UE_LOG(LogTemp, Warning, TEXT("Door is open, closing."));
		NextDoorState = DoorStates::DOOR_CLOSED;
		CloseDoor();
	}
	// If  we're closed, open.
	else {
		if (!OpenByUseKey && !DoneAutomatically) return;
		UE_LOG(LogTemp, Warning, TEXT("Door is closed, opening."));
		NextDoorState = DoorStates::DOOR_OPEN;
		OpenDoor();
	}


	DoorState = DoorStates::DOOR_MOVING;
}
// These are to avoid errors in compile.
void UDoorInteractionComponent::OpenDoor() {}
void UDoorInteractionComponent::CloseDoor() {}
void UDoorInteractionComponent::SetupDoor() {}
void UDoorInteractionComponent::DoorIsMoving(float DeltaTime) {}

void UDoorInteractionComponent::SetupInput() {
	BindToInput();
	if (GetOwner()->InputComponent) {
		//UE_LOG(LogTemp, Warning, TEXT("Input Component does exist, we're setting Use to the use function on ADoorActor class"));
		GetOwner()->InputComponent->BindAction("Use", IE_Pressed, this, &UDoorInteractionComponent::Use);
	}
}

//void UDoorInteractionComponent::SetupDoorInputComponent(class UInputComponent* PlayerInputComponent) {
//
//}

