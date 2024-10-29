<<<<<<< HEAD
#include "BirthRateStrategy.h"

#include <iostream>
#include <cmath>

BirthRateStrategy::BirthRateStrategy(CityMediator *med) : PopulationStrategy(med)
{
}

int BirthRateStrategy::execute()
{
	float fBirthRate;
	int iBirthRate;
	float avgAgeFactor;

	int remainingSpace = this->getAvailableHousingSpace() - this->getPopulation();
	int avgAge = this->getAverageAge();

	// different age groups will contirbute differently to birth rates.
	// get the factor for each age group.
	if (avgAge < 18)
	{
		avgAgeFactor = 7;
	}
	else if (avgAge >= 18 && avgAge <= 35)
	{
		avgAgeFactor = 40;
	}
	else if (avgAge > 35 && avgAge <= 60)
	{
		avgAgeFactor = 20;
	}
	else
	{
		avgAgeFactor = 2;
	}

	// NOTE: ASSUME SATISFACTION IS A SCORE OUT OF 100
	// calculate the birth rate per year.
	fBirthRate = (this->getPopulation() / 1000 * avgAgeFactor) * (this->getSatisfaction() / 50);
	iBirthRate = round(fBirthRate); // number of babies

	int newRemainingSpace = remainingSpace - iBirthRate;

	// if there isn't enough housing space for all the new babies.
	if (newRemainingSpace < 0)
	{
		iBirthRate = remainingSpace;
		return iBirthRate;
	}

	return iBirthRate;
}

BirthRateStrategy::~BirthRateStrategy()
{
}
=======
#include "BirthRateStrategy.h"

BirthRateStrategy:: BirthRateStrategy(CityMediator* med) : PopulationStrategy(med) {
}

int BirthRateStrategy::execute() {
	// TODO - implement BirthRateStrategy::execute
	throw "Not yet implemented";
}

BirthRateStrategy:: ~BirthRateStrategy() {
}
>>>>>>> f1b5fbc8cef36708df2474be115502894c849295
