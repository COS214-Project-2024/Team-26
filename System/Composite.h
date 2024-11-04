#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <vector>

#include "Component.h"
#include "Iterator.h"
#include "Leaf.h"

class Iterator;

class Composite : public Component {

	private:
		const int MAXX = 50;
		const int MAXY = 50;

	public:
		std::vector<std::vector<Leaf*>> components;

		/**
		 * Not abstract since leaf does not implement createIterator
		 */
		Composite();

		/**
		 * @brief Clears the composite function
		 * 
		 */
		void clear();

		/**
		 * @brief Destroy the Composite object
		 * 
		 */
		~Composite();

		/**
		 * @brief Create a Iterator object
		 * 
		 * @return Iterator* 
		 */
		Iterator* createIterator();

		/**
		 * @brief Adds a Component to the Composite structure
		 * 
		 * @param component 
		 */
		void add(Building* building, int x, int y);

		/**
		 * @brief Removes a Component from the Composite structure
		 * 
		 * @param component 
		 */
		void remove(int x, int y);

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

		/**
		 * @brief Returns an array of buildings in structure
		 * 
		 * @return std::vector<Building*>
		 */
		std::vector<Building*> getAllBuildings() const;
	};

#endif // COMPOSITE_H