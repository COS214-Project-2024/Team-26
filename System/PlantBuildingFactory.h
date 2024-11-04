#ifndef PLANTBUILDINGFACTORY_H
#define PLANTBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Building.h"
#include "Power.h"
#include "Water.h"
#include "Sewage.h"
#include "Waste.h"

/**
 * @brief Factory class for creating utility plant buildings
 * @details This factory class implements the Factory Method pattern to create
 *          different types of utility plants including power plants, water treatment
 *          facilities, sewage plants, and waste management facilities
 */
class PlantBuildingFactory : public BuildingFactory
{
public:
	PlantBuildingFactory(std::string buildingName, int x, int y) : BuildingFactory(buildingName, x, y) {}

	/**
	 * @brief Creates a new plant building
	 * @return Pointer to the newly created Building object
	 */
	Building *createBuilding();
};

#endif