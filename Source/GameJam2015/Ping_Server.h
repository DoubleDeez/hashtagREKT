// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "Ping_Server.generated.h"

/**
 * 
 */
UCLASS()
class GAMEJAM2015_API UPing_Server : public UUserWidget
{
	GENERATED_BODY()
	
	UPing_Server(const FObjectInitializer& ObjectInitializer);
	
public:
	UFUNCTION(BlueprintCallable, Category = Ping)

	bool ping_server(FString ipAddress);
};
