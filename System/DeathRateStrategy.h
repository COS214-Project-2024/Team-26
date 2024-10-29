#ifndef DEATHRATESTRATEGY_H
#define DEATHRATESTRATEGY_H

#include "PopulationStrategy.h"

class DeathRateStrategy : public PopulationStrategy {

public:
    DeathRateStrategy(CityMediator* med);

	int execute();

	virtual ~DeathRateStrategy() override;
};

#endif
