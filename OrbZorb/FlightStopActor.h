// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/SplineComponent.h"
#include "GameFramework/Actor.h"
#include "FlightStopActor.generated.h"

UCLASS()
class ORBZORB_API AFlightStopActor : public AActor
{
	GENERATED_BODY()

protected:
	/* Set previous flight curve */
	UPROPERTY(EditAnywhere)
		UCurveFloat* PreviousFlightCurve;

	/* Set next flight curve */
	UPROPERTY(EditAnywhere)
		UCurveFloat* NextFlightCurve;

	/* Set Static Mesh for Flight Stop */
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* FlightStop;

	/* Set Spline Component for next flight stop */
	UPROPERTY(VisibleAnywhere)
		USplineComponent* NextFlightStop;

	/* Set Spline Component for previous flight stop*/
	UPROPERTY(VisibleAnywhere)
		USplineComponent* PreviousFlightStop;

public:	
	// Sets default values for this actor's properties
	AFlightStopActor();

	/* Return previous flight curve*/
	UCurveFloat* GetPreviousFlightCurve() { return PreviousFlightCurve; };

	/* Return next flight curve*/
	UCurveFloat* GetNextFlightCurve() { return NextFlightCurve; };

	/* Return spline component for next flight stop */
	USplineComponent* GetNextFlightSpineComp() { return NextFlightStop; };

	/* Return spline component for previous flight stop */
	USplineComponent* GetPreviousFlightSpineComp() { return PreviousFlightStop; };

};
