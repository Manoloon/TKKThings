// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TKK_projectHUD.generated.h"

UCLASS()
class ATKK_projectHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATKK_projectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

