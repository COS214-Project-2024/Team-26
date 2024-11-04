#ifndef PLACED_STATE_H
#define PLACED_STATE_H

#include "BuildingState.h"

/**
 * @brief Represents the initial state of a building after placement
 *
 * In the PlacedState, the building:
 * - Incurs initial construction costs (money and resources)
 * - Has no power or water consumption yet
 * - Cannot be occupied
 * This is the first state in the building lifecycle before construction begins.
 */
class PlacedState : public BuildingState {
public:
    /**
     * @brief Get the name of this state
     * @return String "Placed"
     */
    std::string getStateName() override;

    /**
     * @brief Calculate initial monetary cost for placing the building
     * @param building Pointer to the Building object
     * @return Initial construction cost in monetary units
     */
    int getMoneyCost(Building* building) override;

    /**
     * @brief Calculate initial resource cost for placing the building
     * @param building Pointer to the Building object
     * @return Initial resource cost
     */
    int getResourceCost(Building* building) override;

    /**
     * @brief Get power consumption in placed state
     * @param building Pointer to the Building object
     * @return 0 (no power consumption in placed state)
     */
    int getPowerConsumption(Building* building) override;

    /**
     * @brief Get water consumption in placed state
     * @param building Pointer to the Building object
     * @return 0 (no water consumption in placed state)
     */
    int getWaterConsumption(Building* building) override;
};

#endif // PLACED_STATE_H