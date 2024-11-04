/**
 * @file UnderConstructionState.cpp
 * @brief Implementation of the UnderConstructionState class
 */
#include "UnderConstructionState.h"
#include "Building.h"

std::string UnderConstructionState::getStateName() {
    return "Under Construction";
}

int UnderConstructionState::getMoneyCost(Building* building) {
    return 0; // Initial costs already paid in placed state
}

int UnderConstructionState::getResourceCost(Building* building) {
    return 0; // Initial costs already paid in placed state
}

int UnderConstructionState::getPowerConsumption(Building* building) {
    return building->getPowerConsumption();
}

int UnderConstructionState::getWaterConsumption(Building* building) {
    return building->getWaterConsumption();
}