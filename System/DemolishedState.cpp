/**
 * @file DemolishedState.cpp
 * @brief Implementation of the DemolishedState class
 */
#include "DemolishedState.h"
#include "Building.h"

std::string DemolishedState::getStateName() {
    return "Demolished";
}

int DemolishedState::getMoneyCost(Building* building) {
    return building->getCostConsumption() / 2; // Half cost for demolition
}

int DemolishedState::getResourceCost(Building* building) {
    return building->getResourceConsumption() / 2; // Half resources for demolition
}

int DemolishedState::getPowerConsumption(Building* building) {
    return 0; // No power consumption in demolished state
}

int DemolishedState::getWaterConsumption(Building* building) {
    return 0; // No water consumption in demolished state
}