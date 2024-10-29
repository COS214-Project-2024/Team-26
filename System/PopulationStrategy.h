#ifndef POPULATIONSTRATEGY_H
#define POPULATIONSTRATEGY_H

#include "CityMediator.h" // change to StatsMediator

class PopulationStrategy {

protected:
	CityMediator* mediator; // Stats

public:
    PopulationStrategy(CityMediator* mediator);  // Stats

	virtual int execute() = 0;
	int getPopulation();
	int getSatisfaction();
	int getAvailableHousingSpace();
	int getAverageAge();
	int getImmigrationLimit();

	virtual ~PopulationStrategy();
};

#endif
