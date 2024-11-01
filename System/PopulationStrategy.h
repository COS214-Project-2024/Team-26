#ifndef POPULATIONSTRATEGY_H
#define POPULATIONSTRATEGY_H

#include "CityMediator.h" // change to StatsMediator ?
	#include "StatsMediator.h"
class PopulationStrategy {

protected:
	StatsMediator* mediator;

public:
    PopulationStrategy();

	virtual int execute() = 0;

	int getPopulation();
	int getSatisfaction();
	int getAvailableHousingSpace();
	int getAverageAge();
	int getImmigrationLimit();
	int getTotalHousingSpace();

	virtual ~PopulationStrategy();
};

#endif
