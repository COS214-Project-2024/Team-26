#ifndef COMMERCIALBUILDINGFACTORY_H
#define COMMERCIALBUILDINGFACTORY_H

#include "Building.h"
#include "BuildingFactory.h"
#include "Shop.h"
#include "Office.h"
class CommercialBuildingFactory : public BuildingFactory
{

public:
	Building *createBuilding();
};

#endif
