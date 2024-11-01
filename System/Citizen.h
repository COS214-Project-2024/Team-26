#ifndef Citizen_H
#define Citizen_H
#include "Government.h"
#include "ConcreteGovernment.h"
#include "Building.h"
class Citizen
{

protected:
	int satisfaction;
	Building *house;
	Building *job;
	double income;
	int age;

public:
	Citizen(double income, int age);
	
	Citizen *cloneChild();
	Citizen *cloneRelated(Building *job);
	Citizen *cloneUnrelated(Building *job, Building *house);

	void taxChange(double newTaxRate, double CurrentTaxRate);

	void assignHouse(Building *house);
	void assignJob(Building *building);

	int increaseAge(int increaseAmount);

	void setIncome(int income);
	int getSatisfaction();
	Building* getHouse();
	Building* getJob();
	double getIncome();
	int getAge();

	~Citizen();

};

#endif
