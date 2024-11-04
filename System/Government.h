#ifndef GOVERNMENT_H
#define GOVERNMENT_H

#include "Citizen.h"
#include "Building.h"
#include <vector>

/**
 * @class Government
 * @brief Manages citizens, buildings, and tax policies, including tax collection and fund allocation.
 */
class Government
{
private:
    double oldIncomeTaxRate;           /**< Previous income tax rate before the last change. */
    double oldPropertyTaxRate;         /**< Previous property tax rate before the last change. */
    double incomeTaxRate;              /**< Current income tax rate. */
    double propertyTaxRate;            /**< Current property tax rate. */
    double taxFundsCollected;          /**< Total funds collected from taxes. */
    std::vector<Citizen *> citizens;   /**< Vector of citizens under the government's jurisdiction. */

public:
    /**
     * @brief Constructor to initialize the government with specific tax rates.
     * @param incomeTaxRate Initial income tax rate.
     * @param propertyTaxRate Initial property tax rate.
     */
    Government(double incomeTaxRate, double propertyTaxRate);

    /**
     * @brief Adds a citizen to the government's jurisdiction.
     * @param citizen Pointer to the citizen to be added.
     */
    void addCitizen(Citizen *citizen, Building* house = nullptr, Building* job = nullptr);

    /**
     * @brief Removes a citizen from the government's jurisdiction.
     * @param citizen Pointer to the citizen to be removed.
     */
    void removeCitizen(Citizen *citizen);

    /**
     * @brief Sets a new income tax rate.
     * @param taxRate The new income tax rate to be set.
     */
    void setIncomeTaxRate(double taxRate);

    /**
     * @brief Sets a new property tax rate.
     * @param taxRate The new property tax rate to be set.
     */
    void setPropertyTaxRate(double taxRate);

    /**
     * @brief Notifies citizens of a change in tax rates.
     */
    void notifyTaxChange();

    /**
     * @brief Collects income tax from all citizens.
     */
    void collectIncomeTax();

    /**
     * @brief Collects property tax from property owners.
     */
    void collectPropertyTax(); // Implement with mediator

    /**
     * @brief Gets the current income tax rate.
     * @return The current income tax rate.
     */
    double getIncomeTaxRate();

    /**
     * @brief Gets the current property tax rate.
     * @return The current property tax rate.
     */
    double getPropertyTaxRate();

    /**
     * @brief Allocates the collected tax funds for government spending.
     */
    void allocateTaxFunds(); // Implement with mediator

    /**
     * @brief Gets a random citizen from the government’s jurisdiction.
     * @return Pointer to a randomly selected Citizen.
     */
    Citizen *getRandomCitizen();

    /**
     * @brief Evicts citizens from a specific building.
     * @param building Pointer to the building from which citizens are to be evicted.
     */
    void evictCitizens(Building *building);

    /**
     * @brief Eliminates a specified number of citizens from the government's jurisdiction.
     * @param numberOfCitizens The number of citizens to be removed.
     */
    void eliminateCitizens(int numberOfCitizens);

    /**
     * @brief Gets the current population size.
     * @return The total number of citizens.
     */
    int getPopulation();

    /**
     * @brief Calculates the average satisfaction of all citizens.
     * @return The average satisfaction level of citizens.
     */
    double getAverageSatisfaction();

    /**
     * @brief Calculates the average age of all citizens.
     * @return The average age of citizens.
     */
    int getAverageAge();

    /**
     * @brief Ages all current citizens
     * @param amount Number of years to age by, default is 1.
     */
    void ageAll(int amount = 1);
};

#endif
