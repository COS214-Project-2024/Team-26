#include "ResidentialBuildingFactory.h"

Building *ResidentialBuildingFactory::createBuilding()
{
	if (this->BUILDING_TYPE == "House")
	{
		return new House();
	}
	else if (this->BUILDING_TYPE == "TownHouse")
	{
		return new TownHouse();
	}
	else if (this->BUILDING_TYPE == "Apartment")
	{
		return new Apartment();
	}
	else
	{
		throw "Invalid BUILDING_TYPE";
	}
}
