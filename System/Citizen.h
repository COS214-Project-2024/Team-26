#ifndef Citizen_H
#define Citizen_H

#include "Building.h"
#include <cstdlib>

/**
 * @class Citizen
 * @brief Represents a citizen with attributes such as satisfaction, income, age, and associations with a house and job.
 */
class Citizen
{
protected:
    int satisfaction;       /**< Satisfaction level of the citizen. */
    Building *house;        /**< Pointer to the building where the citizen lives. */
    Building *job;          /**< Pointer to the building where the citizen works. */
    double income = rand() % 1000;          /**< Income level of the citizen. */
    int age;                /**< Age of the citizen. */

public:
    /**
     * @brief Constructor to initialize a Citizen with income and age.
     * @param income Initial income of the citizen.
     * @param age Initial age of the citizen.
     */
    Citizen(double income, int age);

    /**
     * @brief Creates a clone of the citizen representing a child.
     * @return A pointer to a new Citizen object.
     */
    Citizen *cloneChild();

    /**
     * @brief Creates a clone of the citizen with the specified job.
     * @param job Pointer to the building where the cloned citizen will work.
     * @return A pointer to a new Citizen object.
     */
    Citizen *cloneRelated(Building *job);

    /**
     * @brief Creates a clone of the citizen with a specified job and house.
     * @param job Pointer to the building where the cloned citizen will work.
     * @param house Pointer to the building where the cloned citizen will live.
     * @return A pointer to a new Citizen object.
     */
    Citizen *cloneUnrelated(Building *job, Building *house);

    /**
     * @brief Adjusts the citizen's income based on a tax rate change.
     * @param newTaxRate The new tax rate to be applied.
     * @param CurrentTaxRate The current tax rate before the change.
     */
    void taxChange(double newTaxRate, double CurrentTaxRate);

    /**
     * @brief Assigns a house to the citizen.
     * @param house Pointer to the building to be assigned as the citizen's house.
     */
    void assignHouse(Building *house);

    /**
     * @brief Assigns a job to the citizen.
     * @param building Pointer to the building to be assigned as the citizen's job.
     */
    void assignJob(Building *building);

    /**
     * @brief Increases the age of the citizen by a specified amount.
     * @param increaseAmount The amount by which the age will be increased.
     * @return The new age of the citizen.
     */
    int increaseAge(int increaseAmount);

    /**
     * @brief Sets the income of the citizen.
     * @param income The new income to be set.
     */
    void setIncome(int income);

    /**
     * @brief Gets the satisfaction level of the citizen.
     * @return The satisfaction level.
     */
    int getSatisfaction();

    /**
     * @brief Gets the citizen's house.
     * @return Pointer to the building where the citizen lives.
     */
    Building* getHouse();

    /**
     * @brief Gets the citizen's job.
     * @return Pointer to the building where the citizen works.
     */
    Building* getJob();

    /**
     * @brief Gets the income of the citizen.
     * @return The income of the citizen.
     */
    double getIncome();

    /**
     * @brief Gets the age of the citizen.
     * @return The age of the citizen.
     */
    int getAge();

    int satisfactionChange(int change);

    /**
     * @brief Destructor for the Citizen class.
     */
    ~Citizen();
};

#endif
