#ifndef POLICE_H
#define POLICE_H

#include "ServiceBuilding.h"

/**
 * @class Police
 * @brief Represents a police station in the city
 *
 * The Police class is a specialized type of ServiceBuilding that provides
 * law enforcement services to the city. It maintains public safety and
 * has associated operational costs.
 */
class Police : public ServiceBuilding
{
private:
    int costConsumption; /**< The operational costs of running the police station */
};

#endif