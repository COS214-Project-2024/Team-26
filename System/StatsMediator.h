#ifndef STATSMEDIATOR_H
#define STATSMEDIATOR_H

#include <iostream>

#include "CityMediator.h"

#include "Government.h"
	#include "ConcreteGovernment.h"

class StatsMediator : public CityMediator {
private:
    ConcreteGovernment* government;

public:
	StatsMediator();

	int getPopulation();
    
    int getSatisfaction();

    int getAverageAge();

    int getAvailableHousingSpace();

    int getImmigrationLimit();

    int getTotalHousingSpace();

    void printBuildings();

	virtual ~StatsMediator() = default;
};

#endif
