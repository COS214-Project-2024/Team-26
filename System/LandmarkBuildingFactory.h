#ifndef LANDMARKBUILDINGFACTORY_H
#define LANDMARKBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Building.h"
#include "Park.h"
#include "Monument.h"

class LandmarkBuildingFactory : BuildingFactory
{

public:
	Building *createBuilding();
};

#endif
