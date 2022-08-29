// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "TriggerBoxActor.generated.h"

/**
 * 
 */
UCLASS()
class DOORPROJECT_API ATriggerBoxActor : public ATriggerBox
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay();

public:
	ATriggerBoxActor();

	bool IsInTrigger = false;

	UFUNCTION()
		void Event(class AActor* overlappedActor, class AActor* otherActor);
};
