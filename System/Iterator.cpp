#include "Iterator.h"
#include <iostream>

Iterator::Iterator() {
	this->composite = new Composite();
	this->currentX = 0;
	this->currentY = 0;
}

Iterator::~Iterator() {
	delete this->composite;
}

void Iterator::add(Building* building, int x, int y) {
	// if (x >= this->composite->lengthX() || y >= this->composite->lengthY() || x < 0 || y < 0) {
	// 	return; // Out of bounds
	// }
	if (this->composite->getComponent(x, y) == nullptr) {
		this->composite->add(building, x, y);
	}
}

void Iterator::clear(){
	this->composite->clear();
}

void Iterator::add(Iterator* otherIt){
	for (int i = 0; i < otherIt->lengthX(); i++){
		for (int j = 0; j < otherIt->lengthY(); j++){
			if (this->get(i, j) == nullptr){
				this->add(otherIt->get(i,j), i, j);
			}
		}
	}
}

void Iterator::addWithReplace(Iterator* otherIt) {
	for (int i = 0; i < otherIt->lengthX(); i++) {
		for (int j = 0; j < otherIt->lengthY(); j++) {
			if (this->get(i, j) != nullptr){
				delete otherIt->get(i, j);
				this->add(otherIt->get(i,j), i, j);
			}
		}
	}
}

Building* Iterator::current() {
	return composite->getComponent(currentX, currentY);
}

Building* Iterator::first() {
	return composite->getComponent(0, 0);
}

Building* Iterator::get(int locationX, int locationY) {
	return composite->getComponent(locationX, locationY);
}

bool Iterator::hasNextX() {
	if (this->composite->getComponent(this->currentX + 1, this->currentY) != nullptr) {
		return true;
	} else {
		return false;
	}
}

bool Iterator::hasNextY() {
	if (this->composite->getComponent(this->currentX, this->currentY + 1) != nullptr) {
		return true;
	} else {
		return false;
	}
}

int Iterator::lengthX() {
	return composite->lengthX();
}

int Iterator::lengthY() {
	return composite->lengthY();
}

Building* Iterator::next() {
	if (currentX + 1 < MAXX){
		currentX++;
		return composite->getComponent(currentX, currentY);
	} else {
		if (currentY + 1 < MAXY) {
			currentY++;
			currentX = 0;
			return composite->getComponent(currentX, currentY);
		} else {
			return nullptr;
		}
	}
}

void Iterator::reset(){
	currentX = 0;
	currentY = 0;
}

Building* Iterator::previous() {
	if (currentX == 0 && currentY == 0) {
		return nullptr;
	} else {
		if (currentX > 0) {
			return composite->getComponent(currentX - 1, currentY);
		} else {
			if (currentY > 0) {
				return composite->getComponent(currentX, currentY - 1);
			}
		}
	}
	return nullptr;
}

bool Iterator::remove(int locationX, int locationY) {
	if (composite->getComponent(locationX, locationY) != nullptr) {
		composite->remove(locationX, locationY);
		return true;
	} else {
		return false;
	}
}

bool Iterator::slotAvailable(int locationX, int locationY) {
	if (composite->getComponent(locationX, locationY) == nullptr) {
		return true;
	} else {
		return false;
	}
}

BuildingState* Iterator::getAndSetNextState() {
	// TODO - implement ConcreteIterator::getAndSetNextState
	throw "Not yet implemented";
}

void Iterator::setNextStateAll() {
	std::vector<Building*> buildings = composite->getAllBuildings();
    for (size_t i = 0; i < buildings.size(); i++) {
        Building* building = buildings[i];
        if (building) {
            building->getAndSetNextState();
        }
    }
}

Building* Iterator::getHouse() {
	std::vector<Building*> buildings = composite->getAllBuildings();
    for (size_t i = 0; i < buildings.size(); i++) {
        Building* building = buildings[i];
        if (building && building->getAvailableSpace() > 0) {
            if (building->getName() == "House" || building->getName() == "TownHouse" || building->getName() == "Apartment")
				return building;
        }
    }
	return nullptr;
}

Building* Iterator::getJob() {
	std::vector<Building*> buildings = composite->getAllBuildings();
    for (size_t i = 0; i < buildings.size(); i++) {
        Building* building = buildings[i];
        if (building && building->getAvailableSpace() > 0) {
            if (building->getName() == "Shop" || building->getName() == "Office")
				return building;
        }
    }
	return nullptr;
}

std::vector<Building*> Iterator::getAllBuildings() const {
	return composite->getAllBuildings();
}

int Iterator::getPowerConsumption() {
	return composite->getTotalPowerConsumption();
}

int Iterator::getPowerProduction() {
	return composite->getTotalPowerProduction();
}

int Iterator::getWaterConsumption() {
	return composite->getTotalWaterConsumption();
}

int Iterator::getWaterProduction() {
	return composite->getTotalWaterProduction();
}

int Iterator::getWasteConsumption() {
	return composite->getTotalWasteConsumption();
}

int Iterator::getWasteProduction() {
	return composite->getTotalWasteProduction();
}

int Iterator::getSewageConsumption() {
	return composite->getTotalSewageConsumption();
}

int Iterator::getSewageProduction() {
	return composite->getTotalSewageProduction();
}

int Iterator::getCostConsumption() {
	return composite->getTotalCostConsumption();
}