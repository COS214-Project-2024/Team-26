#ifndef MONUMNET_H
#define MONUMNET_H

#include "LandmarkBuilding.h"

class Monument: public LandmarkBuilding {
public:
    Monument(int x, int y) : LandmarkBuilding("Monument", x, y) {}
};

#endif
