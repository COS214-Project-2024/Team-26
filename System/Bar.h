#ifndef BAR_H
#define BAR_H

#include "EntertainmentBuilding.h"

class Bar : public EntertainmentBuilding
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