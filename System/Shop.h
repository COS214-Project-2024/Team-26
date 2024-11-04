#ifndef SHOP_H
#define SHOP_H

#include "CommercialBuilding.h"

/**
 * @class Shop
 * @brief Represents a retail shop in the commercial district
 *
 * The Shop class is a specialized type of CommercialBuilding that provides
 * retail services to citizens. It contributes to the city's economy and
 * provides shopping facilities for residents.
 */
class Shop : public CommercialBuilding
{
    public:
        Shop(int x, int y) : CommercialBuilding("Shop", x, y) {}
};

#endif