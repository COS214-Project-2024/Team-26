#ifndef FACTORY_H
#define FACTORY_H

#include "IndustrialBuilding.h"

/**
 * @brief Class representing a factory building in the simulation
 *
 * Factory extends IndustrialBuilding to implement specific
 * functionality for manufacturing facilities, focusing on
 * resource production capabilities.
 */
class Factory : public IndustrialBuilding
{
private:
	int resourceProduction; ///< Rate of resource production

public:
	/**
	 * @brief Default constructor
	 */
	Factory(int x, int y) : IndustrialBuilding("Factory", x, y) {}

	/**
	 * @brief Get the resource production rate
	 * @return Resource production value
	 */
	int getResourceProduction();
};

#endif