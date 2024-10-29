#ifndef SERVICEBUILDINGFACTORY_H
#define SERVICEBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Building.h"
#include "Police.h"
#include "Hospital.h"
#include "FireDepartment.h"

class ServiceBuildingFactory : BuildingFactory
{

public:
	Building *createBuilding();
};

#endif
