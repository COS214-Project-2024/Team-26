#ifndef COMMERCIALBUILDINGFACTORY_H
#define COMMERCIALBUILDINGFACTORY_H

#include "Building.h"
#include "BuildingFactory.h"
#include "Shop.h"
#include "Office.h"

/**
 * @brief Factory class for creating commercial buildings
 *
 * CommercialBuildingFactory specializes BuildingFactory to create
 * specific types of commercial buildings such as shops and offices.
 */
class CommercialBuildingFactory : public BuildingFactory
{
public:
	/**
	 * @brief Create a new commercial building
	 * @return Pointer to newly created commercial Building instance
	 */
	Building *createBuilding();
};

#endif