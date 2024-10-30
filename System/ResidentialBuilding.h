#include <exception>
using namespace std;

#ifndef __ResidentialBuilding_h__
#define __ResidentialBuilding_h__

#include "Building.h"

// class Building;
class ResidentialBuilding;

class ResidentialBuilding : public Building
{
private:
	int sewageProduction;
	int wasteProduction;

public:
	virtual int getRevenue() = 0;
	virtual int getSewageProduction();
	virtual int getWasteProduction();
	virtual int getCostConsumption() = 0;
	// I think the methods below are from the old mdel, I'll leave them in case they were needed
	// virtual int getResidentCapacity() = 0;
	// virtual double getHappinessContribution() = 0;
};

#endif
