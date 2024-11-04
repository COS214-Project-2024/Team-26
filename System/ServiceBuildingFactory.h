#ifndef SERVICEBUILDINGFACTORY_H
#define SERVICEBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Building.h"
#include "Police.h"
#include "Hospital.h"
#include "FireDepartment.h"

class ServiceBuildingFactory : public BuildingFactory
{

public:
	ServiceBuildingFactory(std::string buildingName, int x, int y) : BuildingFactory(buildingName, x, y) {}

	Building *createBuilding();
};

#endif
