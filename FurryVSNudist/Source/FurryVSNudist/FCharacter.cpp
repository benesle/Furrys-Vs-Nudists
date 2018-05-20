// Fill out your copyright notice in the Description page of Project Settings.
#pragma once


#include "FCharacter.h"
#include "Components/InputComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"


// Sets default values

AFCharacter::AFCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



}


// Called when the game starts or when spawned
void AFCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//// Called to bind functionality to input
//void AFCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
//	/* Movement */
//	InputComponent->BindAxis("Up", this, &AFCharacter::Up);
//	InputComponent->BindAxis("Right", this, &AFCharacter::Right);
//
//	
//	InputComponent->BindAction("Jump", IE_Pressed, this, &AFCharacter::OnStartJump);
//	InputComponent->BindAction("Jump", IE_Released, this, &AFCharacter::OnStopJump);
//
//	}
//
//
//	void AFCharacter::Up(float Val)
//	{
//		if (Controller && Val != 0.f)
//		{
//			// Limit pitch when walking or falling
//			const FRotator Rotation = GetActorRotation();
//			const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
//
//			AddMovementInput(Direction, Val);
//		}
//	}
//
//
//	void AFCharacter::Right(float Val)
//	{
//		if (Val != 0.f)
//		{
//			const FRotator Rotation = GetActorRotation();
//			const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
//			AddMovementInput(Direction, Val);
//		}
//	}
//