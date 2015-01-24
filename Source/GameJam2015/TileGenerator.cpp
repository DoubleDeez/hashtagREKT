// Fill out your copyright notice in the Description page of Project Settings.

#include "GameJam2015.h"
#include "TileGenerator.h"
#include "math.h"

ATileGenerator::ATileGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	
	const int32 tMap[TILE_MAP_SIZE] = {
		0, 255, 0, 255, 0, 255, 0, 255,
		255, 0, 255, 0, 255, 0, 255, 0,
		0, 255, 0, 255, 0, 255, 0, 255,
		255, 0, 255, 0, 255, 0, 255, 0,
		0, 255, 0, 255, 0, 255, 0, 255,
		255, 0, 255, 0, 255, 0, 255, 0,
		0, 255, 0, 255, 0, 255, 0, 255,
		255, 0, 255, 0, 255, 0, 255, 0 };
	for (int i = 0; i < (sizeof(tMap) / sizeof(tMap[0])); i++) {
		TileMap.Add(tMap[i]);
	}

	TileLength = (int32)sqrt((double)TILE_MAP_SIZE);
}
