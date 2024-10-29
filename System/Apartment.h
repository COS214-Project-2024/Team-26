#ifndef Apartment_h
#define Apartment_h

#include <exception>
#include <string>
using namespace std;

#include "ResidentialBuilding.h"

// class ResidentialBuilding;
class Apartment;

class Apartment : public ResidentialBuilding
{

public:
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
