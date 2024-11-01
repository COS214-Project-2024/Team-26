#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <vector>

#include "Component.h"
#include "Iterator.h"
/*#include "Sewage.h"
#include "Water.h"
#include "Waste.h"
#include "Power.h"*/

class Composite : public Component{

	public:
		std::vector<std::vector<Building*>> components;

		/**
		 * Not abstract since leaf does not implement createIterator
		 */
		Composite();
		/**
		 * @brief Create a Iterator object
		 * 
		 * @return Iterator* 
		 */
		Iterator* createIterator() override;

		/**
		 * @brief Adds a Component to the Composite structure
		 * 
		 * @param component 
		 */
		void add(Building* component, int x, int y) override;

		/**
		 * @brief Removes a Component from the Composite structure
		 * 
		 * @param component 
		 */
		void remove(int x, int y) override;

		/**
		 * @brief Get the Component object
		 * 
		 * @param x 
		 * @param y 
		 * @return Component* 
		 */
		Building* getComponent(int x, int y);

		/**
		 * @brief Get the Total Power Consumption
		 * 
		 * @return int 
		 */
		int getTotalPowerConsumption() override;

		/**
		 * @brief Get the Total Water Consumption
		 * 
		 * @return int 
		 */
		int getTotalWaterConsumption() override;

		/**
		 * @brief Get the Total Cost Consumption
		 * 
		 * @return int 
		 */
		int getTotalCostConsumption() override;
		
		/**
		 * @brief Get the Total Sewage Consumption
		 * 
		 * @return int 
		 */
		int getTotalSewageConsumption() override;

		/**
		 * @brief Get the Total Waste Consumption
		 * 
		 * @return int 
		 */
		int getTotalWasteConsumption() override;

		/**
		 * @brief Get the Total Power Production
		 * 
		 * @return int 
		 */
		int getTotalPowerProduction() override;

		/**
		 * @brief Get the Total Water Production
		 * 
		 * @return int 
		 */
		int getTotalWaterProduction() override;

		/**
		 * @brief Get the Total Revenue
		 * 
		 * @return int 
		 */
		int getTotalRevenue() override;

		/**
		 * @brief Get the Total Sewage Production
		 * 
		 * @return int 
		 */
		int getTotalSewageProduction() override;

		/**
		 * @brief Get the Total Waste Production
		 * 
		 * @return int 
		 */
		int getTotalWasteProduction() override;

		/**
		 * @brief Get the And Set Next State
		 * 
		 * @return BuildingState 
		 */
		BuildingState* getAndSetNextState() override;

		/**
		 * @brief Gets the length of the X axis
		 * 
		 * @return int 
		 */
		int lengthX() const;

		/**
		 * @brief Gets the length of the Y axis
		 * 
		 * @return int 
		 */
		int lengthY() const;
	};

#endif // COMPOSITE_H