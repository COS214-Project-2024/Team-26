#ifndef ITERATOR_H
#define ITERATOR_H

#include "Composite.h"

class Iterator {

	protected:
		Component* composite;
		int index;

	public:
		virtual Component* first() = 0;

		virtual Component* next() = 0;

		virtual bool hasNext() = 0;

		virtual Component* previous() = 0;

		virtual Component* current() = 0;

		virtual int length() = 0;

		virtual Component* get(int locationX, int locationY) = 0;

		virtual bool slotAvailable(int locationX, int locationY) = 0;

		virtual bool add(Building* building) = 0;

		virtual bool remove(int locationX, int locationY) = 0;

		virtual bool isLeaf() = 0;

		virtual BuildingState* getAndSetNextState() = 0;
};

#endif //ITERATOR_H