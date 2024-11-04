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
    return 0;
}

int StatsMediator::getTotalHousingSpace() {
    std::vector<Building*> buildings = getBuildings()->getAllBuildings();
    int space = 0;
    for (size_t i = 0; i < buildings.size(); i++) {
        Building* building = buildings[i];
        if (building) {
            if (building->getName() == "house" || building->getName() == "TownHouse" || building->getName() == "Apartment") {
                space += building->getSpace();
            }
        }
    }
    return space;
}

void StatsMediator::printBuildings() {
    std::vector<Building*> buildings = getBuildings()->getAllBuildings();
    for (size_t i = 0; i < buildings.size(); i++) {
        Building* building = buildings[i];
        if (building) {
            std::cout << building->getInfo() << std::endl;
        }
    }
}