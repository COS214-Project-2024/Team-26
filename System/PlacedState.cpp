/**
 * @file PlacedState.cpp
 * @brief Implementation of the PlacedState class
 */
#include "PlacedState.h"
#include "Building.h"

std::string PlacedState::getStateName() {
    return "Placed";
}

int PlacedState::getMoneyCost(Building* building) {
    return building->getCostConsumption();
}

int PlacedState::getResourceCost(Building* building) {
    return building->getResourceConsumption();
}

int PlacedState::getPowerConsumption(Building* building) {
    return 0; // No power consumption in placed state
}

int PlacedState::getWaterConsumption(Building* building) {
    return 0; // No water consumption in placed state
}