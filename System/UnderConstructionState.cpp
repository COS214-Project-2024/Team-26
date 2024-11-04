/**
 * @file UnderConstructionState.cpp
 * @brief Implementation of the UnderConstructionState class, representing a building under construction.
 */

#include "UnderConstructionState.h"
#include "Building.h"

/**
 * @brief Gets the name of the state.
 * @return The name "Under Construction" as a string.
 */
std::string UnderConstructionState::getStateName() {
    return "Under Construction";
}

/**
 * @brief Gets the monetary cost associated with the building in its under construction state.
 * @param building Pointer to the Building object.
 * @return The monetary cost associated with construction.
 */
int UnderConstructionState::getMoneyCost(Building* building) {
    return building->getCostConsumption(); // Example: could be a construction cost method
}

/**
 * @brief Gets the resource cost associated with the building in its under construction state.
 * @param building Pointer to the Building object.
 * @return The resource cost associated with construction.
 */
int UnderConstructionState::getResourceCost(Building* building) {
    return building->getResourceConsumption(); // Use the method defined in Building
}

/**
 * @brief Gets the power consumption of the building in its under construction state.
 * @param building Pointer to the Building object.
 * @return The power consumption, possibly minimal.
 */
int UnderConstructionState::getPowerConsumption(Building* building) {
    return 0; // Minimal or no power during construction
}

/**
 * @brief Gets the water consumption of the building in its under construction state.
 * @param building Pointer to the Building object.
 * @return The water consumption, possibly minimal.
 */
int UnderConstructionState::getWaterConsumption(Building* building) {
    return 0; // Minimal or no water during construction
}

/**
 * @brief Gets the occupancy level of the building in its under construction state.
 * @param building Pointer to the Building object.
 * @return The occupancy level, which should be zero.
 */
int UnderConstructionState::getOccupancy(Building* building) {
    return 0; // Cannot be occupied during construction
}

/**
 * @brief Gets the sewage production of the building in its under construction state.
 * @param building Pointer to the Building object.
 * @return The sewage production, likely zero.
 */
int UnderConstructionState::getSewageProduction(Building* building) {
    return 0; // No sewage production during construction
}

/**
 * @brief Gets the waste production of the building in its under construction state.
 * @param building Pointer to the Building object.
 * @return The waste production, likely zero.
 */
int UnderConstructionState::getWasteProduction(Building* building) {
    return 0; // No waste production during construction
}
