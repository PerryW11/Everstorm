// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Kalo.generated.h"


class UCameraComponent;
class USkeletalMeshComponent;

UCLASS()
class EVERSTORM_API AKalo : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AKalo();

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float value);
	void MoveRight(float value);
	void TurnAtRate(float value);
	void LookUpAtRate(float value);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities")
	float primaryCooldown;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	float BaseTurnRate;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	float BaseLookUpAtRate;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private:
	


	


};
