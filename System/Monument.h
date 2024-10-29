#include <exception>
#include <string>
using namespace std;

#ifndef __Monument_h__
#define __Monument_h__

#include "LandmarkBuilding.h"

// class LandmarkBuilding;
class Monument;

class Monument: public LandmarkBuilding
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
