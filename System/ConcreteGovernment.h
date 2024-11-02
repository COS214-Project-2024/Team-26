#ifndef CONCRETEGOVERNMENT_H
#define CONCRETEGOVERNMENT_H

#include "Government.h"

/**
 * @class ConcreteGovernment
 * @brief Singleton class that represents a specific type of Government.
 *
 * ConcreteGovernment is a subclass of Government, enforcing a singleton pattern to ensure only one instance exists.
 */
class ConcreteGovernment : public Government
{
private:
    static ConcreteGovernment *instancePtr; /**< Pointer to the single instance of ConcreteGovernment. */

    /**
     * @brief Private constructor for the singleton instance of ConcreteGovernment.
     * @param incomeTaxRate Initial income tax rate.
     * @param propertyTaxRate Initial property tax rate.
     */
    ConcreteGovernment(double incomeTaxRate, double propertyTaxRate);

public:
    /**
     * @brief Provides access to the singleton instance of ConcreteGovernment.
     * @return Pointer to the singleton instance of ConcreteGovernment.
     */
    static ConcreteGovernment *instance();

protected:
    /**
     * @brief Protected destructor for the singleton instance of ConcreteGovernment.
     */
    ~ConcreteGovernment();
};

#endif
