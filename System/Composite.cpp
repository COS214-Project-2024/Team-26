#include "Composite.h"

Composite::Composite() : Component(){
	this->components = std::vector<std::vector<Component*>>();
}

Iterator* Composite::createIterator() {
	// TODO - implement Composite::createIterator
	throw "Not yet implemented";
}

void Composite::add(Component* component, int x, int y) {
    if (x >= components.size()) {
        components.resize(x + 1); // Resize
    }
    if (y >= components[x].size()) {
        components[x].resize(y + 1); // Resize
    }
    components[x][y] = component;
}

void Composite::remove(Component* component, int x, int y) {
    if (x < components.size() && y < components[x].size()) {
        if (components[x][y] == component) {
            components[x][y] = nullptr;
        }
    }
}

Component* Composite::getComponent(int x, int y) {
    if (x < components.size() && y < components[x].size()) {
        return components[x][y];
    }
    return nullptr;
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

int Composite::lengthX() const{
	return components.size();
}

int Composite::lengthY() const{
	return components[0].size();
}