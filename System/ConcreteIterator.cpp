#include "ConcreteIterator.h"

ConcreteIterator::ConcreteIterator(Composite* composite) : Iterator(){
	this->composite = composite;
	this->currentX = 0;
	this->currentY = 0;
}

bool ConcreteIterator::add(Building* building, int x, int y) {
	if (x >= this->composite->lengthX() || y >= this->composite->lengthY()) {
		return false;
	}
	if (this->composite->getComponent(x, y) == nullptr) {
		this->composite->add(building, x, y);
		return true;
	} else {
		return false;
	}
}

Building* ConcreteIterator::current() {
	return composite->getComponent(currentX, currentY);
}

Building* ConcreteIterator::first() {
	// TODO - implement ConcreteIterator::first
	throw "Not yet implemented";
}

Building* ConcreteIterator::get(int locationX, int locationY) {
	// TODO - implement ConcreteIterator::get
	throw "Not yet implemented";
}

bool ConcreteIterator::hasNext() {
	// TODO - implement ConcreteIterator::hasNext
	throw "Not yet implemented";
}

bool ConcreteIterator::isLeaf() {
	// TODO - implement ConcreteIterator::isLeaf
	throw "Not yet implemented";
}

int ConcreteIterator::length() {
	// TODO - implement ConcreteIterator::length
	throw "Not yet implemented";
}

Building* ConcreteIterator::next() {
	// TODO - implement ConcreteIterator::next
	throw "Not yet implemented";
}

Building* ConcreteIterator::previous() {
	// TODO - implement ConcreteIterator::previous
	throw "Not yet implemented";
}

bool ConcreteIterator::remove(int locationX, int locationY) {
	// TODO - implement ConcreteIterator::remove
	throw "Not yet implemented";
}

bool ConcreteIterator::slotAvailable(int locationX, int locationY) {
	// TODO - implement ConcreteIterator::slotAvailable
	throw "Not yet implemented";
}

BuildingState* ConcreteIterator::getAndSetNextState() {
	// TODO - implement ConcreteIterator::getAndSetNextState
	throw "Not yet implemented";
}

Building* ConcreteIterator::getHouse() {
    std::random_device rd;
    std::mt19937 eng(rd());

    int x = std::uniform_int_distribution<>(0, this->composite->lengthX() - 1)(eng);
    int y = std::uniform_int_distribution<>(0, this->composite->lengthY() - 1)(eng);

    return dynamic_cast<Building*>(this->composite->getComponent(x, y));
}