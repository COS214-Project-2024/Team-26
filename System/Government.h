#ifndef GOVERNMENT_H
#define GOVERNMENT_H
#include "Citizen.h"
#include <vector>
class Government
{
//testing
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
	void collectPropertyTax();
	double getIncomeTaxRate();
	double getPropertyTaxRate();
	void allocateTaxFunds();

	void evictCitizens(Building*building);
	void eliminateCitizens(int numberOfCitizensToEvict);
	int getPopulation();
	double getAverageSatisfaction();

	

	Citizen* getRandomCitizen();
};

#endif
