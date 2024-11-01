#ifndef INDUSTRIALBUILDINGFACTORY_H
#define INDUSTRIALBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Building.h"
#include "Warehouse.h"
#include "Factory.h"

class IndustrialBuildingFactory : public BuildingFactory {

public:
	Building *createBuilding();
};

#endif
