#include <exception>
using namespace std;

#ifndef __LandmarkBuilding_h__
#define __LandmarkBuilding_h__

#include "Building.h"

// class Building;
class LandmarkBuilding;

__abstract class LandmarkBuilding: public Building
{
	private: int _statisfaction;

	public: virtual double getCultureContribution() = 0;

	public: virtual double getTourismValue() = 0;
};

#endif
