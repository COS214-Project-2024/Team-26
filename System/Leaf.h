#ifndef LEAF_H
#define LEAF_H

#include "Component.h"

class Leaf : public Component {

	public:
		Building* building;
		/**
		 * @brief Construct a new Leaf object
		 * 
		 * @param building 
		 */
		Leaf(Building* building);

		/**
		 * @brief Destroy the Leaf object
		 * 
		 */
		~Leaf();

		/**
		 * @brief Get the Total Power Consumption of the component
		 * 
		 * @return int 
		 */
		int getTotalPowerConsumption() override;

		/**
		 * @brief Get the Total Water Consumption of the component
		 * 
		 * @return int 
		 */
		int getTotalWaterConsumption() override;

		/**
		 * @brief Get the Total Cost Consumption of the object
		 * 
		 * @return int 
		 */
		int getTotalCostConsumption() override;

		/**
		 * @brief Get the Total Sewage Consumption of the object
		 * 
		 * @return int 
		 */
		int getTotalSewageConsumption() override;

		/**
		 * @brief Get the Total Waste Consumption of the object
		 * 
		 * @return int 
		 */
		int getTotalWasteConsumption() override;

		/**
		 * @brief Get the Total Power Production of the object
		 * 
		 * @return int 
		 */
		int getTotalPowerProduction() override;

		/**
		 * @brief Get the Total Water Production of the object
		 * 
		 * @return int 
		 */
		int getTotalWaterProduction() override;

		/**
		 * @brief Get the Total Revenue of the object
		 * 
		 * @return int 
		 */
		int getTotalRevenue() override;

		/**
		 * @brief Get the Total Sewage Production of the object
		 * 
		 * @return int 
		 */
		int getTotalSewageProduction() override;

		/**
		 * @brief Get the Total Waste Production of the object
		 * 
		 * @return int 
		 */
		int getTotalWasteProduction() override;

		/**
		 * @brief Get the and set Next State object
		 * 
		 * @return BuildingState 
		 */
		BuildingState* getAndSetNextState() override;

		/**
		 * @brief Get the Building object
		 * 
		 * @return Building* 
		 */
		Building* getBuilding();
};

#endif // LEAF_H