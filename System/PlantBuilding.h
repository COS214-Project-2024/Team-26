#ifndef PLANTBUILDING_H
#define PLANTBUILDING_H

#include "Building.h"

class PlantBuilding : public Building {
private:
    int wasteProduction;
public:
    PlantBuilding(std::string name, int x, int y) : Building(name, x, y) {}

    virtual int getCostConsumption() override;

	virtual int getRevenue() override;

	virtual int getSewageProduction() override;

	virtual int getWasteProduction() override;
};

#endif
