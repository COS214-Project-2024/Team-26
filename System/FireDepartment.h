#ifndef FIREDEPARTMENT_H
#define FIREDEPARTMENT_H

#include "ServiceBuilding.h"

class FireDepartment : public ServiceBuilding
{

public:
    FireDepartment();
    ~FireDepartment();
    int getCostConsumption();
    int getRevenue();
    int getSewageProduction();
    int getWasteProduction();

private:
    int costConsumption;
};

#endif