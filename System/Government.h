#ifndef GOVERNMENT_H
#define GOVERNMENT_H
#include "CitizenPrototype.h"
#include <vector>
class Government
{

private:
	double oldIncomeTaxRate;
	double oldPropertyTaxRate;
	double incomeTaxRate;
	double propertyTaxRate;
	double taxFundsCollected;
	std::vector<CitizenPrototype *> observers; // Vector to store observers
public:
	Government(double incomeTaxRate, double propertyTaxRate);
	CitizenPrototype*getRandomCitizen();
	void addOberver(CitizenPrototype *citizen);
	double getIncomeTaxRate();
	double getPropertyTaxRate();

	void setIncomeTaxRate(double taxRate);
	void setPropertyTaxRate(double taxRate);
	void notifyTaxChange();

	void allocateTaxFunds();

	void collectIncomeTax();
	void collectPropertyTax();

	void removeObserver(CitizenPrototype *citizen);
};

#endif
