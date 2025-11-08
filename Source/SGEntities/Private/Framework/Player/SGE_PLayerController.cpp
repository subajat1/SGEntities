// All rights reserved. Subajat Games 2025.


#include "Framework/Player/SGE_PLayerController.h"

ASGE_PLayerController::ASGE_PLayerController(const FObjectInitializer& objectInitializer)
	: Super(objectInitializer)
{
}

void ASGE_PLayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void ASGE_PLayerController::Select()
{
}

void ASGE_PLayerController::SelectHold()
{
}

void ASGE_PLayerController::SelectEnd()
{
}

void ASGE_PLayerController::Command()
{
}

void ASGE_PLayerController::CommandHold()
{
}

void ASGE_PLayerController::CommandEnd()
{
}

void ASGE_PLayerController::SetModifier(const ESGC_InputModifierKey newModifier)
{
}
