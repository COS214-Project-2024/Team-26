#ifndef BIRTHRATESTRATEGY_H
#define BIRTHRATESTRATEGY_H

#include "PopulationStrategy.h"

/**
 * @class BirthRateStrategy
 * @brief Concrete strategy class for handling births in the city.
 *
 * The BirthRateStrategy class is derived from PopulationStrategy and implements the
 * execute() method to define how births should be handled in the context of
 * population management. It calculates and returns the number of births based on
 * housing space, satisfaction, and average age of the population.
 */
class BirthRateStrategy : public PopulationStrategy {

public:
    /**
     * @brief Default constructor for BirthRateStrategy.
     *
     * Initializes a new BirthRateStrategy instance to calculate and manage birth
     * related population changes in the city.
     */
    BirthRateStrategy();

    /**
     * @brief Executes the birth rate strategy.
     *
     * This method determines the number of births in the population.
     * It uses factors such as housing space, satisfaction levels, and average age of the
	 * population. 
     *
     * @return int - The number of births in the city.
     */
	int execute() override;

    /**
     * @brief Destructor for BirthrateStrategy.
     *
     * As this class overrides a virtual destructor, it ensures safe deletion of resources 
     * in derived classes.
     */
	virtual ~BirthRateStrategy() override;
};

#endif
