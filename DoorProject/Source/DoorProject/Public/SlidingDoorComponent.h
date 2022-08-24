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


public:	
	UPROPERTY(EditAnywhere, meta = (Tooltip = "Where should the door slide to?"))
		FVector PositionToMoveTo = FVector::ZeroVector;
};
