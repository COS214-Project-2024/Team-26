#ifndef POPULATIONSTRATEGY_H
#define POPULATIONSTRATEGY_H

#include "CityMediator.h"
#include "StatsMediator.h"

/**
 * @class PopulationStrategy
 * @brief Abstract base class defining a strategy for population-related operations in the city simulation.
 *
 * The PopulationStrategy class provides a base interface for strategies that affect the city's population.
 * Derived classes implement strategies by overriding the execute() method.
 * This class also provides helper methods to access relevant population statistics through the StatsMediator.
 */
class PopulationStrategy
{

protected:
	/**
	 * @brief Pointer to a StatsMediator object.
	 *
	 * The mediator allows the strategy to access statistics in the city used for the different strategies.
	 * This supports the Strategy design pattern by decoupling strategy behaviors from the data they operate on.
	 */
	StatsMediator *mediator;

public:
	/**
	 * @brief Default constructor for PopulationStrategy.
	 *
	 * Initializes a new PopulationStrategy by creating a new mediator for accessing the statistics.
	 */
	PopulationStrategy();

    /**
     * @brief Pure virtual function to execute the population strategy.
     *
     * This method must be implemented by derived classes to define a specific population strategy,
     * such as calculating birth rates and death rates. The method returns an integer representing
     * the outcome of the strategy.
     *
     * @return int - Result of the strategy's execution, which can represent a population adjustment.
     */
	virtual int execute() = 0;

    /**
     * @brief Retrieves the current population of the city.
     *
     * This method uses the mediator to access the current population count for the city.
     *
     * @return int - The current city population.
     */
	int getPopulation();
	/**
     * @brief Retrieves the current satisfaction level of the city's residents.
     *
     * This method uses the mediator to access satisfaction. It is a score out of 100.
     *
     * @return int - The satisfaction level of city residents.
     */
	int getSatisfaction();
	/**
     * @brief Retrieves the amount of available housing space in the city.
     *
     * This method uses the mediator to access the number of available housing units.
     * It can be used to check if there is space for an increase in population.
     *
     * @return int - The number of available housing spaces in the city.
     */
	int getAvailableHousingSpace();
	/**
     * @brief Retrieves the average age of the city's population.
     *
     * This method uses the mediator to access the average age,
     * which may be useful for strategies that depend on demographic factors.
     *
     * @return int - The average age of residents.
     */
	int getAverageAge();
	/**
     * @brief Retrieves the immigration limit set for the city.
     *
     * This method uses the mediator to access the current immigration cap,
     * determining how many immigrants are allowed per year.
     *
     * @return int - The maximum allowed number of immigrants.
     */
	int getImmigrationLimit();
	/**
     * @brief Retrieves the total housing capacity of the city.
     *
     * This method uses the mediator to access the total number of housing,
     * regardless of occupancy, indicating the city's maximum housing potential.
     *
     * @return int - The total housing space available in the city.
     */
	int getTotalHousingSpace();

    /**
     * @brief Virtual destructor for PopulationStrategy.
     *
     * Ensures proper cleanup in derived classes.
     */
	virtual ~PopulationStrategy();
};

#endif
