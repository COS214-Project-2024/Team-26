#ifndef SERVICEBUILDING_H
#define SERVICEBUILDING_H

#include "Building.h"

class ServiceBuilding : public Building
{
private:
    int costConsumption;

public:
    virtual int getCostConsumption();
    virtual int getRevenue() = 0;
    virtual int getSewageProduction() = 0;
    virtual int getWasteProduction() = 0;
};

#endif