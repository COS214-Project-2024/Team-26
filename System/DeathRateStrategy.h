#ifndef DEATHRATESTRATEGY_H
#define DEATHRATESTRATEGY_H

#include "PopulationStrategy.h"

class DeathRateStrategy : public PopulationStrategy {

public:
    DeathRateStrategy();

	int execute() override;

	virtual ~DeathRateStrategy() override;
};

#endif
