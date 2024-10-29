#ifndef IMMIGRATIONSTRATEGY_H
#define IMMIGRATIONSTRATEGY_H

#include "PopulationStrategy.h"

class ImmigrationStrategy : public PopulationStrategy {

public:
    ImmigrationStrategy(CityMediator* med);

	int execute();

    virtual ~ImmigrationStrategy() override;
};

#endif
