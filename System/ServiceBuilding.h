#ifndef SERVICEBUILDING_H
#define SERVICEBUILDING_H

#include "Building.h"

class ServiceBuilding : public Building
{
private:
    int costConsumption;

public:
    ServiceBuilding(std::string name,int x, int y) : Building(name, x, y) {}

    virtual int getCostConsumption() override;

	virtual int getRevenue() override;

	virtual int getSewageProduction() override;

	virtual int getWasteProduction() override;
};

#endif