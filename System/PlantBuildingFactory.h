#ifndef PLANTBUILDINGFACTORY_H
#define PLANTBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Building.h"
#include "Power.h"
#include "Water.h"
#include "Sewage.h"
#include "Waste.h"

class PlantBuildingFactory : public BuildingFactory
{

public:
	PlantBuildingFactory(std::string buildingName, int x, int y) : BuildingFactory(buildingName, x, y) {}

	Building *createBuilding();
};

#endif