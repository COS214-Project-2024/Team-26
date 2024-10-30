#include <exception>
using namespace std;

#ifndef __IndustrialBuilding_h__
#define __IndustrialBuilding_h__

#include "Building.h"

// class Building;
class IndustrialBuilding;

class IndustrialBuilding : public Building
{
private:
	int wasteProduction;

public:
	virtual int getWasteProduction();
};

#endif
