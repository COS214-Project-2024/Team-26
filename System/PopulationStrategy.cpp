#include "PopulationStrategy.h"

PopulationStrategy:: PopulationStrategy(CityMediator* mediator) {
	this->mediator = mediator;
}

int PopulationStrategy::getPopulation() {
	
}

int PopulationStrategy::getSatisfaction() {
	
}

int PopulationStrategy::getAvailableHousingSpace() {
	
}

int PopulationStrategy::getAverageAge() {
	
}

int PopulationStrategy::getImmigrationLimit() {
	
}

PopulationStrategy:: ~PopulationStrategy() {
	if (this->mediator == NULL) {
		return;
	}
	delete this->mediator;
}
