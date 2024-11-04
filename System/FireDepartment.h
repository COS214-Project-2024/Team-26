#ifndef FIREDEPARTMENT_H
#define FIREDEPARTMENT_H

#include "ServiceBuilding.h"

/**
 * @class FireDepartment
 * @brief Represents a fire department building in the city
 *
 * The FireDepartment class is a specialized type of ServiceBuilding that provides
 * emergency services to the city and has associated operational costs.
 */
class FireDepartment : public ServiceBuilding
{

public:
    /**
     * @note Public interface to be implemented
     */

private:
    int costConsumption; /**< The operational costs of running the fire department */
};

#endif
