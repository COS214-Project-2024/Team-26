#ifndef DEMOLISHED_STATE_H
#define DEMOLISHED_STATE_H

#include "BuildingState.h"

/**
 * @brief Represents a building in the process of demolition
 *
 * In the DemolishedState, the building:
 * - Cannot be occupied
 * - Incurs half the original construction costs for demolition
 * - Has no power or water consumption
 * - Generates no revenue
 * This is the final state in the building's lifecycle.
 */
class DemolishedState : public BuildingState {
public:
    /**
     * @brief Get the name of this state
     * @return String "Demolished"
     */
    std::string getStateName() override;

    /**
     * @brief Calculate monetary cost for demolition
     * @param building Pointer to the Building object
     * @return Half of the original construction cost
     */
    int getMoneyCost(Building* building) override;

    /**
     * @brief Calculate resource cost for demolition
     * @param building Pointer to the Building object
     * @return Half of the original resource cost
     */
    int getResourceCost(Building* building) override;

    /**
     * @brief Get power consumption during demolition
     * @param building Pointer to the Building object
     * @return 0 (no power consumption during demolition)
     */
    int getPowerConsumption(Building* building) override;

    /**
     * @brief Get water consumption during demolition
     * @param building Pointer to the Building object
     * @return 0 (no water consumption during demolition)
     */
    int getWaterConsumption(Building* building) override;
};

#endif // DEMOLISHED_STATE_H