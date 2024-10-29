#include <exception>
using namespace std;

#ifndef __IndustrialBuilding_h__
#define __IndustrialBuilding_h__

#include "Building.h"

// class Building;
class IndustrialBuilding;

__abstract class IndustrialBuilding: public Building
{
	private: int _wasteProduction;

	public: virtual int getJobCapacity() = 0;

	public: virtual double getPollutionLevel() = 0;
};

#endif
