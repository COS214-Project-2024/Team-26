#include "ImmigrationStrategy.h"

ImmigrationStrategy:: ImmigrationStrategy(CityMediator* med) : PopulationStrategy(med) {
}

int ImmigrationStrategy::execute() {
	float housingPercentage = (this->getAvailableHousingSpace() / this->getTotalHousingSpace()) * 100;
}

ImmigrationStrategy:: ~ImmigrationStrategy() {
}
