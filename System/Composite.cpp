#include "Composite.h"

Composite::Composite() : Component() {
    this->components = std::vector<std::vector<Leaf*>>();
    this->components.resize(MAXX);
    for (auto& row : this->components) {
        row.resize(MAXY);
    }
}

Iterator* Composite::createIterator() {
    Iterator* it = new Iterator();
    for (int i = 0; i < static_cast<int>(components.size()); i++) {
        for (int j = 0; j < static_cast<int>(components[i].size()); j++) {
            it->add(components[i][j]->getBuilding(), i, j);
        }
    }
    return it;
}

void Composite::add(Building* component, int x, int y) {
    if (x > MAXX || y > MAXY) {
        return;
    } else {
        components[x][y] = new Leaf(component);
    }
}

void Composite::remove(int x, int y) {
    if (x < static_cast<int>(components.size()) && y < static_cast<int>(components.size())) {
        components[x][y] = nullptr;
    }
}

Building* Composite::getComponent(int x, int y) {
    if (x < static_cast<int>(components.size()) && y < static_cast<int>(components.size())) {
        return components[x][y]->getBuilding();
    }
    return nullptr;
}

int Composite::getTotalPowerConsumption() {
    int totalPowerConsumption = 0;
    for (int i = 0; i < static_cast<int>(components.size()); i++) {
        for (int j = 0; j < static_cast<int>(components[i].size()); j++) {
            if (components[i][j] != nullptr) {
                totalPowerConsumption += components[i][j]->getTotalPowerConsumption();
            }
        }
    }
    return totalPowerConsumption;
}

int Composite::getTotalWaterConsumption() {
    int totalWaterConsumption = 0;
    for (int i = 0; i < static_cast<int>(components.size()); i++) {
        for (int j = 0; j < static_cast<int>(components[i].size()); j++) {
            if (components[i][j] != nullptr) {
                totalWaterConsumption += components[i][j]->getTotalWaterConsumption();
            }
        }
    }
    return totalWaterConsumption;
}

int Composite::getTotalCostConsumption() {
    int totalCostConsumption = 0;
    for (int i = 0; i < static_cast<int>(components.size()); i++) {
        for (int j = 0; j < static_cast<int>(components[i].size()); j++) {
            if (components[i][j] != nullptr) {
                totalCostConsumption += components[i][j]->getTotalCostConsumption();
            }
        }
    }
    return totalCostConsumption;
}

int Composite::getTotalSewageConsumption() {
    int totalSewageConsumption = 0;
    /*for (int i = 0; i < static_cast<int>(components.size()); i++) {
        for (int j = 0; j < static_cast<int>(components[i].size()); j++) {
            Building* building = components[i][j];
            if (building != nullptr) {
                if (Sewage* sewageBuilding = dynamic_cast<Sewage*>(building)) {
                    totalSewageConsumption += sewageBuilding->getTotalSewageProduction();
                }
            }
        }
    }*/
    return totalSewageConsumption;
}

int Composite::getTotalWasteConsumption() {
    int totalWasteConsumption = 0;
    /*for (int i = 0; i < static_cast<int>(components.size()); i++) {
        for (int j = 0; j < static_cast<int>(components[i].size()); j++) {
            Building* building = components[i][j];
            if (building != nullptr) {
                if (Waste* wasteBuilding = dynamic_cast<Waste*>(building)) {
                    totalWasteConsumption += wasteBuilding->getTotalWasteProduction();
                }
            }
        }
    }*/
    return totalWasteConsumption;
}

int Composite::getTotalPowerProduction() {
    int totalPowerProduction = 0;
    /*for (int i = 0; i < static_cast<int>(components.size()); i++) {
        for (int j = 0; j < static_cast<int>(components[i].size()); j++) {
            Building* building = components[i][j];
            if (building != nullptr) {
                if (Power* powerBuilding = dynamic_cast<Power*>(building)) {
                    totalPowerProduction += powerBuilding->getTotalPowerProduction();
                }
            }
        }
    }*/
    return totalPowerProduction;
}

int Composite::getTotalWaterProduction() {
    int totalWaterProduction = 0;
    /*for (int i = 0; i < static_cast<int>(components.size()); i++) {
        for (int j = 0; j < static_cast<int>(components[i].size()); j++) {
            Building* building = components[i][j];
            if (building != nullptr) {
                if (Water* waterBuilding = dynamic_cast<Water*>(building)) {
                    totalWaterProduction += waterBuilding->getTotalWaterProduction();
                }
            }
        }
    }*/
    return totalWaterProduction;
}

int Composite::getTotalRevenue() {
    int totalRevenue = 0;
    for (int i = 0; i < static_cast<int>(components.size()); i++) {
        for (int j = 0; j < static_cast<int>(components[i].size()); j++) {
            if (components[i][j] != nullptr) {
                totalRevenue += components[i][j]->getTotalRevenue();
            }
        }
    }
    return totalRevenue;
}

int Composite::getTotalSewageProduction() {
    int totalSewageProduction = 0;
    for (int i = 0; i < static_cast<int>(components.size()); i++) {
        for (int j = 0; j < static_cast<int>(components[i].size()); j++) {
            if (components[i][j] != nullptr) {
                totalSewageProduction += components[i][j]->getTotalSewageProduction();
            }
        }
    }
    return totalSewageProduction;
}

int Composite::getTotalWasteProduction() {
    int totalWasteProduction = 0;
    for (int i = 0; i < static_cast<int>(components.size()); i++) {
        for (int j = 0; j < static_cast<int>(components[i].size()); j++) {
            if (components[i][j] != nullptr) {
                totalWasteProduction += components[i][j]->getTotalWasteProduction();
            }
        }
    }
    return totalWasteProduction;
}

BuildingState* Composite::getAndSetNextState() {
    // TODO - implement Composite::getAndSetNextState
    throw "Not yet implemented";
    return nullptr;
}

int Composite::lengthX() const{
    return static_cast<int>(components.size());
}

int Composite::lengthY() const{
    return static_cast<int>(components[0].size());
}