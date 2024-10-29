#include <exception>
#include <string>
using namespace std;

#include "Building.h"
#include "Client.h"
void Building::setState(BuildingState* newState) {
    state = newState;
}

BuildingState* Building::getState() {
    return state;
}

int Building::getCostConsumption() {
    return state->getMoneyCost(this);
}

int Building::getResourceConsumption(){
	return state->getResourceCost(this);
}

int Building::getPowerConsumption() {
    return state->getPowerConsumption(this);
}

int Building::getWaterConsumption() {
    return state->getWaterConsumption(this);
}



