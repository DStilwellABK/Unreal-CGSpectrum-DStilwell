// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TriggerBoxActor.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Engine/TriggerBox.h"
#include "Engine/World.h"
#include "DoorActor.generated.h"


UCLASS()
class DOORPROJECT_API ADoorActor : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	ADoorActor();

	//UENUM()


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	//UPROPERTY(EditAnywhere)
	//	FRotator closeDoorRotation = FRotator::ZeroRotator;
	//UPROPERTY(EditAnywhere)
	//	FRotator openDoorRotation = FRotator::ZeroRotator;
	//void BindToInput();

	UPROPERTY(EditAnywhere)
		ATriggerBoxActor* TriggerBox;

};
//class ATriggerBox;
