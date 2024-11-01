#ifndef PLANTBUILDING_H
#define PLANTBUILDING_H

#include "Building.h"

class PlantBuilding : public Building {
private:
    int wasteProduction;
public:
    PlantBuilding() = default;

    virtual int getCostConsumption() override;

	virtual int getRevenue() override;

	virtual int getSewageProduction() override;

	virtual int getWasteProduction() override;
};

#endif
