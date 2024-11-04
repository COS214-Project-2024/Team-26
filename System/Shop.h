#ifndef SHOP_H
#define SHOP_H

#include "CommercialBuilding.h"

class Shop: public CommercialBuilding {
    public:
        Shop(int x, int y) : CommercialBuilding("Shop", x, y) {}
};

#endif
