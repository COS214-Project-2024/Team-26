#include "Citizen.h"
#include <iostream>
#include <cstdlib> // For rand()
#include <ctime>   // For time()
Citizen::Citizen(double income, int age)
{
	// this->government=gov;
	this->income = income;
	this->age = age;
	this->satisfaction = 100;
}

void Citizen::taxChange(double newTaxRate, double CurrentTaxRate)
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

Citizen *Citizen::cloneChild()
{
	Citizen *child = new Citizen(0, 0);
	child->assignHouse(this->house);
	child->assignJob(nullptr);
	return child;
}

Citizen *Citizen::cloneRelated(Building *job)
{
	// Seed the random number generator
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	// Generate a random income value between 1000 and 10000
	int randomIncome = 1000 + rand() % (10000 - 1000 + 1);
	// Create a new Citizen with the random income and current age
	Citizen *related = new Citizen(randomIncome, this->age);
	related->assignHouse(this->house);
	related->assignJob(job);
	return related;
}

Citizen *Citizen::cloneUnrelated(Building *job, Building *house)
{
	// Seed the random number generator
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	// Generate a random income value between 1000 and 10000
	int randomIncome = 1000 + rand() % (10000 - 1000 + 1);
	// Create a new Citizen with the random income and current age
	Citizen *unrelated = new Citizen(randomIncome, this->age);
	unrelated->assignHouse(house);
	unrelated->assignJob(job);
	return unrelated;
}

void Citizen::assignHouse(Building *house)
{

	if (house == nullptr) // meaning we want to leave the house
	{
		if (this->house != nullptr) // check if the Citizen currently lives in a house
		{
			this->house->updateOccupancy(-1);
			this->house = nullptr;
		}
	}

	this->house = house;
	if (house->getSpace() > house->getOccupancy())
	{
		house->updateOccupancy(1);
	}
}

void Citizen::assignJob(Building *building)
{
	if (building == nullptr) // meaning we want to leave the job
	{
		if (this->job != nullptr) // check if the Citizen currently has a job
		{
			this->job->updateOccupancy(-1);
			this->job = nullptr;
		}
	}

	this->job = building;
	if (job->getSpace() > job->getOccupancy())
	{
		job->updateOccupancy(1);
	}
}

int Citizen::increaseAge(int increaseAmount)
{
	if (increaseAmount < 0)
	{
		std::cout << "Must be above 0 to increase the Age" << std::endl;
		return age;
	}

	age += increaseAmount;
	return age;
}

void Citizen::setIncome(int income)
{
	if (income < 0)
	{
		std::cout << "Income may not be less than 0" << std::endl;
		return;
	}

	this->income = income;
}
int Citizen::getSatisfaction()
{
	return satisfaction;
}

Building *Citizen::getHouse()
{
	return house;
}

Building *Citizen::getJob()
{
	return job;
}

double Citizen::getIncome()
{
	return this->income;
}

int Citizen::getAge()
{
	return age;
}

Citizen::~Citizen()
{
	if (this->house!=nullptr)
	{
		this->house->updateOccupancy(-1);
		// delete house; //do not delete house because the house will still be there but the citizen won't
		this->house=nullptr;
	}

	if (this->job!=nullptr)
	{
		this->job->updateOccupancy(-1);
		// delete this->job; //do not delete job because the job will still be there but the citizen won't
		this->job=nullptr;
	
	}
}
