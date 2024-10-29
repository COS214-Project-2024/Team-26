#ifndef BUILDINGMEDIATOR_H
#define BUILDINGMEDIATOR_H

#include "CityMediator.h"

#include "BuildingFactory.h"
	#include "ResidentialBuildingFactory.h"
	#include "CommercialBuildingFactory.h"
	#include "ServiceBuildingFactory.h"
	#include "EntertainmentBuildingFactory.cpp"
	#include "LandmarkBuildingFactory.h"
	#include "IndustrialBuildingFactory.h"
	#include "PlantBuildingFactory.cpp"

class BuildingMediator : public CityMediator {

private:
	BuildingFactory* factory;
	// BuildingIterator buildings;

public:
	BuildingMediator();

	bool build(std::string& buildingName, int locationX, int locationY) override;

	// void assignCitizenBuildings(Citizen citizen);

	bool demolish(int locationX, int locationY) override;

	~BuildingMediator();
};

#endif
