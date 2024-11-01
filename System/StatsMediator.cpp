#include "StatsMediator.h"

StatsMediator::StatsMediator() : CityMediator() {
    government = government->instance();
}

int StatsMediator::getPopulation() {
    // return government->getPopulation();
    return 0;
}
    
int StatsMediator::getSatisfaction() {
    // return government->getSatisfaction();
    return 0;
}

int StatsMediator::getAvailableHousingSpace() {
    return 0;
}

int StatsMediator::getImmigrationLimit() {
    return 0;
}

int StatsMediator::getTotalHousingSpace() {
    return 0;
}