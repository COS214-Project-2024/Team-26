#ifndef COMMERCIALBUILDING_H
#define COMMERCIALBUILDING_H

#include "Building.h"

class CommercialBuilding : public Building
{
private:
	int revenue;

public:
	virtual int getCostConsumption() override;

	virtual int getRevenue() override;

	virtual int getSewageProduction() override;

	virtual int getWasteProduction() override;
};

#endif