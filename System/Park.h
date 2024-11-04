#ifndef PARK_H
#define PARK_H

#include "LandmarkBuilding.h"

/**
 * @class Park
 * @brief Represents a public park in the city
 *
 * The Park class is a specialized type of LandmarkBuilding that provides
 * recreational space for citizens. Parks contribute to citizen satisfaction
 * and environmental quality of the city.
 */
class Park : public LandmarkBuilding
{
    public:
        Park(int x, int y) : LandmarkBuilding("Park", x, y) {}
};

#endif
