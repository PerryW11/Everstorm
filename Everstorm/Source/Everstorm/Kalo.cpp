// Fill out your copyright notice in the Description page of Project Settings.


#include "Kalo.h"
#include "DrawDebugHelpers.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "Camera/CameraComponent.h"


// Sets default values
AKalo::AKalo()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// Basic movement input speeds
	BaseTurnRate = 45.0f;
	BaseLookUpAtRate = 45.0f;

	// Setting up initial cooldown for primary ability
	PrimaryCooldown = 2.0f;
	
	FName HeadSocket = TEXT("Head");

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	CapsuleComp->SetupAttachment(RootComponent);
	

}

// Called when the game starts or when spawned
void AKalo::BeginPlay()
{
	Super::BeginPlay();	
}

void AKalo::MoveForward(float Value)
{
	if (Controller && Value != 0.0f)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AKalo::MoveRight(float value)
{
	if (Controller && value != 0.0f)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, value);
	}
}

void AKalo::TurnAtRate(float Value)
{
	AddControllerYawInput(Value * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AKalo::LookUpAtRate(float Value)
{
	AddControllerPitchInput(Value * BaseLookUpAtRate * GetWorld()->GetDeltaSeconds());
}

// Called every frame
void AKalo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AKalo::PrimaryFire()
{
	//CapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &)
	
}




// Called to bind functionality to input
void AKalo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("PrimaryFire", IE_Pressed, this, &AKalo::PrimaryFire);

	PlayerInputComponent->BindAxis("MoveForward", this, &AKalo::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AKalo::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Lookup", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AKalo::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AKalo::LookUpAtRate);


}

