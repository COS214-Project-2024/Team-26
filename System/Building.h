#ifndef BUILDING_H
#define BUILDING_H

#include "BuildingState.h"

class Building
{

private:
	BuildingState *state;
	int LOCATION_X;
	int LOCATION_Y;
	int SPACE;
	int occupancy;
	int POWER_CONSUMPTION;
	int WATER_CONSUMPTION;
	int BUILD_COST_MONEY;
	int BUILD_COST_RESOURCES;

public:
	BuildingState *getState();

	void setState(BuildingState *state);

	BuildingState* getAndSetNextState();

	int getXCoordinate();

	int getYCoordinate();

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
};

#endif
