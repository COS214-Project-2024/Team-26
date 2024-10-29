#ifndef BIRTHRATESTRATEGY_H
#define BIRTHRATESTRATEGY_H

#include "PopulationStrategy.h"

class BirthRateStrategy : public PopulationStrategy {

public:
    BirthRateStrategy(CityMediator* med);

	int execute();

	virtual ~BirthRateStrategy() override;
};

#endif
