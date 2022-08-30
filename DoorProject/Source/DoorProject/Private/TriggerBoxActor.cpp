// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerBoxActor.h"
ATriggerBoxActor::ATriggerBoxActor() {
	//this->OnActorBeginOverlap.AddDynamic(this, &ATriggerBoxActor::OnBeginOverlap);
	//this->OnActorEndOverlap.AddDynamic(this, &ATriggerBoxActor::OnExitOverlap);
}

void ATriggerBoxActor::BeginPlay() {
	Super::BeginPlay();
}

//void ATriggerBoxActor::OnBeginOverlap(class AActor* overlappedActor, class AActor* otherActor) {
//	if (otherActor && otherActor != this) {
//		IsInTrigger = true;
//		UE_LOG(LogTemp, Warning, TEXT("Player is ENTERING the trigger."));
//	}
//}
//
//void ATriggerBoxActor::OnExitOverlap(class AActor* overlappedActor, class AActor* otherActor) {
//	if (otherActor && otherActor != this) {
//		IsInTrigger = false;
//		UE_LOG(LogTemp, Warning, TEXT("Player is EXITING the trigger."));
//	}
//}


