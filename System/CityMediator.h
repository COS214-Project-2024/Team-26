#ifndef CITYMEDIATOR_H
#define CITYMEDIATOR_H

#include <string>

#include "Iterator.h"

class CityMediator {
protected:
	static Iterator* buildings;

	// // resources
	// 	// citizens
	// static int totalPoulation;
	// static int avgSatisfaction;

	// 	// buildings
	// static int totalHousingSpace;
	// static int occupiedHousingSpace;
	// static int availableHousingSpace;

	// static int jobs;
	// static int OccupiedJobs;
	// static int availableJobs;

	// static int powerProduction;
	// static int powerConsumption;

	// static int waterProduction;
	// static int wateronsumption;

	// static int SewageProduction;
	// static int sewageConsumption;

	// static int wasteProduction;
	// static int wasteConsumption;

	// static int citizenTax;
	// static int propertyTax;

	// static int servicesCost;

	// static int resourceProduction;
	// static int resourceStorageCapacity;
	// static int resourcesAvailable;

	// static int cityIncome; // cost gained per turn used for building
	// static int cityFunds; // cost used for building

public:
	CityMediator() = default;

	static Iterator* getBuildings() {
		if (!buildings)
			buildings = new Iterator();
		return buildings;
	}

	virtual ~CityMediator() {if (buildings) delete buildings;}
};

#endif
