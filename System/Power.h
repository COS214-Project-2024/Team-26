#ifndef POWER_H
#define POWER_H

#include "PlantBuilding.h"

class Power : public PlantBuilding {
private:
    int powerProduction;
public:
    Power(int x, int y) : PlantBuilding("Power", x, y) {}
    int getPowerProduction() {return powerProduction;}
    
};

#endif