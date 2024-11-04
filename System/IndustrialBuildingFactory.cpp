#include "IndustrialBuildingFactory.h"

Building *IndustrialBuildingFactory::createBuilding()
{
	if (this->BUILDING_TYPE == "Factory")
	{
		return new Factory(LOCATION_X, LOCATION_Y);
	}
	else if (this->BUILDING_TYPE == "Warehouse")
	{
		return new Warehouse(LOCATION_X, LOCATION_Y);
	}
	else
	{
		throw "Invalid BUILDING_TYPE";
	}
}
