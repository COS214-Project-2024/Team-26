#ifndef POLICE_H
#define POLICE_H

#include "ServiceBuilding.h"

class Police : public ServiceBuilding
{

public:
    Police();
    ~Police();
    int getCostConsumption();
    int getRevenue();
    int getSewageProduction();
    int getWasteProduction();

private:
    int costConsumption;
};

#endif