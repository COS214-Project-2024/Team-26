#include "ServiceBuildingFactory.h"

Building *ServiceBuildingFactory::createBuilding()
{
	if (this->BUILDING_TYPE == "Hospital")
	{
		return new Hospital(LOCATION_X, LOCATION_Y);
	}
	else if (this->BUILDING_TYPE == "Police")
	{
		return new Police(LOCATION_X, LOCATION_Y);
	}
	else if (this->BUILDING_TYPE == "FireDepartment")
	{
		return new FireDepartment(LOCATION_X, LOCATION_Y);
	}
	else
	{
		throw "Invalid BUILDING_TYPE";
	}
}
