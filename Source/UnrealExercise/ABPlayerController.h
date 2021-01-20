// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UnrealExercise.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class UNREALEXERCISE_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void PostInitializeComponents() override;
	//virtual void Possess(APawn* aPawn) override;
	virtual void OnPossess(APawn* aPawn) override;
};
