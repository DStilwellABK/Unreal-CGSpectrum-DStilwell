// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "Engine/TriggerBox.h"
#include "Engine/World.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DoorInteractionComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DOORPROJECT_API UDoorInteractionComponent : public UActorComponent
{
	GENERATED_BODY()
	


public:	
	// Sets default values for this component's properties
	UDoorInteractionComponent();
	enum DoorStates {
		DOOR_CLOSED,
		DOOR_OPEN,
		DOOR_MOVING
	};

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//void BindToInput();
	//void SetupInput();
	virtual void DoorIsMoving(float DeltaTime);
	void SetupDoorState(DoorStates doorStateToSet, DoorStates nextDoorStateToSet);

	float TimeUntilDoorCloses = 0;
	bool DoorLocked = false;



public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void ToggleDoor(bool DoneAutomatically);
	void Use();
	virtual void OpenDoor();
	virtual void CloseDoor();
	virtual void SetupDoor();
	//virtual void SetupDoor();

	void UnlockDoor(bool AutoOpen);
	void LockDoor(bool AutoClose);


	//virtual void SetupDoorInputComponent(class UInputComponent* PlayerInputComponent) override;

	DoorStates NextDoorState = DOOR_CLOSED;
	DoorStates DoorState = DOOR_CLOSED;
	
	// This should not be public to details/inspector. This is JUST for debugging.

	
	UPROPERTY(EditAnywhere)
		float TimeForDoorToSwitchToNextState = 1;

	UPROPERTY(EditAnywhere)
		bool IsDoorToggable = true;
	UPROPERTY(EditAnywhere)
		bool StartDoorOpen = false;
	UPROPERTY(EditAnywhere, meta = (ToolTip = "If the door should be autoamtically opned"))
		bool Automatic = false;
	UPROPERTY(EditAnywhere, meta = (Tooltip = "Should the door Open if the player uses the use key?"))
		bool OpenByUseKey = true;
	UPROPERTY(EditAnywhere, meta = (Tooltip = "Should the door Close if the player uses the use key?"))
		bool CloseByUseKey = true;
	UPROPERTY(EditAnywhere)
		bool DoorStartsLocked = false;
	// How much time does it take for the door to automatically close on itself?
	UPROPERTY(EditAnywhere, meta = (ToolTip = "Should the door automatically be closed? If so, for how long should the door remain open?"))
		float CloseDoorAutomaticallyTime = 0;

	//UPROPERTY(EditAnywhere, meta = (ToolTip = "If you want the door to be automatic, how long should the door wait until"))
		//float AutomaticDoorToggleTime = 0
	bool PlayerIsInRange = false;
	bool IsInTriggerBox = false;


	UPROPERTY(EditAnywhere)
		ATriggerBox* TriggerBox = nullptr;


	UFUNCTION()
		void OnBeginOverlap(class AActor* overlappedActor, class AActor* otherActor);

	UFUNCTION()
		void OnExitOverlap(class AActor* overlappedActor, class AActor* otherActor);
};
