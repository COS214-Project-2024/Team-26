#ifndef BIRTHRATESTRATEGY_H
#define BIRTHRATESTRATEGY_H

#include "PopulationStrategy.h"

class BirthRateStrategy : public PopulationStrategy {

public:
    BirthRateStrategy();

	int execute() override;

	virtual ~BirthRateStrategy() override;
};

#endif
