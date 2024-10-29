#include <exception>
#include <string>
using namespace std;

#ifndef __Park_h__
#define __Park_h__

#include "LandmarkBuilding.h"

// class LandmarkBuilding;
class Park;

class Park: public LandmarkBuilding
{

	public: void construct();

	public: void maintain();

	public: double getMaintenanceCost();

	public: int getSize();

	public: string getBuildingType();

	public: double getCultureContribution();

	public: double getTourismValue();
};

#endif
