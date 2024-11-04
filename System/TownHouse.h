#ifndef TOWNHOUSE_H
#define TOWNHOUSE_H

#include "ResidentialBuilding.h"

class TownHouse: public ResidentialBuilding {
public:
    TownHouse(int x, int y) : ResidentialBuilding("TownHouse", x, y) {}
};

#endif
