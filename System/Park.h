#ifndef PARK_H
#define PARK_H

#include "LandmarkBuilding.h"

class Park: public LandmarkBuilding {
public:
    Park(int x, int y) : LandmarkBuilding("Park", x, y) {}
};

#endif
