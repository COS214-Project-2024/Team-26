#ifndef HOSPITAL_H
#define HOSPITAL_H

#include "ServiceBuilding.h"

class Hospital : public ServiceBuilding {
public:
    Hospital(int x, int y) : ServiceBuilding("Hospital", x, y) {}
};

#endif