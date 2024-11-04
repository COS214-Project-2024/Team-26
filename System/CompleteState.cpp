/**
 * @file CompleteState.cpp
 * @brief Implementation of the CompletedState class
 */
#include "CompleteState.h"
#include "Building.h"

std::string CompletedState::getStateName() {
    return "Completed";
}

int CompletedState::getMoneyCost(Building* building) {
    return 0; // No additional costs in completed state
}

int CompletedState::getResourceCost(Building* building) {
    return 0; // No additional resource costs in completed state
}

int CompletedState::getPowerConsumption(Building* building) {
    return building->getPowerConsumption() / 2; // Optimized power usage
}

int CompletedState::getWaterConsumption(Building* building) {
    return building->getWaterConsumption() / 2; // Optimized water usage
}