#ifndef HOSPITAL_H
#define HOSPITAL_H

#include "ServiceBuilding.h"

class Hospital : public ServiceBuilding
{

public:
    Hospital();
    ~Hospital();
    int getCostConsumption();
    int getRevenue();
    int getSewageProduction();
    int getWasteProduction();
};

#endif