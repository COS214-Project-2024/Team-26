#include <exception>
#include <string>
#include <cstdlib>
#include <iostream>

#include "Building.h"

Building::Building(std::string name, int x, int y) {
    this->name = name;
    LOCATION_X = x;
    LOCATION_Y = y;
    state = new PlacedState();

    if (name == "House") {
        SPACE = rand() % 9 + 2;
    } else if (name == "TownHouse") {
        SPACE = rand() % 13 + 2;
    } else if (name == "Apartment") {
        SPACE = rand() % 31 + 2;
    } else {
        SPACE = 0;
    }
}

void Building::setState(BuildingState *newState)
{
    state = newState;
}

BuildingState *Building::getState()
{
    return state;
}

BuildingState *Building::getAndSetNextState()
{
    if (state->getStateName() == "Placed") {
        state = new UnderConstructionState();
    } else if (state->getStateName() == "Under Construction") {
        state = new CompletedState();
    }
}

int Building::getSpace() {
    return SPACE;
}

int Building::getCostConsumption()
{
    return state->getMoneyCost(this);
}

int Building::getResourceConsumption()
{
    return state->getResourceCost(this);
}

int Building::getPowerConsumption()
{
    return state->getPowerConsumption(this);
}

int Building::getWaterConsumption()
{
    return state->getWaterConsumption(this);
}

int Building::getOccupancy()
{
    return occupancy;
}

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

int Building::getAvailableSpace()
{
    if (state->getStateName() == "Completed")
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