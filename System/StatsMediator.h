#ifndef STATSMEDIATOR_H
#define STATSMEDIATOR_H

#include "CityMediator.h"

// #include "Government.h"
	// #include "ConcreteGovernment.h"

class StatsMediator : public CityMediator {
private:
    // ConcreteGovernment* government;

public:
	StatsMediator();

	int getPopulation();
    
    int getSatisfaction();

    int getAvailableHousingSpace();

    int getImmigrationLimit();

    int getTotalHousingSpace();

	virtual ~StatsMediator() = default;
};

#endif
