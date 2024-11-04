// ConcreteGovernment.cpp
#include "ConcreteGovernment.h"

// Initialize the static instance pointer
ConcreteGovernment *ConcreteGovernment::instancePtr = nullptr;

ConcreteGovernment::ConcreteGovernment(double incomeTaxRate, double propertyTaxrate) : Government(incomeTaxRate,propertyTaxrate)
{
}



ConcreteGovernment *ConcreteGovernment::instance()
{
	if (instancePtr == nullptr)
	{
		instancePtr = new ConcreteGovernment(0.12,0.18); // Initialize with default taxRate
	}
	return instancePtr;
}

ConcreteGovernment::~ConcreteGovernment()
{
	
}
