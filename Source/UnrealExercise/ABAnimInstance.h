// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UnrealExercise.h"
#include "Animation/AnimInstance.h"
#include "ABAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class UNREALEXERCISE_API UABAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UABAnimInstance();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float CurrentPawnSpeed;
};
