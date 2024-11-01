#ifndef BUILDINGMEDIATOR_H
#define BUILDINGMEDIATOR_H

#include "CityMediator.h"

#include "BuildingFactory.h"
	#include "ResidentialBuildingFactory.h"
	#include "CommercialBuildingFactory.h"
	#include "ServiceBuildingFactory.h"
	#include "EntertainmentBuildingFactory.h"
	#include "LandmarkBuildingFactory.h"
	#include "IndustrialBuildingFactory.h"
	#include "PlantBuildingFactory.h"

#include "Iterator.h"

#include "Government.h"
	#include "ConcreteGovernment.h"

class BuildingMediator : public CityMediator {

private:
	BuildingFactory* factory;

	ConcreteGovernment* governemnt;

public:
	BuildingMediator();

	bool build(std::string& buildingName, int locationX, int locationY) override;

	bool demolish(int locationX, int locationY) override;

	~BuildingMediator();
};

#endif
