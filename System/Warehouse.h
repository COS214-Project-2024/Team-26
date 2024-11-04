#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include "IndustrialBuilding.h"

/**
 * @class Warehouse
 * @brief Represents a storage warehouse in the industrial district
 *
 * The Warehouse class is a specialized type of IndustrialBuilding that provides
 * storage space for industrial goods and resources. It manages storage capacity
 * and contributes to the city's industrial infrastructure.
 */
class Warehouse : public IndustrialBuilding
{
private:
	int resourceCapacity; /**< The maximum amount of resources that can be stored in the warehouse */

public:
	Warehouse(int x, int y) : IndustrialBuilding("Warehouse", x, y) {}
	/**
	 * @note Public interface to be implemented
	 */
};

#endif