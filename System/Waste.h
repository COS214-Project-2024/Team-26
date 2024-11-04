#ifndef WASTE_H
#define WASTE_H

#include "PlantBuilding.h"

class Waste : public PlantBuilding {
private: 
	int wasteConsumption;

public:
	Waste(int x, int y) : PlantBuilding("Waste", x, y) {}

	int getWasteConsumption() {return wasteConsumption;}
};

#endif
