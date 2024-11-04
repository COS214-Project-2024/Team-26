#ifndef INDUSTRIALBUILDING_H
#define INDUSTRIALBUILDING_H

#include "Building.h"

class IndustrialBuilding : public Building
{
private:
	int wasteProduction;

public:
	IndustrialBuilding(std::string name, int x, int y) : Building(name, x, y) {}

	virtual int getCostConsumption() override;

	virtual int getRevenue() override;

	virtual int getSewageProduction() override;

	virtual int getWasteProduction() override;
};

#endif
