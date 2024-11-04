#include "ImmigrationStrategy.h"

#include <iostream>
#include <cmath>

ImmigrationStrategy:: ImmigrationStrategy() : PopulationStrategy() {
}

int ImmigrationStrategy::execute() {
	if (getPopulation() == 0) {
		return getAvailableHousingSpace()/2;
	}
	
	float fImmig;
	int iImmig;

	float availHousingPercentage = (this->getAvailableHousingSpace() / this->getTotalHousingSpace()) * 100;
	int sat = this->getSatisfaction();
	int limit = this->getImmigrationLimit();

    float housingFactor;

	// housing availability to influence immigration
	if (availHousingPercentage == 0) {
		housingFactor = 0; // no immigrants if no space
	}
	if (availHousingPercentage > 0 && availHousingPercentage < 20.00)
	{
		housingFactor = 1;
	}
	else if (availHousingPercentage >= 20 && availHousingPercentage < 40)
	{
		housingFactor = 3;
	}
	else if (availHousingPercentage >= 40 && availHousingPercentage < 60)
	{
		housingFactor = 10;
	}
	else
	{
		housingFactor = 20;
	}

	fImmig = (this->getPopulation() / 100.0f * housingFactor) * (sat / 50.0f);  // formula
	iImmig = static_cast<int>(ceil(fImmig));

    // make sure number of immigrants don't exceed the limit
	if (iImmig > limit) {
		iImmig = limit; // build a wall! #makeamericagreatagain
	}

    // check if there is enough housing space to cater for immigrants
    if (iImmig > this->getAvailableHousingSpace()) {
		iImmig = this->getAvailableHousingSpace(); // GET OUT!!!
	}

    // number of immigrants per year
	return iImmig;
}

ImmigrationStrategy:: ~ImmigrationStrategy() {
}
