/**
 * @file PlacedState.h
 * @brief Header file for the PlacedState class, representing an active building state.
 */

#ifndef PLACED_STATE_H
#define PLACED_STATE_H

#include "BuildingState.h"

/**
 * @class PlacedState
 * @brief Represents a building in an active, operational state.
 */
class PlacedState : public BuildingState {
public:
    /**
     * @brief Gets the name of the state.
     * @return The name of the state as a string.
     */
    std::string getStateName() override;

    /**
     * @brief Gets the monetary cost associated with the building in its active state.
     * @param building Pointer to the Building object.
     * @return The monetary cost.
     */
    int getMoneyCost(Building* building) override;

    /**
     * @brief Gets the resource cost associated with the building in its active state.
     * @param building Pointer to the Building object.
     * @return The resource cost.
     */
    int getResourceCost(Building* building) override;

    /**
     * @brief Gets the power consumption of the building in its active state.
     * @param building Pointer to the Building object.
     * @return The power consumption.
     */
    int getPowerConsumption(Building* building) override;

    /**
     * @brief Gets the water consumption of the building in its active state.
     * @param building Pointer to the Building object.
     * @return The water consumption.
     */
    int getWaterConsumption(Building* building) override;

    /**
     * @brief Gets the occupancy level of the building in its active state.
     * @param building Pointer to the Building object.
     * @return The occupancy level.
     */
    int getOccupancy(Building* building) override;

    /**
     * @brief Gets the sewage production of the building in its active state.
     * @param building Pointer to the Building object.
     * @return The sewage production.
     */
    int getSewageProduction(Building* building) override;

    /**
     * @brief Gets the waste production of the building in its active state.
     * @param building Pointer to the Building object.
     * @return The waste production.
     */
    int getWasteProduction(Building* building) override;
};

#endif // PLACED_STATE_H
