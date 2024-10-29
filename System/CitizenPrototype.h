#ifndef CitizenPrototype_H
#define CitizenPrototype_H
#include "Observer.h"
#include "Government.h"
#include "ConcreteGovernment.h"
#include "Building.h"
class CitizenPrototype : Observer
{

protected:
	int satisfaction;
	Building *house;
	Building *job;
	double income;
	int age;

public:
	CitizenPrototype(double income, int age);
	
	CitizenPrototype *cloneChild();
	CitizenPrototype *cloneRelated(Building *job);
	CitizenPrototype *cloneUnrelated(Building *job, Building *house);

	void taxChange(double newTaxRate, double CurrentTaxRate);
	void assignHouse(Building *house);
	void assignJob(Building *building);
	int increaseAge(int increaseAmount);
	void setIncome(int income);
	double getIncome();
};

#endif
