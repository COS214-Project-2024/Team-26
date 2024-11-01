#ifndef FACTORY_H
#define FACTORY_H

#include "IndustrialBuilding.h"

class Factory: public IndustrialBuilding {
private: 
	int resourceProduction;

public:
	Factory() = default;
	int getResourceProduction();
};

#endif
