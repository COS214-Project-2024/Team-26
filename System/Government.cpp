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

CitizenPrototype* Government::getRandomCitizen()
{
	return nullptr;
}

void Government::addOberver(CitizenPrototype *citizen)
{
	if (citizen == nullptr)
	{
		return;
	}

	this->observers.push_back(citizen);
}

double Government::getIncomeTaxRate()
{
	return this->incomeTaxRate;
}

double Government::getPropertyTaxRate()
{
	return this->propertyTaxRate;
}

void Government::setIncomeTaxRate(double taxRate)
{
	if (taxRate >= 0 && taxRate <= 1)
	{
		this->oldIncomeTaxRate = incomeTaxRate;
		this->incomeTaxRate = taxRate;
	}

	std::cout << "taxRate should be between 0 and 1" << std::endl;
}

void Government::setPropertyTaxRate(double taxRate)
{
	if (taxRate >= 0 && taxRate <= 1)
	{
		this->oldPropertyTaxRate = propertyTaxRate;
		this->propertyTaxRate = taxRate;
	}

	std::cout << "taxRate should be between 0 and 1" << std::endl;
}

void Government::notifyTaxChange()
{
	for (int i = 0; i < this->observers.size(); i++)
	{
		observers.at(i)->taxChange(incomeTaxRate, oldIncomeTaxRate);
		observers.at(i)->taxChange(propertyTaxRate, oldPropertyTaxRate);
	}
}

void Government::allocateTaxFunds()
{
	// do something here
}

void Government::collectIncomeTax()
{
	double totalTaxCollected = 0;
	for (int i = 0; i < this->observers.size(); i++)
	{
		totalTaxCollected += observers.at(i)->getIncome() * getIncomeTaxRate();
	}

	this->taxFundsCollected += totalTaxCollected;
}

void Government::collectPropertyTax()
{
	// Emil must do PropertyTax with mediator
}

void Government::removeObserver(CitizenPrototype *citizen)
{
	if (citizen == nullptr)
	{
		return;
	}

	// Use std::remove to shift matching elements to the end, then erase them
	observers.erase(std::remove(observers.begin(), observers.end(), citizen), observers.end());
}
