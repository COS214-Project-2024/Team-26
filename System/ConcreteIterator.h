#ifndef CONCRETEITERATOR_H
#define CONCRETEITERATOR_H

#include "Iterator.h"

class ConcreteIterator : Iterator {

	public:
		/**
		 * @brief Construct a new Concrete Iterator object
		 * 
		 */
		ConcreteIterator();
		/**
		 * @brief Adds a building to the list
		 * 
		 * @param building 
		 * @return true 
		 * @return false 
		 */
		bool add(Building* building) override;

		/**
		 * @brief Returns the current component
		 * 
		 * @return Component* 
		 */
		Component* current() override;

		/**
		 * @brief Returns the first component in the list
		 * 
		 * @return Component* 
		 */
		Component* first() override;

		/**
		 * @brief Gets the Component at the specific location
		 * 
		 * @param locationX 
		 * @param locationY 
		 * @return Component* 
		 */
		Component* get(int locationX, int locationY) override;

		/**
		 * @brief Checks if there is a component after the current one
		 * 
		 * @return true 
		 * @return false 
		 */
		bool hasNext() override;

		/**
		 * @brief Checks if it is a leaf (singular object), if false it means it is a Composite object
		 * 
		 * @return true 
		 * @return false 
		 */
		bool isLeaf() override;

		/**
		 * @brief Returns the length of the list
		 * 
		 * @return int 
		 */
		int length() override;

		/**
		 * @brief Returns the next component
		 * 
		 * @return Component* 
		 */
		Component* next() override;

		/**
		 * @brief Returns the previous component
		 * 
		 * @return Component* 
		 */
		Component* previous() override;

		/**
		 * @brief Removes the object at that specific point
		 * 
		 * @param locationX 
		 * @param locationY 
		 * @return true 
		 * @return false 
		 */
		bool remove(int locationX, int locationY) override;

		/**
		 * @brief Returns if the slot is open to be used at the location
		 * 
		 * @param locationX 
		 * @param locationY 
		 * @return true 
		 * @return false 
		 */
		bool slotAvailable(int locationX, int locationY) override;

		/**
		 * @brief Get the And Set Next State
		 * 
		 * @return BuildingState* 
		 */
		BuildingState* getAndSetNextState() override;

		Building* getHouse();
};

#endif //CONCRETEITERATOR_H