/**
 * @file DemolishedState.h
 * @brief Declaration of the DemolishedState class, representing the demolished state of a building.
 */

#ifndef DEMOLISHED_STATE_H
#define DEMOLISHED_STATE_H

#include "BuildingState.h"

/**
 * @class DemolishedState
 * @brief Represents a building that has been demolished.
 * 
 * The DemolishedState class implements the BuildingState interface, defining the 
 * characteristics of a building when it is in a demolished state. All costs, consumption, 
 * and production values are set to zero, as the building is not operational.
 */
class DemolishedState : public BuildingState {
public:
    /**
     * @brief Gets the name of the state.
     * @return The name of the state as "Demolished".
     */
    std::string getStateName() override;

    /**
     * @brief Gets the monetary cost of the building in this state.
     * @param building Pointer to the building instance.
     * @return Monetary cost, which is zero in the demolished state.
     */
    int getMoneyCost(Building* building) override;

    /**
     * @brief Gets the resource cost of the building in this state.
     * @param building Pointer to the building instance.
     * @return Resource cost, which is zero in the demolished state.
     */
    int getResourceCost(Building* building) override;

    /**
     * @brief Gets the power consumption of the building in this state.
     * @param building Pointer to the building instance.
     * @return Power consumption, which is zero in the demolished state.
     */
    int getPowerConsumption(Building* building) override;

    /**
     * @brief Gets the water consumption of the building in this state.
     * @param building Pointer to the building instance.
     * @return Water consumption, which is zero in the demolished state.
     */
    int getWaterConsumption(Building* building) override;

    /**
     * @brief Gets the occupancy of the building in this state.
     * @param building Pointer to the building instance.
     * @return Occupancy, which is zero in the demolished state.
     */
    int getOccupancy(Building* building) override;

    /**
     * @brief Gets the sewage production of the building in this state.
     * @param building Pointer to the building instance.
     * @return Sewage production, which is zero in the demolished state.
     */
    int getSewageProduction(Building* building) override;

    /**
     * @brief Gets the waste production of the building in this state.
     * @param building Pointer to the building instance.
     * @return Waste production, which is zero in the demolished state.
     */
    int getWasteProduction(Building* building) override;
};

#endif
