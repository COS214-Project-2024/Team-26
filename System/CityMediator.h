#ifndef CITYMEDIATOR_H
#define CITYMEDIATOR_H

#include <string>

#include "Iterator.h"
	#include "ConcreteIterator.h"

class CityMediator {
protected:
	static Iterator* buildings;

public:
	CityMediator() =default;

	virtual bool build(std::string& buildingName, int locationX, int locationY) = 0;

	virtual bool demolish(int locationX, int locationY) = 0;

	virtual void nextRound() = 0;

	virtual void changeTaxRates(int newTaxRates) = 0;

	static Iterator* getBuildings() {
		if (!buildings)
			buildings = new ConcreteIterator();
		return buildings;
	}

	virtual ~CityMediator() {if (buildings) delete buildings;}
};

	Iterator* CityMediator::buildings = nullptr;

#endif
