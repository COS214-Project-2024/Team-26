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
	int revenue;

public:
	virtual int getRevenue();
	virtual int getJobCapacity() = 0;
	void setRevenue(int aRevenue);
};

#endif
