#include <exception>
#include <string>
using namespace std;

#ifndef __Factory_h__
#define __Factory_h__

#include "IndustrialBuilding.h"

// class IndustrialBuilding;
class Factory;

class Factory: public IndustrialBuilding
{
	private: int _resourceProduction;

	public: void construct();

	public: void maintain();

	public: double getMaintenanceCost();

	public: int getSize();

	public: string getBuildingType();

	public: int getJobCapacity();

	public: double getPollutionLevel();
};

#endif
