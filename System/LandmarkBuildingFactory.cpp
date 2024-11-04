#include "LandmarkBuildingFactory.h"

Building *LandmarkBuildingFactory::createBuilding()
{
	if (this->BUILDING_TYPE == "Park")
	{
		return new Park(LOCATION_X, LOCATION_Y);
	}
	else if (this->BUILDING_TYPE == "Monument")
	{
		return new Monument(LOCATION_X, LOCATION_Y);
	}
	else
	{
		throw "Invalid BUILDING_TYPE";
	}
}
