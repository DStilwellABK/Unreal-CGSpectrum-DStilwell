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
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//virtual void Use() override;

		
};
