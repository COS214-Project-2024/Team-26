// ConcreteGovernment.h
#ifndef CONCRETEGOVERNMENT_H
#define CONCRETEGOVERNMENT_H

#include "Government.h"

class ConcreteGovernment : public Government
{
private:
	static ConcreteGovernment *instancePtr;
	ConcreteGovernment(double incomeTaxRate,double propertyTaxRate); // Private constructor for singleton

public:
	static ConcreteGovernment *instance(); // Accessor for singleton instance

protected:
	~ConcreteGovernment(); // Protected destructor
};

#endif
