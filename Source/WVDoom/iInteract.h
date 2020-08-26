// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UObject/Interface.h"
#include "iInteract.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UiInteract : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class WVDOOM_API IiInteract
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
	void OnInteract(AActor* PlayerActor);
};
