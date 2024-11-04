#ifndef LANDMARKBUILDING_H
#define LANDMARKBUILDING_H

#include "Building.h"

/**
 * @brief A class representing landmark buildings in the city, such as monuments and parks
 * @details LandmarkBuilding is derived from the Building base class and implements
 *          functionality specific to landmark structures that contribute to city aesthetics
 *          and tourism.
 */
class LandmarkBuilding : public Building
{
private:
	/** @brief The amount of waste produced by the landmark building */
	int wasteProduction;

public:
	LandmarkBuilding(std::string name, int x, int y) :Building(name, x, y) {}

	/**
	 * @brief Gets the cost consumption of the landmark building
	 * @return The cost consumption value as an integer
	 */
	virtual int getCostConsumption() override;

	/**
	 * @brief Gets the revenue generated by the landmark building
	 * @return The revenue value as an integer
	 */
	virtual int getRevenue() override;

	/**
	 * @brief Gets the sewage production of the landmark building
	 * @return The sewage production value as an integer
	 */
	virtual int getSewageProduction() override;

	/**
	 * @brief Gets the waste production of the landmark building
	 * @return The waste production value as an integer
	 */
	virtual int getWasteProduction() override;
};

#endif