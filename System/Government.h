#ifndef GOVERNMENT_H
#define GOVERNMENT_H
#include "Citizen.h"
#include "Building.h"
#include <vector>
class Government
{
private:
	double oldIncomeTaxRate;
	double oldPropertyTaxRate;
	double incomeTaxRate;
	double propertyTaxRate;
	double taxFundsCollected;
	std::vector<Citizen *> citizens; // Vector to store Citizens
public:
	Government(double incomeTaxRate, double propertyTaxRate);

	void addCitizen(Citizen *citizen);
	void removeCitizen(Citizen *citizen);

	void setIncomeTaxRate(double taxRate);
	void setPropertyTaxRate(double taxRate);
	void notifyTaxChange();

	void collectIncomeTax();
	void collectPropertyTax(); // Emil implement here with mediator
	double getIncomeTaxRate();
	double getPropertyTaxRate();
	void allocateTaxFunds(); // do something here with mediator

	Citizen *getRandomCitizen(); // a bit unlcear on what to do here?

	void evictCitizens(Building *building);
	void eliminateCitizens(int numberOfCitizens); // implemnt-Ulrich
	int getPopulation();						  // implemnt-Ulrich
	double getAverageSatisfaction();			  // implemnt-Ulrich
};

#endif
