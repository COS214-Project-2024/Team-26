/**
 * @file PlacedState.cpp
 * @brief Implementation of the PlacedState class, representing a building that has been placed but not fully constructed.
 */

#include "PlacedState.h"
#include "Building.h"

/**
 * @brief Gets the name of the state.
 * @return The name "Placed" as a string.
 */
std::string PlacedState::getStateName() {
    return "Placed";
}

/**
 * @brief Gets the monetary cost associated with the building in its placed state.
 * @param building Pointer to the Building object.
 * @return The monetary cost based on placement, typically lower than operational costs.
 */
int PlacedState::getMoneyCost(Building* building) {
    return building->getCostConsumption() /2; // Placeholder logic, can be adjusted
}

/**
 * @brief Gets the resource cost associated with the building in its placed state.
 * @param building Pointer to the Building object.
 * @return The resource cost, could be minimal as the building is not operational.
 */
int PlacedState::getResourceCost(Building* building) {
    return building->getResourceConsumption() /2; // Placeholder logic, can be adjusted
}

/**
 * @brief Gets the power consumption of the building in its placed state.
 * @param building Pointer to the Building object.
 * @return Returns zero as the building is not yet operational.
 */
int PlacedState::getPowerConsumption(Building* building) {
    return 0; // No power consumption 
}

/**
 * @brief Gets the water consumption of the building in its placed state.
 * @param building Pointer to the Building object.
 * @return Returns zero as the building is not yet operational.
 */
int PlacedState::getWaterConsumption(Building* building) {
    return 0; // No water consumption 
}

/**
 * @brief Gets the occupancy level of the building in its placed state.
 * @param building Pointer to the Building object.
 * @return Returns zero as there are no occupants yet.
 */
int PlacedState::getOccupancy(Building* building) {
    return 0; // No occupancy 
}

/**
 * @brief Gets the sewage production of the building in its placed state.
 * @param building Pointer to the Building object.
 * @return Returns zero as the building is not yet operational.
 */
int PlacedState::getSewageProduction(Building* building) {
    return 0; // No sewage 
}

/**
 * @brief Gets the waste production of the building in its placed state.
 * @param building Pointer to the Building object.
 * @return Returns zero as the building is not yet operational.
 */
int PlacedState::getWasteProduction(Building* building) {
    return 0; // No waste 
}
