#include <exception>
#include <string>
using namespace std;

#include "Building.h"
#include "Client.h"

/**
 * @brief Set the building to a new state
 * @param newState Pointer to the new state object
 */
void Building::setState(BuildingState *newState)
{
    state = newState;
}

/**
 * @brief Get the current state of the building
 * @return Pointer to the current state object
 */
BuildingState *Building::getState()
{
    return state;
}

/**
 * @brief Get and transition to the next state
 * @return Pointer to the new state object
 */
BuildingState *Building::getAndSetNextState()
{
    return state;
}

/**
 * @brief Get the total space capacity
 * @return Maximum space capacity constant
 */
int Building::getSpace() {
    return SPACE;
}

/**
 * @brief Calculate current monetary cost consumption
 * @return Cost based on current state
 */
int Building::getCostConsumption()
{
    return state->getMoneyCost(this);
}

/**
 * @brief Calculate current resource consumption
 * @return Resource units based on current state
 */
int Building::getResourceConsumption()
{
    return state->getResourceCost(this);
}

/**
 * @brief Calculate current power consumption
 * @return Power units based on current state
 */
int Building::getPowerConsumption()
{
    return state->getPowerConsumption(this);
}

/**
 * @brief Calculate current water consumption
 * @return Water units based on current state
 */
int Building::getWaterConsumption()
{
    return state->getWaterConsumption(this);
}

/**
 * @brief Get current occupancy level
 * @return Number of current occupants
 */
int Building::getOccupancy()
{
    return state->getOccupancy(this);
}

/**
 * @brief Update building occupancy if within valid range
 * @param i Change in occupancy (positive or negative)
 * @return true if update successful, false if would exceed limits
 */
bool Building::updateOccupancy(int i)
{
    int newOccupancy = occupancy + i;

    // Check if new occupancy would be valid
    if (newOccupancy < 0 || newOccupancy > SPACE)
    {
        return false; // Cannot update occupancy - would exceed limits
    }

    // Update occupancy if valid
    occupancy = newOccupancy;
    return true;
}

/**
 * @brief Calculate available space remaining
 * @return Amount of unoccupied space
 */
int Building::getAvailableSpace()
{
    // Implementation missing
}