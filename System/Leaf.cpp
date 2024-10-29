#include "Leaf.h"

Leaf::Leaf(Building* building){
	this->building = building;
}

Iterator* Leaf::createIterator() {
	throw "Leaf does not support this";
}

void Leaf::add(Component* component) {
	// TODO - implement Leaf::add
	throw "Not yet implemented";
}

void Leaf::remove(Component* component) {
	// TODO - implement Leaf::remove
	throw "Not yet implemented";
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

int Leaf::getTotalSewageConsumption() {
	return this->building->getSewageProduction();
}

int Leaf::getTotalWasteConsumption() {
	// TODO - implement Leaf::getWasteConsumption
	throw "Not yet implemented";
}

int Leaf::getTotalPowerProduction() {
	// TODO - implement Leaf::getTotalPowerProduction
	throw "Not yet implemented";
}

int Leaf::getTotalWaterProduction() {
	// TODO - implement Leaf::getTotalWaterProduction
	throw "Not yet implemented";
}

int Leaf::getTotalRevenue() {
	// TODO - implement Leaf::getTotalRevenue
	throw "Not yet implemented";
}

int Leaf::getTotalSewageProduction() {
	return this->building->getSewageProduction();
}

int Leaf::getTotalWasteProduction() {
	return this->building->getWasteProduction();
}

BuildingState* Leaf::getAndSetNextState() {
	// TODO - implement Leaf::getAndSetNextState still waiting
	throw "Not yet implemented";
}
