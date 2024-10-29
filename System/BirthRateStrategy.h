<<<<<<< HEAD
#ifndef BIRTHRATESTRATEGY_H
#define BIRTHRATESTRATEGY_H

#include "PopulationStrategy.h"

class BirthRateStrategy : public PopulationStrategy {

public:
    BirthRateStrategy(CityMediator* med);

	int execute() override;

	virtual ~BirthRateStrategy() override;
};

#endif
=======
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
>>>>>>> f1b5fbc8cef36708df2474be115502894c849295
