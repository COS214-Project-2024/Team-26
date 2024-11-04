#include "CommercialBuildingFactory.h"

Building *CommercialBuildingFactory::createBuilding()
{
	if (this->BUILDING_TYPE == "Shop")
	{
		return new Shop(LOCATION_X, LOCATION_Y);
	}
	else if (this->BUILDING_TYPE == "Office")
	{
		return new Office(LOCATION_X, LOCATION_Y);
	}
	else
	{
		throw "Invalid BUILDING_TYPE";
	}
}
