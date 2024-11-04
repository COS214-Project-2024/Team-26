#include "EntertainmentBuildingFactory.h"

Building *EntertainmentBuildingFactory::createBuilding()
{
	if (this->BUILDING_TYPE == "Theater")
	{
		return new Theater(0, 0, LOCATION_X, LOCATION_Y);
	}
	else if (this->BUILDING_TYPE == "Bowling")
	{
		return new Bowling(0, 0, LOCATION_X, LOCATION_Y);
	}
	else if (this->BUILDING_TYPE == "Bar")
	{
		return new Bar(0, 0, LOCATION_X, LOCATION_Y);
	}
	else
	{
		throw "Invalid BUILDING_TYPE";
	}
}