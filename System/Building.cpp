#include <exception>
#include <string>
using namespace std;

#include "Building.h"
#include "Client.h"
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
    return state;
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
    return state->getOccupancy(this);
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