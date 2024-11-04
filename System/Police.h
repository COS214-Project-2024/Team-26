#ifndef POLICE_H
#define POLICE_H

#include "ServiceBuilding.h"

class Police : public ServiceBuilding
{

private:
    int costConsumption;

public:
    Police(int x, int y) : ServiceBuilding("Police", x, y) {}
};

#endif