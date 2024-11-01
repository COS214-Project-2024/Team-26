#ifndef POWER_H
#define POWER_H

#include "PlantBuilding.h"

class Power : public PlantBuilding {
private:
    int powerProduction;
public:
    int getPowerProduction() {return powerProduction;}
    
};

#endif