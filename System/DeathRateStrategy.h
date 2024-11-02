#ifndef DEATHRATESTRATEGY_H
#define DEATHRATESTRATEGY_H

#include "PopulationStrategy.h"

/**
 * @class DeathRateStrategy
 * @brief Concrete strategy class for handling deaths in the city.
 *
 * The DeathRateStrategy class is derived from PopulationStrategy and implements the
 * execute() method to define how deaths should be handled in the context of
 * population management. It calculates and returns the number of deaths based on
 * satisfaction, and average age of the population.
 */
class DeathRateStrategy : public PopulationStrategy {

public:
    /**
     * @brief Default constructor for DeathRateStrategy.
     *
     * Initializes a new DeathRateStrategy instance to calculate and manage death
     * related population changes in the city.
     */
    DeathRateStrategy();

    /**
     * @brief Executes the death rate strategy.
     *
     * This method determines the number of deaths in the population.
     * It uses factors such as satisfaction levels, and average age of the
	 * population. 
     *
     * @return int - The number of deaths in the city.
     */
	int execute() override;

    /**
     * @brief Destructor for DeathRateStrategy.
     *
     * As this class overrides a virtual destructor, it ensures safe deletion of resources 
     * in derived classes.
     */
	virtual ~DeathRateStrategy() override;
};

#endif
