#include "CitizenPrototype.h"
#include <iostream>
#include <cstdlib> // For rand()
#include <ctime>   // For time()
CitizenPrototype::CitizenPrototype(double income, int age)
{
	// this->government=gov;
	this->income = income;
	this->age = age;
	this->satisfaction = 100;
}

void CitizenPrototype::taxChange(double newTaxRate, double CurrentTaxRate)
{
	if (newTaxRate >= 0 && newTaxRate <= 1)
	{
		if (CurrentTaxRate < newTaxRate)
		{
			// observers are unhappy
			this->satisfaction -= 10;
			if (satisfaction < 0)
			{
				satisfaction = 0;
			}
		}
		else
		{
			if (CurrentTaxRate > newTaxRate)
			{
				// observers are happy
				this->satisfaction += 10;
				if (satisfaction > 100)
				{
					satisfaction = 100;
				}
			}
		}
	}
}

CitizenPrototype *CitizenPrototype::cloneChild()
{
	CitizenPrototype *child = new CitizenPrototype(0, 0);
	child->assignHouse(this->house);
	child->assignJob(nullptr);
	return child;
}

CitizenPrototype *CitizenPrototype::cloneRelated(Building *job)
{
	// Seed the random number generator
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	// Generate a random income value between 1000 and 10000
	int randomIncome = 1000 + rand() % (10000 - 1000 + 1);
	// Create a new CitizenPrototype with the random income and current age
	CitizenPrototype *related = new CitizenPrototype(randomIncome, this->age);
	related->assignHouse(this->house);
	related->assignJob(job);
	return related;
}

CitizenPrototype *CitizenPrototype::cloneUnrelated(Building *job, Building *house)
{
	// Seed the random number generator
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	// Generate a random income value between 1000 and 10000
	int randomIncome = 1000 + rand() % (10000 - 1000 + 1);
	// Create a new CitizenPrototype with the random income and current age
	CitizenPrototype *unrelated = new CitizenPrototype(randomIncome, this->age);
	unrelated->assignHouse(house);
	unrelated->assignJob(job);
	return unrelated;
}

void CitizenPrototype::assignHouse(Building *house)
{
	this->house = house;
	house->updateOccupancy(1);
}

void CitizenPrototype::assignJob(Building *building)
{
	this->job = building;
	job->updateOccupancy(1);
}

int CitizenPrototype::increaseAge(int increaseAmount)
{
	if (increaseAmount < 0)
	{
		std::cout << "Must be above 0 to increase the Age" << std::endl;
		return age;
	}

	age += increaseAmount;
	return age;
}

void CitizenPrototype::setIncome(int income)
{
	if (income < 0)
	{
		std::cout << "Income may not be less than 0" << std::endl;
		return;
	}

	this->income = income;
}

double CitizenPrototype::getIncome()
{
	return this->income;
}
