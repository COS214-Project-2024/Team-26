#ifndef COMPLETED_STATE_H
#define COMPLETED_STATE_H

#include "BuildingState.h"

/**
 * @brief Represents a fully constructed and operational building
 *
 * In the CompletedState, the building:
 * - Is fully operational and can be occupied
 * - Consumes half the normal power and water (optimized usage)
 * - Has no additional monetary or resource costs
 * - Can generate revenue and produce waste/sewage
 * This is the main operational state after construction is finished.
 */
class CompletedState : public BuildingState {
public:
    /**
     * @brief Get the name of this state
     * @return String "Completed"
     */
    std::string getStateName() override;

    /**
     * @brief Calculate monetary cost for completed building
     * @param building Pointer to the Building object
     * @return 0 (construction costs already paid)
     */
    int getMoneyCost(Building* building) override;

    /**
     * @brief Calculate resource cost for completed building
     * @param building Pointer to the Building object
     * @return 0 (construction resources already used)
     */
    int getResourceCost(Building* building) override;

    /**
     * @brief Calculate optimized power consumption for operational building
     * @param building Pointer to the Building object
     * @return Half of the base power consumption (optimized usage)
     */
    int getPowerConsumption(Building* building) override;

    /**
     * @brief Calculate optimized water consumption for operational building
     * @param building Pointer to the Building object
     * @return Half of the base water consumption (optimized usage)
     */
    int getWaterConsumption(Building* building) override;
};

#endif // COMPLETED_STATE_H