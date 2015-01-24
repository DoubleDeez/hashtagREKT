// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#define TILE_MAP_SIZE 64

#include "GameFramework/Actor.h"
#include "TileGenerator.generated.h"

/**
 *
 */
UCLASS()
class GAMEJAM2015_API ATileGenerator : public AActor
{
	GENERATED_BODY()

	ATileGenerator(const FObjectInitializer& ObjectInitializer);

public:
	UPROPERTY(BlueprintReadOnly, Category = Generation)
		TArray<int32> TileMap;

	UPROPERTY(BlueprintReadOnly, Category = Generation)
		int32 TileLength;
};
