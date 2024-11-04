#ifndef BUILDINGFACTORY_H
#define BUILDINGFACTORY_H

#include "Building.h"

/**
 * @brief Abstract factory class for creating building instances
 *
 * BuildingFactory implements the Factory Method pattern to create different
 * types of buildings based on the specified building type and location.
 */
class BuildingFactory
{
protected:
	const std::string &BUILDING_TYPE; ///< Type of building to create
	const int LOCATION_X;			  ///< X-coordinate for new building
	const int LOCATION_Y;			  ///< Y-coordinate for new building

public:
	/**
	 * @brief Constructor for BuildingFactory
	 * @param buildingType Type of building to create
	 * @param x X-coordinate for new building
	 * @param y Y-coordinate for new building
	 */
	BuildingFactory(std::string &buildingType, int x, int y)
		: BUILDING_TYPE(buildingType), LOCATION_X(x), LOCATION_Y(y) {}

	/**
	 * @brief Pure virtual function to create a building
	 * @return Pointer to newly created Building instance
	 */
	virtual Building *createBuilding() = 0;

	/**
	 * @brief Virtual destructor
	 */
	virtual ~BuildingFactory() = default;
};

#endif