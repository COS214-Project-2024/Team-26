#ifndef BUILDINGSTATE_H
#define BUILDINGSTATE_H

#include <string>
using namespace std;

class Building;

/**
 * @brief Abstract base class for the Building State Pattern
 *
 * BuildingState defines the interface for all concrete building states
 * (Placed, UnderConstruction, Complete, Demolished). Each state implements
 * different behavior for resource consumption and building metrics based on
 * the current phase of the building's lifecycle.
 */
class BuildingState
{
protected:
    /** @brief Name identifier for the current state */
    string stateName;

public:
    /**
     * @brief Get the name of the current state
     * @return String identifier of the state
     */
    virtual string getStateName() = 0;

    /**
     * @brief Calculate monetary cost for the building in current state
     * @param building Pointer to the Building object
     * @return Monetary cost based on current state
     */
    virtual int getMoneyCost(Building *building) = 0;

    /**
     * @brief Calculate resource cost for the building in current state
     * @param building Pointer to the Building object
     * @return Resource cost based on current state
     */
    virtual int getResourceCost(Building *building) = 0;

    /**
     * @brief Calculate power consumption in current state
     * @param building Pointer to the Building object
     * @return Power consumption units for current state
     */
    virtual int getPowerConsumption(Building *building) = 0;

    /**
     * @brief Calculate water consumption in current state
     * @param building Pointer to the Building object
     * @return Water consumption units for current state
     */
    virtual int getWaterConsumption(Building *building) = 0;

    /**
     * @brief Get current occupancy level allowed in this state
     * @param building Pointer to the Building object
     * @return Current occupancy level (may be 0 in some states)
     */
    virtual int getOccupancy(Building *building) = 0;

    /**
     * @brief Calculate sewage production in current state
     * @param building Pointer to the Building object
     * @return Sewage production units for current state
     */
    virtual int getSewageProduction(Building *building) = 0;

    /**
     * @brief Calculate waste production in current state
     * @param building Pointer to the Building object
     * @return Waste production units for current state
     */
    virtual int getWasteProduction(Building *building) = 0;
};

#endif