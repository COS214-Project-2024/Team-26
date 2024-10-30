#ifndef CONCRETEITERATOR_H
#define CONCRETEITERATOR_H

#include <random>

#include "Iterator.h"

class ConcreteIterator : public Iterator {
	protected:
		Composite* composite;
		int currentX;
		int currentY;

	public:
		/**
		 * @brief Construct a new Concrete Iterator object
		 * 
		 */
		ConcreteIterator(Composite* composite);
		/**
		 * @brief Adds a building to the list
		 * 
		 * @param building
		 * @param x x-coordinate
		 * @param y y-coordinate
		 * @return true 
		 * @return false 
		 */
		bool add(Building* building, int x, int y) override;

		/**
		 * @brief Returns the current component
		 * 
		 * @return Component* 
		 */
		Building* current() override;

		/**
		 * @brief Returns the first component in the list
		 * 
		 * @return Component* 
		 */
		Building* first() override;

		/**
		 * @brief Gets the Component at the specific location
		 * 
		 * @param locationX 
		 * @param locationY 
		 * @return Component* 
		 */
		Building* get(int locationX, int locationY) override;

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
		Building* next() override;

		/**
		 * @brief Returns the previous component
		 * 
		 * @return Component* 
		 */
		Building* previous() override;

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

		/**
		 * @brief Get a random house object
		 * 
		 * @return Building* 
		 */
		Building* getHouse();

		/**
		 * @brief Get the random job
		 * 
		 * @return Building* 
		 */
		Building* getJob();
};

#endif //CONCRETEITERATOR_H