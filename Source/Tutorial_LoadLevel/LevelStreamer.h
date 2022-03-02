// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Tutorial_LoadLevelCharacter.h"
#include "LevelStreamer.generated.h"

UCLASS()
class TUTORIAL_LOADLEVEL_API ALevelStreamer : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ALevelStreamer();

protected:
	UFUNCTION()
		void OverlapBegins(AActor* MyOverlapActor, AActor* OtherActor);

	UPROPERTY(EditAnywhere)
		FName LevelToLoad;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UBoxComponent* OverlapVolume;

};
