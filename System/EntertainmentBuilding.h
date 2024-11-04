#ifndef ENTERTAINMENTBUILDING_H
#define ENTERTAINMENTBUILDING_H

#include "Building.h"

class EntertainmentBuilding : public Building
{
private:
    int revenue;

public:
	EntertainmentBuilding(std::string name, int x, int y) : Building(name, x, y) {}

    virtual int getCostConsumption() override;

	virtual int getRevenue() override;

	virtual int getSewageProduction() override;

	virtual int getWasteProduction() override;
};

#endif