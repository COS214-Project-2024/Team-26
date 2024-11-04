#ifndef INDUSTRIALBUILDINGFACTORY_H
#define INDUSTRIALBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Building.h"
#include "Warehouse.h"
#include "Factory.h"

class IndustrialBuildingFactory : public BuildingFactory {

public:
	IndustrialBuildingFactory(std::string buildingName, int x, int y) : BuildingFactory(buildingName, x, y) {}

	Building *createBuilding();
};

#endif
