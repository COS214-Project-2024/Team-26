#ifndef ENTERTAINMENTBUILDINGFACTORY_H
#define ENTERTAINMENTBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Building.h"
#include "Theater.h"
#include "Bowling.h"
#include "Bar.h"

class EntertainmentBuildingFactory : public BuildingFactory {
public:
	EntertainmentBuildingFactory(std::string buildingName, int x, int y) : BuildingFactory(buildingName, x, y) {}

	Building *createBuilding();
};

#endif
