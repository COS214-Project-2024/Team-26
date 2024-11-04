#ifndef Sewage_H
#define Sewage_H

#include "PlantBuilding.h"

class Sewage : public PlantBuilding {
private: 
	int sewageConsumption;

public:
	Sewage(int x, int y) : PlantBuilding("Sewage", x, y) {}
};

#endif
