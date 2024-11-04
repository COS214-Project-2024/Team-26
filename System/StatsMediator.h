#ifndef STATSMEDIATOR_H
#define STATSMEDIATOR_H

#include <iostream>
#include <string>

#include "CityMediator.h"
#include "Government.h"
#include "ConcreteGovernment.h"

/**
 * @class StatsMediator
 * @brief Provides statistical data and detailed information for the city simulation.
 * 
 * The StatsMediator class retrieves various statistics related to population, housing,
 * and resources, as well as comprehensive city details, from government data.
 */
class StatsMediator : public CityMediator {
private:
    /**
     * @brief Pointer to the government instance providing city statistics.
     */
    ConcreteGovernment* government;

public:
    /**
     * @brief Constructs a StatsMediator object.
     */
    StatsMediator();

    /**
     * @brief Retrieves the current population of the city.
     * 
     * @return The population count as an integer.
     */
    int getPopulation();

    /**
     * @brief Retrieves the current satisfaction level of the population.
     * 
     * @return The satisfaction level as an integer.
     */
    int getSatisfaction();

    /**
     * @brief Retrieves the average age of the population.
     * 
     * @return The average age as an integer.
     */
    int getAverageAge();

    /**
     * @brief Retrieves the amount of available housing space in the city.
     * 
     * @return The available housing space as an integer.
     */
    int getAvailableHousingSpace();

    /**
     * @brief Retrieves the immigration limit set by the government.
     * 
     * @return The immigration limit as an integer.
     */
    int getImmigrationLimit();

    /**
     * @brief Retrieves the total housing space in the city.
     * 
     * @return The total housing space as an integer.
     */
    int getTotalHousingSpace();

    /**
     * @brief Retrieves all statistical data about the city as a single string.
     * 
     * @return A string containing all city statistics.
     */
    std::string getAllStats();

    /**
     * @brief Provides detailed information about the buildings in the city.
     * 
     * @return A string containing building details.
     */
    std::string buildingDetails();

    /**
     * @brief Provides detailed information about the city's population.
     * 
     * @return A string containing population details.
     */
    std::string populationDetails();

    /**
     * @brief Provides detailed information about the resources available in the city.
     * 
     * @return A string containing resource details.
     */
    std::string resourceDetails();

    double getTax();

    /**
     * @brief Default destructor for StatsMediator.
     */
    virtual ~StatsMediator() = default;
};

#endif