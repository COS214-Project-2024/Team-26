#ifndef LANDMARKBUILDINGFACTORY_H
#define LANDMARKBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Building.h"
#include "Park.h"
#include "Monument.h"

/**
 * @brief Factory class for creating landmark buildings
 * @details This factory class implements the Factory Method pattern to create
 *          different types of landmark buildings such as parks and monuments
 */
class LandmarkBuildingFactory : BuildingFactory
{
public:
	LandmarkBuildingFactory(std::string buildingName, int x, int y) : BuildingFactory(buildingName, x, y) {}
	/**
	 * @brief Creates a new landmark building
	 * @return Pointer to the newly created Building object
	 */
	Building *createBuilding();
};

#endif