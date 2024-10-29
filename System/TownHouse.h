#include <exception>
#include <string>
using namespace std;

#ifndef __TownHouse_h__
#define __TownHouse_h__

#include "ResidentialBuilding.h"

// class ResidentialBuilding;
class TownHouse;

class TownHouse: public ResidentialBuilding
{

	public: void construct();

	public: void maintain();

	public: double getMaintenanceCost();

	public: int getSize();

	public: string getBuildingType();

	public: int getResidentCapacity();

	public: double getHappinessContribution();
};

#endif
