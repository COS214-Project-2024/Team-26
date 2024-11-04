#include <exception>
#include <string>
#include <typeinfo>
#include <cstdlib>
#include <iostream>

#include "Building.h"

Building::Building(std::string name, int x, int y) : name(name), LOCATION_X(x), LOCATION_Y(y) {
    state = new PlacedState();

    // assign non-constructor values
    // create relevant factory
	if (name == "House" || name == "TownHouse" || name == "Apartment") {
		POWER_CONSUMPTION = rand() % 10;
        WATER_CONSUMPTION = rand() % 10;
        SEWAGE_PRODUCTION = rand() % 10;
	} else if (name == "Shop" || name == "Office") {
		POWER_CONSUMPTION = rand() % 20;
        WATER_CONSUMPTION = rand() % 20;
        SEWAGE_PRODUCTION = rand() % 20;
	} else if (name == "Hospital" || name == "Police" || name == "FireDepartment") {
        POWER_CONSUMPTION = rand() % 20;
        WATER_CONSUMPTION = rand() % 20;
        SEWAGE_PRODUCTION = rand() % 20;
	} else if (name == "Theater" || name == "Bowling" || name == "Bar") {
		POWER_CONSUMPTION = rand() % 10;
        WATER_CONSUMPTION = rand() % 10;
        SEWAGE_PRODUCTION = rand() % 10;
	} else if (name == "Park" || name == "Monument") {
        POWER_CONSUMPTION = 0; 
        WATER_CONSUMPTION = 0; 
        SEWAGE_PRODUCTION = 0; 
	} else if (name == "Warehouse" || name == "Factory") {
		POWER_CONSUMPTION = rand() % 20;
        WATER_CONSUMPTION = rand() % 20;
        SEWAGE_PRODUCTION = rand() % 20;
	} else {
        POWER_CONSUMPTION = rand() % 10;
        WATER_CONSUMPTION = rand() % 10;
        SEWAGE_PRODUCTION = rand() % 10;

		if (name == "Power")
            POWER_CONSUMPTION = 0;

        if (name == "Water")
            WATER_CONSUMPTION = 0;

        if (name == "Sewage")
            SEWAGE_PRODUCTION = 0;

        // if (name == "Waste")
	}
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

// Building::~Building() {
//     delete state;
// }

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
int Building::getPowerConsumption(bool s)
{
    if (s)
        return POWER_CONSUMPTION;
    else
        return state->getPowerConsumption(this);
}

/**
 * @brief Calculate current water consumption
 * @return Water units based on current state
 */
int Building::getWaterConsumption(bool s)
{
    if (s)
        return WATER_CONSUMPTION;
    else
        return state->getWaterConsumption(this);
}

int Building::getSewageProduction(bool s)
{
    if (s)
        return SEWAGE_PRODUCTION;
    else
        return state->getSewageProduction(this);
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