#ifndef LANDMARKBUILDINGFACTORY_H
#define LANDMARKBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Building.h"
#include "Park.h"
#include "Monument.h"

class LandmarkBuildingFactory : public BuildingFactory
{

public:
	LandmarkBuildingFactory(std::string buildingName, int x, int y) : BuildingFactory(buildingName, x, y) {}
	Building *createBuilding();
};

#endif
