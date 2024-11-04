#ifndef WATER_H
#define WATER_H

#include "PlantBuilding.h"

/**
 * @class Water
 * @brief Represents a water treatment and distribution plant
 *
 * The Water class is a specialized type of PlantBuilding that manages
 * the city's water supply. It handles water production, treatment,
 * and distribution to meet the city's water needs.
 */
class Water : public PlantBuilding
{
private:
	int waterProduction; /**< The amount of water produced by the plant */

public:
	Water(int x, int y) : PlantBuilding("Water", x, y) {}
	/**
	 * @brief Gets the current water production rate
	 * @return The amount of water being produced by the plant
	 */
	int getWaterProduction() {
		if (getState()->getStateName() == "Complete")
			return waterProduction;
		else
			return 0;
	}
};

#endif