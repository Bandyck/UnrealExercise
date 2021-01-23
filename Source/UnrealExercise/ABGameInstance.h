// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UnrealExercise.h"
#include "Engine/GameInstance.h"
#include "ABGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class UNREALEXERCISE_API UABGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UABGameInstance();
	
	virtual void Init() override;
};
