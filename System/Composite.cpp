#include "Composite.h"

Composite::Composite() : Component(){
	this->components = std::vector<Component*>();
}

Iterator* Composite::createIterator() {
	// TODO - implement Composite::createIterator
	throw "Not yet implemented";
}

void Composite::add(Component* component) {
	for (int i = 0; i < this->components.size(); i++){
		if (this->components.at(i) == component){
			return;
		}
	}
	this->components.push_back(component);
}

void Composite::remove(Component* component) {
	for (int i = 0; i < this->components.size(); i++){
		if (this->components.at(i) == component){
			this->components.erase(this->components.begin() + i);
			break;
		}
    }
}

int Composite::getTotalPowerConsumption() {
	// TODO - implement Composite::getTotalPowerConsumption
	throw "Not yet implemented";
}

int Composite::getTotalWaterConsumption() {
	// TODO - implement Composite::getTotalWaterConsumption
	throw "Not yet implemented";
}

int Composite::getTotalCostConsumption() {
	// TODO - implement Composite::getTotalCostConsumption
	throw "Not yet implemented";
}

int Composite::getTotalSewageConsumption() {
	// TODO - implement Composite::getTotalSewageConsumption
	throw "Not yet implemented";
}

int Composite::getTotalWasteConsumption() {
	// TODO - implement Composite::getTotalWasteConsumption
	throw "Not yet implemented";
}

int Composite::getTotalPowerProduction() {
	// TODO - implement Composite::getTotalPowerProduction
	throw "Not yet implemented";
}

int Composite::getTotalWaterProduction() {
	// TODO - implement Composite::getTotalWaterProduction
	throw "Not yet implemented";
}

int Composite::getTotalRevenue() {
	// TODO - implement Composite::getTotalRevenue
	throw "Not yet implemented";
}

int Composite::getTotalSewageProduction() {
	// TODO - implement Composite::getTotalSewageProduction
	throw "Not yet implemented";
}

int Composite::getTotalWasteProduction() {
	// TODO - implement Composite::getTotalWasteProduction
	throw "Not yet implemented";
}

BuildingState* Composite::getAndSetNextState() {
	// TODO - implement Composite::getAndSetNextState
	throw "Not yet implemented";
}