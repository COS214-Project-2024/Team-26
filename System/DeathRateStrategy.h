<<<<<<< HEAD
#ifndef DEATHRATESTRATEGY_H
#define DEATHRATESTRATEGY_H

#include "PopulationStrategy.h"

class DeathRateStrategy : public PopulationStrategy {

public:
    DeathRateStrategy(CityMediator* med);

	int execute() override;

	virtual ~DeathRateStrategy() override;
};

#endif
=======
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
>>>>>>> f1b5fbc8cef36708df2474be115502894c849295
