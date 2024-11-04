#ifndef BUILDING_H
#define BUILDING_H

#include "BuildingState.h"
	#include "PlacedState.h"
	#include "UnderConstructionState.h"
	#include "CompleteState.h"
	#include "DemolishedState.h"

class Building
{

protected:
	BuildingState *state;
	std::string name;
	int LOCATION_X;
	int LOCATION_Y;
	int SPACE;
	int occupancy = 0;
	int POWER_CONSUMPTION;
	int WATER_CONSUMPTION;
	int BUILD_COST_MONEY;
	int BUILD_COST_RESOURCES;

public:
	Building(std::string name, int x, int y);

	BuildingState *getState();

	void setState(BuildingState *state);

	BuildingState* getAndSetNextState();

	int getXCoordinate() {return LOCATION_X;}

	int getYCoordinate() {return LOCATION_Y;}

	int getSpace();

	int getOccupancy();

	virtual bool updateOccupancy(int i);

	int getAvailableSpace();

	int getPowerConsumption();

	int getWaterConsumption();

	virtual int getCostConsumption() = 0;

	virtual int getResourceConsumption();

	virtual int getRevenue() = 0;

	virtual int getSewageProduction() = 0;

	virtual int getWasteProduction() = 0;

	std::string getInfo();

	std::string getName();
};

#endif
