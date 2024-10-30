#ifndef ITERATOR_H
#define ITERATOR_H

#include "Composite.h"

class Iterator {

	public:
		virtual Building* first() = 0;

		virtual Building* next() = 0;

		virtual bool hasNext() = 0;

		virtual Building* previous() = 0;

		virtual Building* current() = 0;

		virtual int length() = 0;

		virtual Building* get(int locationX, int locationY) = 0;

		virtual bool slotAvailable(int locationX, int locationY) = 0;

		virtual bool add(Building* building, int x, int y) = 0;

		virtual bool remove(int locationX, int locationY) = 0;

		virtual bool isLeaf() = 0;

		virtual BuildingState* getAndSetNextState() = 0;
};

#endif //ITERATOR_H