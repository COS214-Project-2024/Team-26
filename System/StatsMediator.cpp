#include "StatsMediator.h"

StatsMediator::StatsMediator() : CityMediator() {
    government = ConcreteGovernment::instance();
}

int StatsMediator::getPopulation() {
    return government->getPopulation();
}
    
int StatsMediator::getSatisfaction() {
    government->getAverageSatisfaction();
}

int StatsMediator::getAverageAge() {
    return government->getAverageAge();
}

int StatsMediator::getAvailableHousingSpace() {
    std::vector<Building*> buildings = getBuildings()->getAllBuildings();
    int space = 0;
    for (size_t i = 0; i < buildings.size(); i++) {
        Building* building = buildings[i];
        if (building) {
            if (building->getName() == "House" || building->getName() == "TownHouse" || building->getName() == "Apartment") {
                space += building->getAvailableSpace();
            }
        }
    }
    return space;
}

int StatsMediator::getImmigrationLimit() {
    return 50;
}

int StatsMediator::getTotalHousingSpace() {
    std::vector<Building*> buildings = getBuildings()->getAllBuildings();
    int space = 0;
    for (size_t i = 0; i < buildings.size(); i++) {
        Building* building = buildings[i];
        if (building) {
            if (building->getName() == "House" || building->getName() == "TownHouse" || building->getName() == "Apartment") {
                space += building->getSpace();
            }
        }
    }
    return space;
}

std::string StatsMediator::getAllStats() {
    std::string result = "";
    result += "-Population Details\n" + populationDetails();
    result += "-Tax Details\n" + std::to_string(getTax());
    result += "-Building Details\n" + buildingDetails();
    result += "-Resource Details\n" + resourceDetails();

    return result;
}

std::string StatsMediator::buildingDetails() {
    std::string result = "";
    std::vector<Building*> buildings = getBuildings()->getAllBuildings();
    if (buildings.size() == 0)
        return "No buildings built yet\n";
    for (size_t i = 0; i < buildings.size(); i++) {
        Building* building = buildings[i];
        if (building) {
            result += building->getInfo() + "\n";
        }
    }
    return result;
}

std::string StatsMediator::populationDetails() {
    std::string result = "Population size:\t" + std::to_string(government->getPopulation()) + "\n";
    result += "Average satisfaction:\t" + std::to_string(static_cast<int>(government->getAverageSatisfaction())) + "\n";
    result += "Average age:\t" + std::to_string(government->getAverageAge()) + "\n";

    return result;
}

std::string StatsMediator::resourceDetails() {
    std::string result = "Power:\t" + std::to_string(getBuildings()->getPowerConsumption()) + " - " + std::to_string(getBuildings()->getPowerProduction()) + "\n";
    result += "Water:\t" + std::to_string(getBuildings()->getWaterConsumption()) + " - " + std::to_string(getBuildings()->getWaterProduction()) + "\n";
    result += "Sewage:\t" + std::to_string(getBuildings()->getSewageConsumption()) + " - " + std::to_string(getBuildings()->getSewageProduction()) + "\n";
    // result += "Waste:\t" + std::to_string(getBuildings()->getWasteConsumption()) + " - " + std::to_string(getBuildings()->getWasteProduction()) + "\n";

    return result;
}

double StatsMediator::getTax() {
    return government->getIncomeTaxRate();
}