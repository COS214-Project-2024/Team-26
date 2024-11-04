#ifndef WATER_H
#define WATER_H

#include "PlantBuilding.h"

class Water : public PlantBuilding {
private: 
	int waterProduction;

public:
	Water(int x, int y) : PlantBuilding("Water", x, y) {}
	int getWaterProduction() {return waterProduction;}
};

#endif
