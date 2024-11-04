#ifndef FIREDEPARTMENT_H
#define FIREDEPARTMENT_H

#include "ServiceBuilding.h"

class FireDepartment : public ServiceBuilding {

public:
    FireDepartment(int x, int y) : ServiceBuilding("FireDepartment", x, y) {}

private:
    int costConsumption;
};

#endif