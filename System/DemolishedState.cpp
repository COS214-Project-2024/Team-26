/**
 * @file DemolishedState.cpp
 * @brief Implementation of the DemolishedState class methods.
 */

#include "DemolishedState.h"
#include "Building.h"

/**
 * @brief Gets the name of the state.
 * @return The name of the state as "Demolished".
 */
std::string DemolishedState::getStateName() {
    return "Demolished";
}

/**
 * @brief Gets the monetary cost of the building in this state.
 * @param building Pointer to the building instance.
 * @return Monetary cost, which is zero in the demolished state.
 */
int DemolishedState::getMoneyCost(Building* building) {
    return 0;
}

/**
 * @brief Gets the resource cost of the building in this state.
 * @param building Pointer to the building instance.
 * @return Resource cost, which is zero in the demolished state.
 */
int DemolishedState::getResourceCost(Building* building) {
    return 0;
}

/**
 * @brief Gets the power consumption of the building in this state.
 * @param building Pointer to the building instance.
 * @return Power consumption, which is zero in the demolished state.
 */
int DemolishedState::getPowerConsumption(Building* building) {
    return 0;
}

/**
 * @brief Gets the water consumption of the building in this state.
 * @param building Pointer to the building instance.
 * @return Water consumption, which is zero in the demolished state.
 */
int DemolishedState::getWaterConsumption(Building* building) {
    return 0;
}

/**
 * @brief Gets the occupancy of the building in this state.
 * @param building Pointer to the building instance.
 * @return Occupancy, which is zero in the demolished state.
 */
int DemolishedState::getOccupancy(Building* building) {
    return 0;
}

/**
 * @brief Gets the sewage production of the building in this state.
 * @param building Pointer to the building instance.
 * @return Sewage production, which is zero in the demolished state.
 */
int DemolishedState::getSewageProduction(Building* building) {
    return 0;
}

/**
 * @brief Gets the waste production of the building in this state.
 * @param building Pointer to the building instance.
 * @return Waste production, which is 20 to be demolished
 */
int DemolishedState::getWasteProduction(Building* building) {
    return 20;
}
