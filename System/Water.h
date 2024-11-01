#ifndef WATER_H
#define WATER_H

#include "PlantBuilding.h"

class Water : public PlantBuilding{
    public:
        Water();
        ~Water();
        int getWaterProduction();
};

#endif //WATER_H