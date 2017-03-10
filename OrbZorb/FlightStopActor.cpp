// Fill out your copyright notice in the Description page of Project Settings.

#include "OrbZorb.h"
#include "FlightStopActor.h"


// Sets default values
AFlightStopActor::AFlightStopActor()
{
	FlightStop = CreateDefaultSubobject<UStaticMeshComponent>(FName("FlightStop"));
	SetRootComponent(FlightStop);

	//Init splines
	NextFlightStop = CreateDefaultSubobject<USplineComponent>(FName("SplineComp"));
	PreviousFlightStop = CreateDefaultSubobject<USplineComponent>(FName("PreviousFlightStop"));

	//Attach them to root component
	NextFlightStop->SetupAttachment(FlightStop);
	PreviousFlightStop->SetupAttachment(FlightStop);

}

