#ifndef TURNMEDIATOR_H
#define TURNMEDIATOR_H

#include <cstdlib>

#include "CityMediator.h"

#include "PopulationStrategy.h"
	#include "BirthRateStrategy.h"
	#include "DeathRateStrategy.h"
	#include "ImmigrationStrategy.h"

#include "Government.h"
	#include "ConcreteGovernment.h"


/**
 * @class TurnMediator
 * @brief Manages interactions within the city simulation, including handling population dynamics and government operations.
 * 
 * The TurnMediator class coordinates various aspects of city management in each round of the simulation,
 * such as updating the population, adjusting tax rates, and managing government decisions.
 */
class TurnMediator : public CityMediator {
private:
	/**
     * @brief Pointer to the government instance controlling the city's policies.
     */
	ConcreteGovernment* government;

public:
	/**
     * @brief Constructs a TurnMediator object and initializes required components.
     */
	TurnMediator();

	/**
     * @brief Advances the simulation to the next round.
     * 
     * @return An integer representing the status of the round update.
     */
	int nextRound();

	/**
     * @brief Updates the city's population based on birth, death, and immigration rates.
     * 
     * @return The updated population count.
     */
	int handlePopulation();

	/**
     * @brief Changes the tax rate within the government.
     * 
     * @param newRate The new tax rate to be applied.
     * @return The updated tax rate.
     */
	int changeTaxRates(double newRate);

     void handleResources();

     void handleSatisfaction();

	virtual ~TurnMediator();
};

#endif
