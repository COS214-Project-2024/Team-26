#include "PopulationStrategy.h"

PopulationStrategy:: PopulationStrategy(CityMediator* mediator) {
	this->mediator = mediator;
}

int PopulationStrategy::getPopulation() {
	// return mediator->getPopulation();
}

int PopulationStrategy::getSatisfaction() {
	// return mediator->getSatisfaction();
}

int PopulationStrategy::getAvailableHousingSpace() {
	// return mediator->getAvailableHousingSpace();
}

int PopulationStrategy::getAverageAge() {
	// return mediator->getAverageAge();
}

int PopulationStrategy::getImmigrationLimit() {
	// return mediator->getImmigrationLimit();
}

PopulationStrategy:: ~PopulationStrategy() {
	if (this->mediator == NULL) {
		return;
	}
	delete this->mediator;
}
