#ifndef BUILDING_H
#define BUILDING_H

#include "BuildingState.h"

class Building
{

private:
	BuildingState *state;
	int LOCATION_X;
	int LOCATION_Y;
	int space;
	int occupancy;
	int powerConsumption;
	int waterConsumption;
	int buildCostMoney;
	int buildCostResources;

public:
	BuildingState *getState();

	void setState(BuildingState *state);

	BuildingState getAndSetNextState();

	int getXCoordinate();

	int getYCoordinate();

	int getSpace();

	int getOccupancy();

	int getAvailableSpace();

	int getPowerConsumption();

	int getWaterConsumption();

	virtual bool updateOccupancy(int i);

	virtual int getCostConsumption() = 0;

	virtual int getResourceConsumption() = 0;

	virtual int getRevenue() = 0;

	virtual int getSewageProduction() = 0;

	virtual int getWasteProduction() = 0;
};

#endif
