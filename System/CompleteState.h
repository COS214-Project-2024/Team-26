/**
 * @file CompleteState.h
 * @brief Header file for the CompleteState class, representing a completed building.
 */

#ifndef COMPLETE_STATE_H
#define COMPLETE_STATE_H

#include "BuildingState.h"

/**
 * @class CompleteState
 * @brief Represents a building that has been completed and is fully operational.
 */
class CompleteState : public BuildingState {
public:
    /**
     * @brief Gets the name of the state.
     * @return The name of the state as a string.
     */
    std::string getStateName() override;

    /**
     * @brief Gets the monetary cost associated with the building in its complete state.
     * @param building Pointer to the Building object.
     * @return The monetary cost.
     */
    int getMoneyCost(Building* building) override;

    /**
     * @brief Gets the resource cost associated with the building in its complete state.
     * @param building Pointer to the Building object.
     * @return The resource cost.
     */
    int getResourceCost(Building* building) override;

    /**
     * @brief Gets the power consumption of the building in its complete state.
     * @param building Pointer to the Building object.
     * @return The power consumption.
     */
    int getPowerConsumption(Building* building) override;

    /**
     * @brief Gets the water consumption of the building in its complete state.
     * @param building Pointer to the Building object.
     * @return The water consumption.
     */
    int getWaterConsumption(Building* building) override;

    /**
     * @brief Gets the occupancy level of the building in its complete state.
     * @param building Pointer to the Building object.
     * @return The occupancy level.
     */
    int getOccupancy(Building* building) override;

    /**
     * @brief Gets the sewage production of the building in its complete state.
     * @param building Pointer to the Building object.
     * @return The sewage production.
     */
    int getSewageProduction(Building* building) override;

    /**
     * @brief Gets the waste production of the building in its complete state.
     * @param building Pointer to the Building object.
     * @return The waste production.
     */
    int getWasteProduction(Building* building) override;
};

#endif // COMPLETE_STATE_H
