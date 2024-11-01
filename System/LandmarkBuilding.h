#ifndef LANDMARKBUILDING_H
#define LANDMARKBUILDING_H

#include "Building.h"

class LandmarkBuilding : public Building
{
private:
	int wasteProduction;

public:
	LandmarkBuilding() = default;

	virtual int getCostConsumption() override;

	virtual int getRevenue() override;

	virtual int getSewageProduction() override;

	virtual int getWasteProduction() override;
};

#endif
