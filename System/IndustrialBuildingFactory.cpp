#include "IndustrialBuildingFactory.h"

Building *IndustrialBuildingFactory::createBuilding()
{
	if (this->BUILDING_TYPE == "Factory")
	{
		return new Factory();
	}
	else if (this->BUILDING_TYPE == "Warehouse")
	{
		return new Warehouse();
	}
	else
	{
		throw "Invalid BUILDING_TYPE";
	}
}
