#ifndef COMMERCIALBUILDINGFACTORY_H
#define COMMERCIALBUILDINGFACTORY_H

#include "Building.h"
#include "BuildingFactory.h"
#include "Shop.h"
#include "Office.h"

class CommercialBuildingFactory : public BuildingFactory
{

public:
	CommercialBuildingFactory(std::string buildingName, int x, int y) : BuildingFactory(buildingName, x, y) {}

	Building *createBuilding();
};

#endif
