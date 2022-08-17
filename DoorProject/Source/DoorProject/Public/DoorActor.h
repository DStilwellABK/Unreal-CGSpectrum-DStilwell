// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DoorActor.generated.h"

UCLASS()
class DOORPROJECT_API ADoorActor : public AActor
{
	GENERATED_BODY()
	


	//UENUM(BlueprintType)
		enum DoorStates {
		DOOR_CLOSED,
		DOOR_OPEN,
		DOOR_MOVING
	};
	//UPROPERTY()
	//UPrimitiveComponent* Trigger;

	//virtual void NotifyActorBeginOverlap(AActor* Other) override;

	//virtual void NotifyActorEndOverlap(AActor* Other) override;
public:	
	// Sets default values for this actor's properties
	ADoorActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	FRotator DesiredRotation = FRotator::ZeroRotator;
	UPROPERTY(EditAnywhere)
	FRotator originalRotation = FRotator::ZeroRotator;

	FRotator StartRotation = FRotator::ZeroRotator;
	FRotator FinalRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere)
		bool startDoorOpen = false;

	DoorStates nextDoorState = DOOR_CLOSED;
	DoorStates doorState = DOOR_CLOSED;

	UPROPERTY(EditAnywhere)
		float CurrentRotationTime = 0.0f;
	float TimeToRotate = 1.0f;

	bool DoorIsMoving(float DeltaTime);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	void Use();

	


	void BindToInput();
	void ToggleDoor(FRotator rotation, bool add);




private:
	bool PlayerIsInRange;

};
