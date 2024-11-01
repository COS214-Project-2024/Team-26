#include "PlantBuildingFactory.h"

Building *PlantBuildingFactory::createBuilding()
{
	return nullptr;
	if (this->BUILDING_TYPE == "Power")
	{
		// return new Power();
	}
	else if (this->BUILDING_TYPE == "Water")
	{
		// return new Water();
	}
	else if (this->BUILDING_TYPE == "Sewage")
	{
		// return new Sewage();
	}
	else if (this->BUILDING_TYPE == "Waste.h")
	{
		// return new Waste();
	}
	else
	{
		throw "Invalid BUILDING_TYPE";
	}
}
