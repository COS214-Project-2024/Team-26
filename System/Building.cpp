#include <exception>
#include <string>
#include <typeinfo>
#include <cstdlib>
#include <iostream>

#include "Building.h"

Building::Building(std::string name, int x, int y) {
    this->name = name;
    LOCATION_X = x;
    LOCATION_Y = y;
    state = new PlacedState();

    occupancy = 0; // default value

    if (name == "House") {
        SPACE = rand() % 10 + 2;
    } else if (name == "TownHouse") {
        SPACE = rand() % 15 + 2;
    } else if (name == "Apartment") {
        SPACE = rand() % 30 + 2;
    } else {
        SPACE = 0;
    }
}

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
BuildingState* Building::getAndSetNextState() {
    BuildingState* nextState = nullptr;
    
    // Determine next state based on current state
    if (typeid(*state) == typeid(PlacedState)) 
    {
        nextState = new UnderConstructionState();
    }
    else if (typeid(*state) == typeid(UnderConstructionState)) 
    {
        nextState = new CompleteState();
    }
    else if (typeid(*state) == typeid(DemolishedState)) {
        // No next state after demolished
        return state;
    }
    
    // Clean up old state and set new state
    if (nextState != nullptr) 
    {
        delete state;
        state = nextState;
    }
    
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
    return occupancy;
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
    if (state->getStateName() == "Complete")
        return SPACE - occupancy;
    else 
        return 0;
}

std::string Building::getInfo() {
    std::string out = "";
    out += name;
    out += " at (" + std::to_string(LOCATION_X) + ", " + std::to_string(LOCATION_Y) + ") ";
    out += "[" + std::to_string(SPACE) + ", " + std::to_string(occupancy) + "] : ";
    out += state->getStateName();
    return out; 
}

std::string Building::getName() {
    return name;
}