#ifndef BUILDINGSTATE_H
#define BUILDINGSTATE_H

#include <string>
using namespace std;

class Building;

class BuildingState
{
protected:
    string stateName;

public:
    virtual string getStateName() = 0;
    virtual int getMoneyCost(Building *building) = 0;
    virtual int getResourceCost(Building *building) = 0;
    virtual int getPowerConsumption(Building *building) = 0;
    virtual int getWaterConsumption(Building *building) = 0;
    virtual int getOccupancy(Building *building) = 0;

    virtual int getSewageProduction(Building *building) = 0;

    virtual int getWasteProduction(Building *building) = 0;
};

#endif