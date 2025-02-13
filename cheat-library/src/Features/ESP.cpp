#include "ESP.h"

void ESP::DrawMenuItems()
{
	ImGui::Checkbox("ESP", &bEnabled);
	if (bEnabled) {
		ImGui::Text("ESP Distance");
		ImGui::SliderFloat("##Speed", &fDistance, fMinDistance, fMaxDistance);
	}
}

void ESP::Run(void** args, size_t numArgs)
{
	if (!Initalized)
		return;

	if (numArgs != 1)
	{
		//std::cout << "Too many or too little args passed to GodMode, Destryoing...\n";
		Destroy();
		return;
	}

	//CG::AActor* AcknowledgedPawn = (CG::AActor*)args[0];

	//if (bGodMode && AcknowledgedPawn)
	//{
	//	AcknowledgedPawn->bCanBeDamaged = false;
	//	bOnce = false;
	//}

	//if (!bGodMode && AcknowledgedPawn && !bOnce)
	//{
	//	AcknowledgedPawn->bCanBeDamaged = true;
	//	bOnce = true;
	//}
}
