#include "LandmarkBuildingFactory.h"

Building *LandmarkBuildingFactory::createBuilding()
{
	if (this->BUILDING_TYPE == "Park")
	{
		return new Park();
	}
	else if (this->BUILDING_TYPE == "Monument")
	{
		return new Monument();
	}
	else
	{
		throw "Invalid BUILDING_TYPE";
	}
}
