#ifndef Sewage_H
#define Sewage_H

#include "PlantBuilding.h"

/**
 * @class Sewage
 * @brief Represents a sewage treatment plant in the city
 *
 * The Sewage class is a specialized type of PlantBuilding that handles
 * waste water treatment for the city. It manages sewage processing
 * capacity and related infrastructure needs.
 */
class Sewage : public PlantBuilding
{
private:
	int sewageConsumption = 250; /**< The amount of sewage the plant can process */

public:
	Sewage(int x, int y) : PlantBuilding("Sewage", x, y) {}
	/**
	 * @note Public interface to be implemented
	 */

	int getSewageConsumption() {
		if (getState()->getStateName() == "Complete")
			return sewageConsumption;
		else
			return 0;
	}
};

#endif