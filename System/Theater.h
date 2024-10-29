#ifndef THEATER_H
#define THEATER_H

#include "EntertainmentBuilding.h"

class Theater : public EntertainmentBuilding
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