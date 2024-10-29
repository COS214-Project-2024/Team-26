#ifndef BOWLING_H
#define BOWLING_H

#include "EntertainmentBuilding.h"

class Bowling : public EntertainmentBuilding
{
private:
    int revenue;

public:
    Theater(int revenue, int consumption);
    virtual int getRevenue();
    virtual int getConsumption();
    virtual int getSewageProduction();
    virtual int getWasteProduction();
};
#endif