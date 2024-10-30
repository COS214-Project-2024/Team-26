#ifndef POPULATIONSTRATEGY_H
#define POPULATIONSTRATEGY_H

#include "CityMediator.h" // change to StatsMediator ?

class PopulationStrategy {

protected:
	CityMediator* mediator;

public:
    PopulationStrategy(CityMediator* mediator);

	virtual int execute() = 0;

	int getPopulation();
	int getSatisfaction();
	int getAvailableHousingSpace();
	int getAverageAge();
	int getImmigrationLimit();

	virtual ~PopulationStrategy();
};

#endif
