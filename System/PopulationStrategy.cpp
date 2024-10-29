<<<<<<< HEAD
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
=======
#include "PopulationStrategy.h"

PopulationStrategy:: PopulationStrategy(CityMediator* mediator) {
	this->mediator = mediator;
}

int PopulationStrategy::getPopulation() {
	// TODO - implement PopulationStrategy::getPopulation
	throw "Not yet implemented";
}

int PopulationStrategy::getSatisfaction() {
	// TODO - implement PopulationStrategy::getSatisfaction
	throw "Not yet implemented";
}

int PopulationStrategy::getAvailableHousingSpace() {
	// TODO - implement PopulationStrategy::getAvailableHousingSpace
	throw "Not yet implemented";
}

int PopulationStrategy::getAverageAge() {
	// TODO - implement PopulationStrategy::getAverageAge
	throw "Not yet implemented";
}

int PopulationStrategy::getImmigrationLimit() {
	// TODO - implement PopulationStrategy::getImmigrationLimit
	throw "Not yet implemented";
}

PopulationStrategy:: ~PopulationStrategy() {
	if (this->mediator == NULL) {
		return;
	}
	delete this->mediator;
}
>>>>>>> f1b5fbc8cef36708df2474be115502894c849295
