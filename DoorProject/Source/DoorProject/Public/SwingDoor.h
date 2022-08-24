// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DoorInteractionComponent.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SwingDoor.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DOORPROJECT_API USwingDoor : public UDoorInteractionComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USwingDoor();

protected:
	// Called when the game starts

	FRotator DesiredRotation = FRotator::ZeroRotator;
	FRotator originalRotation = FRotator::ZeroRotator;
	FRotator StartRotation = FRotator::ZeroRotator;
	FRotator FinalRotation = FRotator::ZeroRotator;



public:
	virtual void OpenDoor() override;
	virtual void CloseDoor() override;
	//virtual void SetupDoor() override;
	//virtual void Use() override;

	UPROPERTY(EditAnywhere)
		FRotator closeDoorRotation = FRotator::ZeroRotator;
	UPROPERTY(EditAnywhere)
		FRotator openDoorRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere)
		float CurrentRotationTime = 1.0f;


	virtual void DoorIsMoving(float deltaTime) override;

	// Called every frame

		
};
