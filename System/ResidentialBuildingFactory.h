#ifndef RESIDENTIALBUILDINGFACTORY_H
#define RESIDENTIALBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "ResidentialBuilding.h"
#include "House.h"
#include "TownHouse.h"
#include "Apartment.h"

class ResidentialBuildingFactory : public BuildingFactory
{

public:
	ResidentialBuildingFactory(std::string buildingName, int x, int y) : BuildingFactory(buildingName, x, y) {}

	virtual Building *createBuilding();
};

#endif
