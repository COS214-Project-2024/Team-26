/**
 * @file CompleteState.cpp
 * @brief Implementation of the CompleteState class, representing a completed building.
 */

#include "CompleteState.h"
#include "Building.h"

/**
 * @brief Gets the name of the state.
 * @return The name "Complete" as a string.
 */
std::string CompleteState::getStateName() {
    return "Complete";
}

/**
 * @brief Gets the monetary cost associated with the building in its complete state.
 * @param building Pointer to the Building object.
 * @return The monetary cost, typically operational cost.
 */
int CompleteState::getMoneyCost(Building* building) {
    return building->getCostConsumption(); // Example: could be an operational cost method
}

/**
 * @brief Gets the resource cost associated with the building in its complete state.
 * @param building Pointer to the Building object.
 * @return The resource cost associated with operation.
 */
int CompleteState::getResourceCost(Building* building) {
    return building->getResourceConsumption(); // Use the method defined in Building
}

/**
 * @brief Gets the power consumption of the building in its complete state.
 * @param building Pointer to the Building object.
 * @return The power consumption during operation.
 */
int CompleteState::getPowerConsumption(Building* building) {
    return building->getPowerConsumption(); // Use the method defined in Building
}

/**
 * @brief Gets the water consumption of the building in its complete state.
 * @param building Pointer to the Building object.
 * @return The water consumption during operation.
 */
int CompleteState::getWaterConsumption(Building* building) {
    return building->getWaterConsumption(); // Use the method defined in Building
}

/**
 * @brief Gets the occupancy level of the building in its complete state.
 * @param building Pointer to the Building object.
 * @return The occupancy level as defined by the building.
 */
int CompleteState::getOccupancy(Building* building) {
    return building->getOccupancy(); // Use the method defined in Building
}

/**
 * @brief Gets the sewage production of the building in its complete state.
 * @param building Pointer to the Building object.
 * @return The sewage production during operation.
 */
int CompleteState::getSewageProduction(Building* building) {
    return building->getSewageProduction(); // Use the method defined in Building
}

/**
 * @brief Gets the waste production of the building in its complete state.
 * @param building Pointer to the Building object.
 * @return The waste production during operation.
 */
int CompleteState::getWasteProduction(Building* building) {
    return 20 ; // Use the method defined in Building
}
