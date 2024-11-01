#include "BuildingMediator.h"

BuildingMediator::BuildingMediator() : CityMediator() {
	factory = nullptr;
	government = ConcreteGovernment::instance();
}

bool BuildingMediator::build(std::string& buildingName, int locationX, int locationY) {
	// create relevant factory
	if (buildingName == "House" || buildingName == "TownHouse" || buildingName == "Apartment") {
		factory = new ResidentialBuildingFactory(buildingName, locationX, locationY);
	} else if (buildingName == "Shop" || buildingName == "Office") {
		// BuildingFactory* factory = new CommercialBuildingFactory(buildingName, locationX, locationY);
	} else if (buildingName == "Hospital" || buildingName == "Police" || buildingName == "FireDepartment") {
		// BuildingFactory* factory = new ServiceBuildingFactory(buildingName, locationX, locationY);
	} else if (buildingName == "Theater" || buildingName == "Bowling" || buildingName == "Bar") {
		// BuildingFactory* factory = new EntertainmentBuildingFactory(buildingName, locationX, locationY);
	} else if (buildingName == "Park" || buildingName == "Monument") {
		// BuildingFactory* factory = new LandmarkBuildingFactory(buildingName, locationX, locationY);
	} else if (buildingName == "Warehouse" || buildingName == "Factory") {
		// BuildingFactory* factory = new IndustrialBuildingFactory(buildingName, locationX, locationY);
	} else if (buildingName == "Power" || buildingName == "Water" || buildingName == "Sewage" || buildingName == "Waste") {
		// BuildingFactory* factory = new PlantBuildingFactory(buildingName, locationX, locationY);
	} else {
		return false;
	}


	// add to composite structure
	if (getBuildings()->slotAvailable(locationX, locationY)) {
		getBuildings()->add(factory->createBuilding(), locationX, locationY);
		return true;
	} else 
		return false;
}

bool BuildingMediator::demolish(int locationX, int locationY) {
	// add eviction functionality if people still live in building
	// Building* building = getBuildings()->get(locationX, locationY)->getBuilding();
	Building* building = nullptr;
	if (building->getOccupancy() > 0) {
		government->evictCitizens(building);
	}
	return getBuildings()->remove(locationX, locationY);
}


BuildingMediator::~BuildingMediator() {
	if (factory) {
		delete factory;
		factory = nullptr;
	}
}