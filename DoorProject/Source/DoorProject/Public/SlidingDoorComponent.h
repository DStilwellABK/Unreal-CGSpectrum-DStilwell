// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DoorInteractionComponent.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SlidingDoorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DOORPROJECT_API USlidingDoorComponent : public UDoorInteractionComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USlidingDoorComponent();


protected:
	FVector OriginalPosition = FVector::ZeroVector;
	FVector FinalPositon = FVector::ZeroVector;

	FVector StartPosition = FVector::ZeroVector;

	float CurrentMovementTime = 1;

	virtual void OpenDoor() override;
	virtual void CloseDoor() override;
	virtual void SetupDoor() override;

	virtual void DoorIsMoving(float DeltaTime) override;
public:
	UPROPERTY(EditAnywhere, meta = (Tooltip = "Where should the door slide to?"))
		FVector PositionToMoveTo = FVector::ZeroVector;
};
