#ifndef SERVICEBUILDING_H
#define SERVICEBUILDING_H

#include "Building.h"

class ServiceBuilding : public Building
{
private:
    int costConsumption = rand() % 1000;
    int wasteProduction = rand() % 10;

public:
    ServiceBuilding(std::string name,int x, int y) : Building(name, x, y) {}

    virtual int getCostConsumption() override {
        if (getState()->getStateName() == "Complete")
            return costConsumption;
        else
            return 0;
    }

	virtual int getRevenue() override;

	virtual int getWasteProduction() override {
        if (getState()->getStateName() == "Complete")
			return wasteProduction;
		else
			return 0;
    }
};

#endif