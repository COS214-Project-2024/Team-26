#include <exception>
#include <string>
using namespace std;

#ifndef __Warehouse_h__
#define __Warehouse_h__

#include "IndustrialBuilding.h"

// class IndustrialBuilding;
class Warehouse;

class Warehouse: public IndustrialBuilding
{
	private: int _capacity;
	private: int _usedCapacity;

	public: void construct();

	public: void maintain();

	public: double getMaintenanceCost();

	public: int getSize();

	public: string getBuildingType();

	public: int getJobCapacity();

	public: double getPollutionLevel();
};

#endif
