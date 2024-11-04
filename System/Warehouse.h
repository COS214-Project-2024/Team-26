#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include "IndustrialBuilding.h"

class Warehouse: public IndustrialBuilding
{
private: 
	int resourceCapacity;

public:
	Warehouse(int x, int y) : IndustrialBuilding("Warehouse", x, y) {}
};

#endif
