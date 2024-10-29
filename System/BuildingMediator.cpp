#include "BuildingMediator.h"

BuildingMediator::BuildingMediator() {
	factory = nullptr;
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
	return false;
}

// void BuildingMediator::assignCitizenBuildings(Citizen* citizen) {
// 	// TODO - implement BuildingMediator::assignCitizenBuildings
// 	throw "Not yet implemented";
// }

bool BuildingMediator::demolish(int locationX, int locationY) {
	// TODO - implement BuildingMediator::demolish
	throw "Not yet implemented";
}


BuildingMediator::~BuildingMediator() {
	if (factory) {
		delete factory;
		factory = nullptr;
	}
}