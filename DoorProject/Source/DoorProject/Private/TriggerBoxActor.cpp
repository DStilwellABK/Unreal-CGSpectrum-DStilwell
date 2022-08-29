// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerBoxActor.h"
ATriggerBoxActor::ATriggerBoxActor() {
	OnActorBeginOverlap.AddDynamic(this, &ATriggerBoxActor::Event);
}

void ATriggerBoxActor::BeginPlay() {
	Super::BeginPlay();
}

void ATriggerBoxActor::Event(class AActor* overlappedActor, class AActor* otherActor) {
	if (otherActor && otherActor != this) {
		UE_LOG(LogTemp, Warning, TEXT("Player is in trigger, yes."));
		IsInTrigger = true;
	}
}

