#include "BuildingMediator.h"
#include <iostream>

BuildingMediator::BuildingMediator() : CityMediator() {
	factory = nullptr;
	government = ConcreteGovernment::instance();
}

std::string BuildingMediator::build(std::string buildingName, int locationX, int locationY, BuildingState* state) {
	// create relevant factory
	if (buildingName == "House" || buildingName == "TownHouse" || buildingName == "Apartment") {
		factory = new ResidentialBuildingFactory(buildingName, locationX, locationY);
	} else if (buildingName == "Shop" || buildingName == "Office") {
		factory = new CommercialBuildingFactory(buildingName, locationX, locationY);
	} else if (buildingName == "Hospital" || buildingName == "Police" || buildingName == "FireDepartment") {
		factory = new ServiceBuildingFactory(buildingName, locationX, locationY);
	} else if (buildingName == "Theater" || buildingName == "Bowling" || buildingName == "Bar") {
		factory = new EntertainmentBuildingFactory(buildingName, locationX, locationY);
	} else if (buildingName == "Park" || buildingName == "Monument") {
		factory = new LandmarkBuildingFactory(buildingName, locationX, locationY);
	} else if (buildingName == "Warehouse" || buildingName == "Factory") {
		factory = new IndustrialBuildingFactory(buildingName, locationX, locationY);
	} else if (buildingName == "Power" || buildingName == "Water" || buildingName == "Sewage" || buildingName == "Waste") {
		factory = new PlantBuildingFactory(buildingName, locationX, locationY);
	} else {
		return "Invalid building type";
	}


	// add to composite structure
	if (locationX >= 50 || locationX < 0) {
		return "X co-ordinate out of city bounds";
	} else if (locationY >= 50 || locationY < 0) {
		return "Y co-ordinate out of city bounds";
	} else if (getBuildings()->slotAvailable(locationX, locationY)) {
		Building* building = factory->createBuilding();
		if (state)
			building->setState(state);
		getBuildings()->add(building, locationX, locationY);
		return "";
	} else {
		return "Slot occupied";
	}
}

std::string BuildingMediator::demolish(int locationX, int locationY) {
	Building* building = getBuildings()->get(locationX, locationY);

	if (locationX >= 50 || locationX < 0) {
		return "X co-ordinate out of city bounds";
	} else if (locationY >= 50 || locationY < 0) {
		return "Y co-ordinate out of city bounds";
	} else if (building == nullptr) {
		return "No building at " + std::to_string(locationX) + ", " + std::to_string(locationY);
	} else if (building->getOccupancy() > 0) {
		government->evictCitizens(building);
	}

	getBuildings()->remove(locationX, locationY);
	return "";
}


BuildingMediator::~BuildingMediator() {
	if (factory) {
		delete factory;
		factory = nullptr;
	}
}