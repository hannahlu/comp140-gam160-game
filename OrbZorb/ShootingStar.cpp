// Fill out your copyright notice in the Description page of Project Settings.

#include "OrbZorb.h"
#include "ShootingStar.h"


// Sets default values
AShootingStar::AShootingStar()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShootingStar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShootingStar::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AShootingStar::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

