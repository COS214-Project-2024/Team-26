#ifndef ENTERTAINMENTBUILDING_H
#define ENTERTAINMENTBUILDING_H

#include "Building.h"

class EntertainmentBuilding : public Building
{
private:
    int revenue;

public:
    virtual int getConsumption() = 0;
    virtual int getRevenue() = 0;
    virtual int getSewageProduction() = 0;
    virtual int getWasteProduction() = 0;
};

#endif