#include "CommercialBuildingFactory.h"

Building *CommercialBuildingFactory::createBuilding()
{
	if (this->BUILDING_TYPE == "Shop")
	{
		return new Shop();
	}
	else if (this->BUILDING_TYPE == "Office")
	{
		return new Office();
	}
	else
	{
		throw "Invalid BUILDING_TYPE";
	}
}
