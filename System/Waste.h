#ifndef WASTE_H
#define WASTE_H

#include "PlantBuilding.h"

/**
 * @class Waste
 * @brief Represents a waste management facility in the city
 *
 * The Waste class is a specialized type of PlantBuilding that handles
 * solid waste management for the city. It processes and manages municipal
 * waste, contributing to the city's sanitation infrastructure.
 */
class Waste : public PlantBuilding
{
private:
	int wasteConsumption; /**< The amount of waste the facility can process per time unit */

public:
	/**
	 * @brief Default constructor for the Waste facility
	 */
	Waste();

	/**
	 * @brief Gets the current waste production rate from the facility
	 * @return The amount of processed waste output (e.g., recycled materials or energy)
	 */
	int getWasteProduction();

	/**
	 * @brief Gets the current waste processing capacity
	 * @return The amount of waste the facility can process
	 */
	int getWasteConsumption();
};

#endif