#include "Government.h"
#include <algorithm> // For std::remove
#include <iostream>
Government::Government(double incomeTaxRate, double propertyTaxRate)
{
	this->taxFundsCollected = 0;
	this->oldIncomeTaxRate = incomeTaxRate;
	this->oldPropertyTaxRate = propertyTaxRate;
	this->incomeTaxRate = incomeTaxRate;
	this->propertyTaxRate = propertyTaxRate;
	this->taxFundsCollected = 0;
}

void Government::addCitizen(Citizen *citizen, Building* house, Building* job)
{
	if (citizen == nullptr) {
		return;
	}

	this->citizens.push_back(citizen);
	if (house)
		citizen->assignHouse(house);
	if (job)
		citizen->assignJob(job);
}

void Government::removeCitizen(Citizen *citizen)
{
	//this is to delete specific citizen
	if (citizen == nullptr)
	{
		return;
	}

	// Use std::remove to shift matching elements to the end, then erase them
	citizens.erase(std::remove(citizens.begin(), citizens.end(), citizen), citizens.end());
	delete citizen;
}

void Government::setIncomeTaxRate(double taxRate)
{
	if (taxRate >= 0 && taxRate <= 1)
	{
		this->oldIncomeTaxRate = incomeTaxRate;
		this->incomeTaxRate = taxRate;
	}

	notifyTaxChange();
}

void Government::setPropertyTaxRate(double taxRate)
{
	if (taxRate >= 0 && taxRate <= 1)
	{
		this->oldPropertyTaxRate = propertyTaxRate;
		this->propertyTaxRate = taxRate;
	}

	std::cout << "taxRate should be between 0 and 1" << std::endl;
	notifyTaxChange();
}

void Government::notifyTaxChange()
{
	for (size_t i = 0; i < this->citizens.size(); i++)
	{
		citizens.at(i)->taxChange(incomeTaxRate, oldIncomeTaxRate);
		citizens.at(i)->taxChange(propertyTaxRate, oldPropertyTaxRate);
	}
}

void Government::collectIncomeTax()
{
	double totalTaxCollected = 0;
	for (size_t i = 0; i < this->citizens.size(); i++)
	{
		totalTaxCollected += citizens.at(i)->getIncome() * getIncomeTaxRate();
	}

	this->taxFundsCollected += totalTaxCollected;
}

void Government::collectPropertyTax()
{
	// Emil must do PropertyTax with mediator
}

double Government::getTaxFundsCollected()
{
	return this->taxFundsCollected;
}

double Government::getIncomeTaxRate()
{
	return this->incomeTaxRate;
}

double Government::getPropertyTaxRate()
{
	return this->propertyTaxRate;
}

void Government::allocateTaxFunds()
{
	// do something here with mediator
}

Citizen *Government::getRandomCitizen(bool related)
{
	Citizen*result;

	for (size_t i=0;i<citizens.size();i++)
	{
		if (citizens.at(i)->getHouse()!=nullptr)//firts check if they even have a house
		{
			if (related) {
				if (citizens.at(i)->getHouse()->getAvailableSpace()>=1)//check the space of the house
				{
					result=citizens.at(i);
					return result;
				}
			} else {
				return citizens.at(i);
			}
		}
	}

	return nullptr;
}

void Government::evictCitizens(Building *building)
{
	for (size_t i = 0; i < citizens.size(); i++) // go thourgh all the citizens to see which one the Building is assigned to
	{
		if (citizens.at(i)->getHouse() == building)
		{
			citizens.at(i)->assignHouse(nullptr); // we want to leave the house
		}

		if (citizens.at(i)->getJob() == building)
		{
			citizens.at(i)->assignJob(nullptr); // we want to leave the job
		}
	}
}

void Government::eliminateCitizens(int numberOfCitizens)
{
	// Ensure we do not try to remove more citizens than available
	if (numberOfCitizens <= 0)
	{
		return;
	}

	if (static_cast<size_t>(numberOfCitizens) > this->citizens.size())
    {
        numberOfCitizens = this->citizens.size();
    }

	// Remove citizens from the end of the list
	for (int i = 0; i < numberOfCitizens; ++i)
	{
		// Assuming citizens vector holds pointers to dynamically allocated Citizen objects
		delete this->citizens.back(); // Call destructor
		this->citizens.pop_back();	  // Remove from vector
	}
}

int Government::getPopulation()
{

	return citizens.size();
}
double Government::getAverageSatisfaction()
{
	if (citizens.size() == 0)
		return 0;
	
	double averageSatisfaction = 0;
	for (size_t i = 0; i < this->citizens.size(); i++)
	{
		averageSatisfaction += this->citizens.at(i)->getSatisfaction();
	}
	averageSatisfaction=averageSatisfaction/citizens.size();
	return averageSatisfaction;
}
int Government::getAverageAge()
{
	if (citizens.size() == 0)
		return 0;

	double averageAge = 0;
	for (size_t i = 0; i < this->citizens.size(); i++)
	{
		averageAge += this->citizens.at(i)->getAge();
	}
	averageAge=averageAge/citizens.size();
	return averageAge;
}

void Government::ageAll(int amount) {
	for (size_t i = 0; i < this->citizens.size(); i++)
	{
		this->citizens.at(i)->increaseAge(amount);
	}
}
