#ifndef TURNMEDIATOR_H
#define TURNMEDIATOR_H

#include <cstdlib>

#include "CityMediator.h"

#include "PopulationStrategy.h"
	#include "BirthRateStrategy.h"
	#include "DeathRateStrategy.h"
	#include "ImmigrationStrategy.h"

#include "Government.h"
	#include "ConcreteGovernment.h"

class TurnMediator : public CityMediator {
private:
	ConcreteGovernment* government;

public:
	TurnMediator();

	void nextRound();

	int handlePopulation();

	void updateStats();

	int changeTaxRates(int newRate);

	virtual ~TurnMediator();
};

#endif
