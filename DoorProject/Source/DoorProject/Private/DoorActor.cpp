// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorActor.h"

//#include "DoorInteractionComponent.h"

// Sets default values
ADoorActor::ADoorActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}




// Called when the game starts or when spawned
void ADoorActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame, Update function
void ADoorActor::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);

}

