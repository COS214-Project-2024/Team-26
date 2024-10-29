#ifndef CITYMEDIATOR_H
#define CITYMEDIATOR_H

#include <string>

class CityMediator {


public:
	CityMediator() =default;

	virtual bool build(std::string& buildingName, int locationX, int locationY) = 0;

	virtual bool demolish(int locationX, int locationY) = 0;

	// virtual void assignCitizenBuildings(Citizen citizen) = 0;

	virtual void nextRound() = 0;

	virtual void changeTaxRates(int newTaxRates) = 0;

	virtual ~CityMediator() = default;
};

#endif
