// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

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


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	FRotator DesiredRotation;
	FRotator originalRotation;
	FRotator DeltaRotation;
	FRotator FinalRotation;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//virtual void SetupDoorInputComponent(class UInputComponent* PlayerInputComponent) override;


};