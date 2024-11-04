#ifndef WASTE_H
#define WASTE_H

#include "PlantBuilding.h"

class Waste : public PlantBuilding {
private: 
	int wasteConsumption;

public:
	Waste();
	int getWasteProduction();
	int getWasteConsumption();
};

#endif
