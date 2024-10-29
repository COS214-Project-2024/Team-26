#include <exception>
#include <string>
using namespace std;

#ifndef __House_h__
#define __House_h__

#include "ResidentialBuilding.h"

// class ResidentialBuilding;
class House;

class House : public ResidentialBuilding
{

public:
	House();
	void construct();

public:
	void maintain();

public:
	double getMaintenanceCost();

public:
	int getSize();

public:
	string getBuildingType();

public:
	int getResidentCapacity();

public:
	double getHappinessContribution();
};

#endif
