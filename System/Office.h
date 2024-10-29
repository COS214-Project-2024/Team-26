#include <exception>
#include <string>
using namespace std;

#ifndef __Office_h__
#define __Office_h__

#include "CommercialBuilding.h"

// class CommercialBuilding;
class Office;

class Office: public CommercialBuilding
{

	public: void construct();

	public: void maintain();

	public: double getMaintenanceCost();

	public: int getSize();

	public: string getBuildingType();

	public: double getRevenue();

	public: int getJobCapacity();
};

#endif
