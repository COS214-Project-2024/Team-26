#include "EntertainmentBuildingFactory.h"

Building *EntertainmentBuildingFactory::createBuilding()
{
	if (this->BUILDING_TYPE == "Theater")
	{
		return new Theater();
	}
	else if (this->BUILDING_TYPE == "Bowling")
	{
		return new Bowling();
	}
	else if (this->BUILDING_TYPE == "Bar")
	{
		return new Bar();
	}
	else
	{
		throw "Invalid BUILDING_TYPE";
	}
}
