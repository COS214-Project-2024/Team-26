#ifndef INDUSTRIALBUILDINGFACTORY_H
#define INDUSTRIALBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Building.h"
#include "Warehouse.h"
#include "Factory.h"

/**
 * @brief Factory class for creating industrial buildings
 *
 * IndustrialBuildingFactory specializes BuildingFactory to create
 * specific types of industrial buildings such as warehouses
 * and factories.
 */
class IndustrialBuildingFactory : public BuildingFactory
{
public:
	/**
	 * @brief Create a new industrial building
	 * @return Pointer to newly created industrial Building instance
	 */
	Building *createBuilding();
};

#endif