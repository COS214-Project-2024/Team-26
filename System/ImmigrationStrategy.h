#ifndef IMMIGRATIONSTRATEGY_H
#define IMMIGRATIONSTRATEGY_H

#include "PopulationStrategy.h"

/**
 * @class ImmigrationStrategy
 * @brief Concrete strategy class for handling immigration in the city.
 *
 * The ImmigrationStrategy class is derived from PopulationStrategy and implements the
 * execute() method to define how immigration should be handled in the context of
 * population management. It calculates and returns the number of new immigrants based on
 * available space, satisfaction, and ensuring the amount of immigrants is below the maximum
 * ammount allowed per year.
 */
class ImmigrationStrategy : public PopulationStrategy {

public:
    /**
     * @brief Default constructor for ImmigrationStrategy.
     *
     * Initializes a new ImmigrationStrategy instance to calculate and manage immigration
     * related population changes in the city.
     */
    ImmigrationStrategy();

    /**
     * @brief Executes the immigration strategy.
     *
     * This method determines the number of new immigrants to add to the city’s population.
     * It uses factors such as available housing, satisfaction levels, and ensuring the
     * immigrants do not exceed the limit. 
     *
     * @return int - The number of new immigrants added to the population.
     */
	int execute() override;

    /**
     * @brief Destructor for ImmigrationStrategy.
     *
     * As this class overrides a virtual destructor, it ensures safe deletion of resources 
     * in derived classes.
     */
    virtual ~ImmigrationStrategy() override;
};

#endif
