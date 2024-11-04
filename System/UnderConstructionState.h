#ifndef UNDER_CONSTRUCTION_STATE_H
#define UNDER_CONSTRUCTION_STATE_H

#include "BuildingState.h"

/**
 * @brief Represents a building during construction phase
 *
 * In the UnderConstructionState, the building:
 * - Consumes power and water for construction
 * - Has no monetary or resource costs (already paid in placed state)
 * - Cannot be occupied during construction
 * This state follows PlacedState and precedes CompleteState.
 */
class UnderConstructionState : public BuildingState {
public:
    /**
     * @brief Get the name of this state
     * @return String "Under Construction"
     */
    std::string getStateName() override;

    /**
     * @brief Calculate monetary cost during construction
     * @param building Pointer to the Building object
     * @return 0 (no additional monetary cost during construction)
     */
    int getMoneyCost(Building* building) override;

    /**
     * @brief Calculate resource cost during construction
     * @param building Pointer to the Building object
     * @return 0 (no additional resource cost during construction)
     */
    int getResourceCost(Building* building) override;

    /**
     * @brief Calculate power consumption during construction
     * @param building Pointer to the Building object
     * @return Power units consumed during construction phase
     */
    int getPowerConsumption(Building* building) override;

    /**
     * @brief Calculate water consumption during construction
     * @param building Pointer to the Building object
     * @return Water units consumed during construction phase
     */
    int getWaterConsumption(Building* building) override;
};

#endif // UNDER_CONSTRUCTION_STATE_H