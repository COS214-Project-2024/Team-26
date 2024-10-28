#ifndef LEAF_H
#define LEAF_H

#include "Component.h"

class Leaf : public Component {

	public:
		Building* building;
		/**
		 * @brief 
		 * 
		 * @return Iterator* 
		 */
		Iterator* createIterator() override;
		
		/**
		 * @brief 
		 * 
		 * @param component 
		 */
		void add(Component* component) override;

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
		 * @brief Removes the Component from the Composite structure
		 * 
		 * @param component 
		 */
		void remove(Component* component) override;

		/**
		 * @brief Get the And Set Next State object
		 * 
		 * @return BuildingState 
		 */
		BuildingState getAndSetNextState() override;
};

#endif // LEAF_H
