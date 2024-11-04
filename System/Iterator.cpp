#include "Iterator.h"

Iterator::Iterator() {
	this->composite = new Composite();
	this->currentX = 0;
	this->currentY = 0;
}

void Iterator::add(Building* building, int x, int y) {
	if (x >= this->composite->lengthX() || y >= this->composite->lengthY()) {
		return; // Out of bounds
	}
	if (this->composite->getComponent(x, y) == nullptr) {
		this->composite->add(building, x, y);
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
	return dynamic_cast<Leaf*>(composite->getComponent(currentX, currentY));
}

int Iterator::lengthX() {
	return composite->lengthX();
}

int Iterator::lengthY() {
	return composite->lengthY();
}

Building* Iterator::next() {
	if (currentX + 1 <= MAXX){
		return composite->getComponent(currentX + 1, currentY);
	} else {
		if (currentY + 1 <= MAXY) {
			return composite->getComponent(currentX, currentY + 1);
		} else {
			return nullptr;
		}
	}
}

Building* Iterator::previous() {
	if (currentX == 0 && currentY == 0) {
		return nullptr;
	} else {
		if (currentX > 0) {
			return composite->getComponent(currentX - 1, currentY);
		} else {
			if (currentY > 0) {
				return composite->getComponent(currentX, currentY - 1);
			}
		}
	}
	return nullptr;
}

bool Iterator::remove(int locationX, int locationY) {
	if (composite->getComponent(locationX, locationY) != nullptr) {
		composite->remove(locationX, locationY);
		return true;
	} else {
		return false;
	}
}

bool Iterator::slotAvailable(int locationX, int locationY) {
	if (composite->getComponent(locationX, locationY) == nullptr) {
		return true;
	} else {
		return false;
	}
}

BuildingState* Iterator::getAndSetNextState() {
	// TODO - implement ConcreteIterator::getAndSetNextState
	throw "Not yet implemented";
}

Building* Iterator::getHouse() {//NOT FINISHED, NEED FUNCTION TO MAKE SURE IT HAS OPEN SPOT
    std::random_device rd;
    std::mt19937 eng(rd());

    int x = std::uniform_int_distribution<>(0, this->composite->lengthX() - 1)(eng);
    int y = std::uniform_int_distribution<>(0, this->composite->lengthY() - 1)(eng);

    return dynamic_cast<Building*>(this->composite->getComponent(x, y));
}

Building* Iterator::getJob() { //NOT FINISHED, NEED FUNCTION TO MAKE SURE IT HAS JOB
    std::random_device rd;
    std::mt19937 eng(rd());

    int x = std::uniform_int_distribution<>(0, this->composite->lengthX() - 1)(eng);
    int y = std::uniform_int_distribution<>(0, this->composite->lengthY() - 1)(eng);

    return dynamic_cast<Building*>(this->composite->getComponent(x, y));
}