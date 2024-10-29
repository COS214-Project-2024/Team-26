#include <exception>
#include <string>
using namespace std;

#ifndef __Shop_h__
#define __Shop_h__

#include "CommercialBuilding.h"

// class CommercialBuilding;
class Shop;

class Shop: public CommercialBuilding
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
