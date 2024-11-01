#include "EntertainmentBuildingFactory.h"

Building *EntertainmentBuildingFactory::createBuilding()
{
	if (this->BUILDING_TYPE == "Theater")
	{
		return new Theater(0, 0);
	}
	else if (this->BUILDING_TYPE == "Bowling")
	{
		return new Bowling(0, 0);
	}
	else if (this->BUILDING_TYPE == "Bar")
	{
		return new Bar(0, 0);
	}
	else
	{
		throw "Invalid BUILDING_TYPE";
	}
}