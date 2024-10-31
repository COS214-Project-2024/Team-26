#include "Iterator.h"

Iterator::Iterator(Composite* composite) {
	this->composite = composite;
	this->currentX = 0;
	this->currentY = 0;
}

bool Iterator::add(Building* building, int x, int y) {
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

Building* Iterator::current() {
	return composite->getComponent(currentX, currentY);
}

Building* Iterator::first() {
	return composite->getComponent(0, 0);
}

Building* Iterator::get(int locationX, int locationY) {
	return composite->getComponent(locationX, locationY);
}

bool Iterator::hasNextX() {
	if (this->composite->getComponent(this->currentX + 1, this->currentY) != nullptr) {
		return true;
	} else {
		return false;
	}
}

bool Iterator::hasNextY() {
	if (this->composite->getComponent(this->currentX, this->currentY + 1) != nullptr) {
		return true;
	} else {
		return false;
	}
}

bool Iterator::isLeaf() {
	// TODO - implement ConcreteIterator::isLeaf
	throw "Not yet implemented";
}

int Iterator::length() {
	// TODO - implement ConcreteIterator::length
	throw "Not yet implemented";
}

Building* Iterator::next() {
	// TODO - implement ConcreteIterator::next
	throw "Not yet implemented";
}

Building* Iterator::previous() {
	// TODO - implement ConcreteIterator::previous
	throw "Not yet implemented";
}

bool Iterator::remove(int locationX, int locationY) {
	// TODO - implement ConcreteIterator::remove
	throw "Not yet implemented";
}

bool Iterator::slotAvailable(int locationX, int locationY) {
	// TODO - implement ConcreteIterator::slotAvailable
	throw "Not yet implemented";
}

BuildingState* Iterator::getAndSetNextState() {
	// TODO - implement ConcreteIterator::getAndSetNextState
	throw "Not yet implemented";
}

Building* Iterator::getHouse() {
    std::random_device rd;
    std::mt19937 eng(rd());

    int x = std::uniform_int_distribution<>(0, this->composite->lengthX() - 1)(eng);
    int y = std::uniform_int_distribution<>(0, this->composite->lengthY() - 1)(eng);

    return dynamic_cast<Building*>(this->composite->getComponent(x, y));
}