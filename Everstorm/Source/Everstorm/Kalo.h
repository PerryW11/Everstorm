// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "Kalo.generated.h"


class USkeletalMeshComponent;

UCLASS()
class EVERSTORM_API AKalo : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AKalo();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities")
	UCapsuleComponent* CapsuleComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void TurnAtRate(float Value);
	void LookUpAtRate(float Value);

	void PrimaryFire();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities")
	float PrimaryCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	float BaseTurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	float BaseLookUpAtRate;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = "Trace")
	float TraceDistance = 1000.0f;


private:
	


	


};
