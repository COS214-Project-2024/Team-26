#include "ServiceBuildingFactory.h"

Building *ServiceBuildingFactory::createBuilding()
{
	if (this->BUILDING_TYPE == "Hospital")
	{
		return new Hospital();
	}
	else if (this->BUILDING_TYPE == "Police")
	{
		return new Police();
	}
	else if (this->BUILDING_TYPE == "FireDepartment")
	{
		return new FireDepartment();
	}
	else
	{
		throw "Invalid BUILDING_TYPE";
	}
}
