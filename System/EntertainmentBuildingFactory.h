#ifndef ENTERTAINMENTBUILDINGFACTORY_H
#define ENTERTAINMENTBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Building.h"
#include "Theater.h"
#include "Bowling.h"
#include "Bar.h"

/**
 * @brief Factory class for creating entertainment buildings
 *
 * EntertainmentBuildingFactory specializes BuildingFactory to create
 * specific types of entertainment buildings such as theaters,
 * bowling alleys, and bars.
 */
class EntertainmentBuildingFactory : public BuildingFactory {
public:
	EntertainmentBuildingFactory(std::string buildingName, int x, int y) : BuildingFactory(buildingName, x, y) {}

	/**
	 * @brief Create a new entertainment building
	 * @return Pointer to newly created entertainment Building instance
	 */
	Building *createBuilding();
};

#endif