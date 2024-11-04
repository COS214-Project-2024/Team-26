#include "Leaf.h"

Leaf::Leaf(Building* building){
	this->building = building;
}

int Leaf::getTotalPowerConsumption() {
	return this->building->getPowerConsumption();
}

int Leaf::getTotalWaterConsumption() {
	return this->building->getWaterConsumption();
}

int Leaf::getTotalCostConsumption() {
	return this->building->getCostConsumption();
}

int Leaf::getTotalSewageProduction() {
	return this->building->getSewageProduction();
}

int Leaf::getTotalWasteConsumption() {
	/*if (Waste* wasteBuilding = dynamic_cast<Waste*>(building)){
		return wasteBuilding->getWasteConsumption();
	}*/

	return 0;
}

int Leaf::getTotalPowerProduction() {
	/*if (Power* powerBuilding = dynamic_cast<Power*>(building)){
		return powerBuilding->getPowerProduction();
	}*/

	return 0;
}

int Leaf::getTotalWaterProduction() {
	/*if (Water* waterBuilding = dynamic_cast<Water*>(building)){
		return waterBuilding->getWaterProduction();
	}*/

	return 0;
}

int Leaf::getTotalRevenue() {
	return this->building->getRevenue();
}

int Leaf::getTotalSewageConsumption() {
	/*if (Sewage* SewageBuilding = dynamic_cast<Sewage*>(building)){
		return SewageBuilding->getSewageProduction();
	}*/

	return 0;
}

int Leaf::getTotalWasteProduction() {
	return this->building->getWasteProduction();
}

BuildingState* Leaf::getAndSetNextState() {
	// TODO - implement Leaf::getAndSetNextState still waiting
	throw "Not yet implemented";
	return nullptr;
}