#include "ResidentialBuildingFactory.h"

Building *ResidentialBuildingFactory::createBuilding()
{
	if (this->BUILDING_TYPE == "House")
	{
		return new House(LOCATION_X, LOCATION_Y);
	}
	else if (this->BUILDING_TYPE == "TownHouse")
	{
		return new TownHouse(LOCATION_X, LOCATION_Y);
	}
	else if (this->BUILDING_TYPE == "Apartment")
	{
		return new Apartment(LOCATION_X, LOCATION_Y);
	}
	else
	{
		throw "Invalid BUILDING_TYPE";
	}
}
