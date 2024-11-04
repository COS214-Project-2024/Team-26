#ifndef HOUSE_H
#define HOUSE_H

#include "ResidentialBuilding.h"

class House : public ResidentialBuilding {
    public:
        House(int x, int y) : ResidentialBuilding("House", x, y) {}
};

#endif
