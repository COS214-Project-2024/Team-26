#ifndef CITYMEDIATOR_H
#define CITYMEDIATOR_H

#include <string>

#include "Iterator.h"

class CityMediator {
protected:
	static Iterator* buildings;

public:
	CityMediator() =default;

	static Iterator* getBuildings() {
		if (!buildings)
			buildings = new Iterator();
		return buildings;
	}

	virtual ~CityMediator() {if (buildings) delete buildings;}
};

	Iterator* CityMediator::buildings = nullptr;

#endif
