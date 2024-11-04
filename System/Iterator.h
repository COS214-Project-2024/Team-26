#ifndef CONCRETEITERATOR_H
#define CONCRETEITERATOR_H

#include <random>
#include "Building.h"
#include "Composite.h"
#include "Leaf.h"

class Composite;

class Iterator{
	protected:
		Composite* composite;
		int currentX;
		int currentY;
		const int MAXX = 50;
		const int MAXY = 50;

	public:
		/**
		 * @brief Construct a new Concrete Iterator object
		 * 
		 */
		Iterator();
		/**
		 * @brief Adds a building to the list
		 * 
		 * @param building Object to be added
		 * @param x x-coordinate
		 * @param y y-coordinate
		 */
		void add(Building* building, int x, int y);

		/**
		 * @brief Adds another iterator to the list, i.e. merging the list
		 * 
		 * @attention If the space if already filled, it WILL NOT be replaced
		 * 
		 * @param otherIt The iterator that should be merged
		 */
		void add(Iterator* otherIt);
		
		/**
		 * @brief Adds another iterator to the list, i.e. merging the list
		 * 
		 * @attention If the space if already filled, it WILL BE REPLACED
		 * 
		 * @param otherIt The iterator that should be merged
		 */
		void addWithReplace(Iterator* otherIt);

		/**
		 * @brief Returns the current component
		 * 
		 * @return Component* 
		 */
		Building* current();

		/**
		 * @brief Returns the first component in the list
		 * 
		 * @return Component* 
		 */
		Building* first();

		/**
		 * @brief Gets the Component at the specific location
		 * 
		 * @param locationX 
		 * @param locationY 
		 * @return Component* 
		 */
		Building* get(int locationX, int locationY);

		/**
		 * @brief Checks if there is a component after the current one in the x axis
		 * 
		 * @return true 
		 * @return false 
		 */
		bool hasNextX();

		/**
		 * @brief Checks if there is a component after the current one in the y axis
		 * 
		 * @return true 
		 * @return false 
		 */
		bool hasNextY();

		/**
		 * @brief Checks if it is a leaf (singular object), if false it means it is a Composite object
		 * 
		 * @return true 
		 * @return false 
		 */
		bool isLeaf();

		/**
		 * @brief Returns the length of the list (X)
		 * 
		 * @return int 
		 */
		int lengthX();

		/**
		 * @brief Returns the length of the list (Y)
		 * 
		 * @return int 
		 */
		int lengthY();

		/**
		 * @brief Returns the next component
		 * 
		 * @return Component* 
		 */
		Building* next();

		/**
		 * @brief Returns the previous component
		 * 
		 * @return Component* 
		 */
		Building* previous();

		/**
		 * @brief Removes the object at that specific point
		 * 
		 * @param locationX 
		 * @param locationY 
		 * @return true 
		 * @return false 
		 */
		bool remove(int locationX, int locationY);

		/**
		 * @brief Returns if the slot is open to be used at the location
		 * 
		 * @param locationX 
		 * @param locationY 
		 * @return true 
		 * @return false 
		 */
		bool slotAvailable(int locationX, int locationY);

		/**
		 * @brief Get the And Set Next State
		 * 
		 * @return BuildingState* 
		 */
		BuildingState* getAndSetNextState();

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