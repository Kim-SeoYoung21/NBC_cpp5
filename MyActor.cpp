// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor() : start(0,0)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
    AMyActor::Move();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::Move()
{
    for (int i = 0; i < 10; i++)
    {
        int nStep = Step();
        start.X += nStep;

        nStep = Step();
        start.Y += nStep;

        // 좌표 로그 출력
        UE_LOG(LogTemp, Warning, TEXT("%d회 이동: (%.0f, %.0f)"), i + 1, start.X, start.X);
    }
}

int AMyActor::Step()
{
	return FMath::RandRange(0, 1);
}