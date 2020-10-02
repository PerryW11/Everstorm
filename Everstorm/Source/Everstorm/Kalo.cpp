// Fill out your copyright notice in the Description page of Project Settings.


#include "Kalo.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h""


// Sets default values
AKalo::AKalo()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SkelMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PlayerMesh"));
	SkelMeshComp->SetupAttachment(RootComponent);

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SkelMeshComp);
	
	BaseTurnRate = 45.0f;
	BaseLookUpAtRate = 45.0f;


}

// Called when the game starts or when spawned
void AKalo::BeginPlay()
{
	Super::BeginPlay();
	
}

void AKalo::MoveForward(float value)
{
	if (Controller && value != 0.0f)
	{
		const FRotator Rotation = Controller->GetControlRotation();
	}
}

void AKalo::MoveRight(float value)
{

}

void AKalo::TurnAtRate(float value)
{

}

void AKalo::LookUpAtRate(float value)
{

}

// Called every frame
void AKalo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AKalo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AKalo::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AKalo::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Lookup", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AKalo::TurnAtRate);
	PlayerInputComponent->BindAxis("LookupRate", this, &AKalo::LookUpAtRate);

}

