#include <exception>
using namespace std;

#ifndef __CommercialBuilding_h__
#define __CommercialBuilding_h__

#include "Building.h"

// class Building;
class CommercialBuilding;

class CommercialBuilding : public Building
{
private:
	int _revenue;

public:
	virtual double getRevenue() = 0;

public:
	virtual int getJobCapacity() = 0;

public:
	void setRevenue(int aRevenue);
};

#endif
