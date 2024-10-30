#include <exception>
using namespace std;

#ifndef __LandmarkBuilding_h__
#define __LandmarkBuilding_h__

#include "Building.h"

// class Building;
class LandmarkBuilding;

class LandmarkBuilding : public Building
{
private:
	int wasteProduction;

public:
	virtual int getWasteProduction();
};

#endif
