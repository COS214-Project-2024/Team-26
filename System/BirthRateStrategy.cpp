#include "BirthRateStrategy.h"

#include <iostream>
#include <cmath>

BirthRateStrategy::BirthRateStrategy() : PopulationStrategy()
{
}

int BirthRateStrategy::execute()
{
	float fBirthRate;
	int iBirthRate;
	float avgAgeFactor;

	int remainingSpace = this->getAvailableHousingSpace();
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

	// calculate the birth rate per year.
	fBirthRate = (this->getPopulation() / 100.0f * avgAgeFactor) * (this->getSatisfaction() / 50.0f);
	iBirthRate = static_cast<int>(ceil(fBirthRate)); // number of babies

	int newRemainingSpace = remainingSpace - iBirthRate;

	// if there isn't enough housing space for all the new babies.
	if (newRemainingSpace < 0)
	{
		iBirthRate = remainingSpace; // kill the babies
	}

	return abs(iBirthRate);
}

BirthRateStrategy::~BirthRateStrategy()
{
}
