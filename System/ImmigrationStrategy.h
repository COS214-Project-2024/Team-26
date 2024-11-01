#ifndef IMMIGRATIONSTRATEGY_H
#define IMMIGRATIONSTRATEGY_H

#include "PopulationStrategy.h"

class ImmigrationStrategy : public PopulationStrategy {

public:
    ImmigrationStrategy();

	int execute() override;

    virtual ~ImmigrationStrategy() override;
};

#endif
