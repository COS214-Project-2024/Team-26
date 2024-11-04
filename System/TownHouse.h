#ifndef TOWNHOUSE_H
#define TOWNHOUSE_H

#include "ResidentialBuilding.h"

/**
 * @class TownHouse
 * @brief Represents a townhouse residential building
 *
 * The TownHouse class is a specialized type of ResidentialBuilding that provides
 * medium-density housing for citizens. It represents a specific style of urban
 * residential architecture, typically featuring multiple floors and shared walls.
 */
class TownHouse: public ResidentialBuilding {
public:
    TownHouse(int x, int y) : ResidentialBuilding("TownHouse", x, y) {}
};

#endif