#ifndef ENTERTAINMENTBUILDING_H
#define ENTERTAINMENTBUILDING_H

#include "Building.h"

/**
 * @brief Class representing an entertainment building in the simulation
 *
 * EntertainmentBuilding extends the Building base class to implement
 * specific functionality for entertainment venues, including
 * revenue generation and resource consumption patterns.
 */
class EntertainmentBuilding : public Building
{
private:
	int revenue; ///< Revenue generated by the entertainment venue

public:
	EntertainmentBuilding(std::string name, int x, int y) : Building(name, x, y) {}

	/**
	 * @brief Get cost consumption for entertainment building
	 * @return Cost consumption value
	 */
	virtual int getCostConsumption() override;

	/**
	 * @brief Get revenue generated by entertainment building
	 * @return Revenue value
	 */
	virtual int getRevenue() override;

	/**
	 * @brief Get sewage production for entertainment building
	 * @return Sewage production value
	 */
	virtual int getSewageProduction() override;

	/**
	 * @brief Get waste production for entertainment building
	 * @return Waste production value
	 */
	virtual int getWasteProduction() override;
};

#endif