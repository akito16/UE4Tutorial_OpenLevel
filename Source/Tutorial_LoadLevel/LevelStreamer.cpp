
#include "LevelStreamer.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

ALevelStreamer::ALevelStreamer()
{
	OverlapVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapVolume"));
	RootComponent = OverlapVolume;
	OnActorBeginOverlap.AddDynamic(this, &ALevelStreamer::OverlapBegins);
	LevelToLoad = "";
}

void ALevelStreamer::OverlapBegins(AActor* MyOverlapActor, AActor* OtherActor) {
	
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Hit")));

	ACharacter* MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	AActor* MyActor = Cast<AActor>(MyCharacter);

	if (OtherActor == MyActor && LevelToLoad != "") {
		FLatentActionInfo LatentInfo;
		UGameplayStatics::OpenLevel(this, LevelToLoad);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("OpenLevel : %s"), *LevelToLoad.ToString()));
	}
}