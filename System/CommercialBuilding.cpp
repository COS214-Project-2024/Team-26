#include <exception>
using namespace std;

#include "CommercialBuilding.h"
#include "Building.h"

int CommercialBuilding::getRevenue()
{
	return revenue;
}

void CommercialBuilding::setRevenue(int aRevenue)
{
	this->revenue = aRevenue;
}
