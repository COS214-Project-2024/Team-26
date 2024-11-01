#ifndef SERVICEBUILDING_H
#define SERVICEBUILDING_H

#include "Building.h"

class ServiceBuilding : public Building
{
private:
    int costConsumption;

public:
    ServiceBuilding() = default;

    virtual int getCostConsumption() override;

	virtual int getRevenue() override;

	virtual int getSewageProduction() override;

	virtual int getWasteProduction() override;
};

#endif