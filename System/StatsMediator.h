#ifndef STATSMEDIATOR_H
#define STATSMEDIATOR_H

#include <iostream>
#include <string>

#include "CityMediator.h"

#include "Government.h"
	#include "ConcreteGovernment.h"

class StatsMediator : public CityMediator {
private:
    ConcreteGovernment* government;

public:
	StatsMediator();

	int getPopulation();
    
    int getSatisfaction();

    int getAverageAge();

    int getAvailableHousingSpace();

    int getImmigrationLimit();

    int getTotalHousingSpace();

    // stats for command
    std::string getAllStats();

    std::string buildingDetails();

    std::string populationDetails();

    std::string resourceDetails();

	virtual ~StatsMediator() = default;
};

#endif
