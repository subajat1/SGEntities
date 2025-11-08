// All rights reserved. Subajat Games 2025.

#pragma once

#include "Framework/Interfaces/SGCore_InputInterface.h"
#include "Framework/Player/SGCore_PlayerController.h"
#include "SGE_PLayerController.generated.h"

/**
 * 
 */
UCLASS()
class SGENTITIES_API ASGE_PLayerController : public ASGCore_PlayerController, public ISGCore_InputInterface
{
	GENERATED_BODY()

public:
	ASGE_PLayerController(const FObjectInitializer& objectInitializer = FObjectInitializer::Get());

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public: // ISGCore_InputInterface
	virtual void Select() override;
	virtual void SelectHold() override;
	virtual void SelectEnd() override;
	virtual void Command() override;
	virtual void CommandHold() override;
	virtual void CommandEnd() override;
	virtual void SetModifier(const ESGC_InputModifierKey newModifier) override;
};
