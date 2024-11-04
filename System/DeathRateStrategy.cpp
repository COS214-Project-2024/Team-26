#include "DeathRateStrategy.h"

#include <iostream>
#include <cmath>

DeathRateStrategy:: DeathRateStrategy() : PopulationStrategy() {
}

int DeathRateStrategy::execute() {
	float fDeathRate;
	int iDeathRate;

	float avgAgeFactor;
	int avgAge = this->getAverageAge();

	// different age groups will contirbute differently to death rates.
	// get the factor for each age group.
	if (avgAge < 18)
	{
		avgAgeFactor = 2;
	}
	else if (avgAge >= 18 && avgAge <= 35)
	{
		avgAgeFactor = 7;
	}
	else if (avgAge > 35 && avgAge <= 60)
	{
		avgAgeFactor = 20;
	}
	else
	{
		avgAgeFactor = 40;
	}

    float reverseSat = 100 - this->getSatisfaction();
	if (reverseSat == 0) {
		reverseSat = 10;
	}

	fDeathRate = (this->getPopulation() / 1000.0f * avgAgeFactor) * (reverseSat / 50.0f); // fDeathRate won't be larger than population size
	iDeathRate = round(fDeathRate); // number of deaths per year

	return iDeathRate;
}

DeathRateStrategy:: ~DeathRateStrategy() {
}
