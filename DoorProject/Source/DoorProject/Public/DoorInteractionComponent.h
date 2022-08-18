// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DoorInteractionComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DOORPROJECT_API UDoorInteractionComponent : public UActorComponent
{
	GENERATED_BODY()
	
	enum DoorStates {
		DOOR_CLOSED,
		DOOR_OPEN,
		DOOR_MOVING
	};

public:	
	// Sets default values for this component's properties
	UDoorInteractionComponent();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void Use();
	void BindToInput();

	DoorStates nextDoorState = DOOR_CLOSED;
	DoorStates doorState = DOOR_CLOSED;

	FRotator DesiredRotation = FRotator::ZeroRotator;
	FRotator originalRotation = FRotator::ZeroRotator;
	FRotator StartRotation = FRotator::ZeroRotator;
	FRotator FinalRotation = FRotator::ZeroRotator;

	float TimeToRotate = 1.0f;

	void DoorIsMoving(float DeltaTime);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void ToggleDoor(FRotator rotation);

	//virtual void SetupDoorInputComponent(class UInputComponent* PlayerInputComponent) override;


	
	UPROPERTY(EditAnywhere)
		float CurrentRotationTime = 1.0f;

	UPROPERTY(EditAnywhere)
		bool IsDoorToggable = true;
	UPROPERTY(EditAnywhere)
		bool StartDoorOpen = false;
	UPROPERTY(EditAnywhere)
		FRotator closeDoorRotation = FRotator::ZeroRotator;
	UPROPERTY(EditAnywhere)
		FRotator openDoorRotation = FRotator::ZeroRotator;


private:
	bool PlayerIsInRange = false;
	bool IsInTriggerBox = false;
};
