#ifndef SERVICEBUILDING_H
#define SERVICEBUILDING_H

#include "Building.h"

class ServiceBuilding : public Building
{

public:
    ServiceBuilding();
    ~ServiceBuilding();
    virtual int getCostConsumption() = 0;
    virtual int getRevenue() = 0;
    virtual int getSewageProduction() = 0;
    virtual int getWasteProduction() = 0;

private:
    int costConsumption;
};

#endif