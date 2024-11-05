#include "PlantBuildingFactory.h"

Building *PlantBuildingFactory::createBuilding()
{
	if (this->BUILDING_TYPE == "Power")
	{
		return new Power(LOCATION_X, LOCATION_Y);
	}
	else if (this->BUILDING_TYPE == "Water")
	{
		return new Water(LOCATION_X, LOCATION_Y);
	}
	else if (this->BUILDING_TYPE == "Sewage")
	{
		return new Sewage(LOCATION_X, LOCATION_Y);
	}
	else if (this->BUILDING_TYPE == "Waste")
	{
		return new Waste(LOCATION_X, LOCATION_Y);
	} else {
		return nullptr;
	}
}
