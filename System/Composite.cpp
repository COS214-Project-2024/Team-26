#include "Composite.h"
#include <iostream>

Composite::Composite() : Component() {
    this->components = std::vector<std::vector<Leaf*>>();
    // this->components.resize(MAXX);
    // for (auto& row : this->components) {
    //     row.resize(MAXY);
    // }
}

Composite::~Composite() {
    for (auto& row : this->components) {
        for (auto& leaf : row) {
            if (leaf != nullptr) {
                delete leaf;
                leaf = nullptr;
            }
        }  
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
    // if (x >= MAXX || y >= MAXY || x < 0 || y < 0) {
        // return;
    // } else {
    // if (this->components[x][y] == nullptr) {
    //     this->components[x][y] = new Leaf(component);
    // }
    if (x >= components.size()) {
        components.resize(x + 1); // Resize
    }
    if (y >= static_cast<int>(components[x].size())) {
        components[x].resize(y + 1, nullptr); // Resize
    }
    components[x][y] = new Leaf(component);
}

void Composite::remove(int x, int y) {
    if (x < static_cast<int>(components.size()) && y < static_cast<int>(components.size())) {
        components[x][y] = nullptr;
    }
}

Building* Composite::getComponent(int x, int y) {
    if (components.empty()) {
        return nullptr;
    } else if (x < static_cast<int>(components.size()) && y < static_cast<int>(components[x].size()) && components[x][y] != nullptr) {
        return components[x][y]->building;
    } else {
        return nullptr;
    }
}

int Composite::getTotalPowerConsumption() {
    int totalPowerConsumption = 0;
    for (const auto& row : components) {
        for (Leaf* building : row) {
            if (building != nullptr) {
                totalPowerConsumption += building->building->getPowerConsumption(false);
            }
        }
    }
    return totalPowerConsumption;
}

int Composite::getTotalWaterConsumption() {
    int totalWaterConsumption = 0;
    for (const auto& row : components) {
        for (Leaf* building : row) {
            if (building != nullptr) {
                totalWaterConsumption += building->building->getWaterConsumption(false);
            }
        }
    }
    return totalWaterConsumption;
}

int Composite::getTotalCostConsumption() {
    int totalCostConsumption = 0;
    // for (int i = 0; i < static_cast<int>(components.size()); i++) {
    //     for (int j = 0; j < static_cast<int>(components[i].size()); j++) {
    //         if (components[i][j] != nullptr) {
    //             totalCostConsumption += components[i][j]->getTotalCostConsumption(false);
    //         }
    //     }
    // }
    return totalCostConsumption;
}

int Composite::getTotalSewageConsumption() {
    int totalSewageConsumption = 0;
    for (const auto& row : components) {
        for (Leaf* building : row) {
            if (building != nullptr) {
                if (building->building->getName() == "Sewage")
                    totalSewageConsumption += static_cast<Sewage*>(building->building)->getSewageConsumption();
            }
        }
    }
    return totalSewageConsumption;
}

int Composite::getTotalWasteConsumption() {
    int totalWasteConsumption = 0;
    for (const auto& row : components) {
        for (Leaf* building : row) {
            if (building != nullptr) {
                if (building->building->getName() == "Waste")
                    totalWasteConsumption += static_cast<Waste*>(building->building)->getWasteConsumption();
            }
        }
    }
    return totalWasteConsumption;
}

int Composite::getTotalPowerProduction() {
    int totalPowerProduction = 0;
    for (const auto& row : components) {
        for (Leaf* building : row) {
            if (building != nullptr) {
                if (building->building->getName() == "Power")
                    totalPowerProduction += static_cast<Power*>(building->building)->getPowerProduction();
            }
        }
    }
    return totalPowerProduction;
}

int Composite::getTotalWaterProduction() {
    int totalWaterProduction = 0;
    for (const auto& row : components) {
        for (Leaf* building : row) {
            if (building != nullptr) {
                if (building->building->getName() == "Water")
                    totalWaterProduction += static_cast<Water*>(building->building)->getWaterProduction();
            }
        }
    }
    return totalWaterProduction;
}

int Composite::getTotalRevenue() {
    int totalRevenue = 0;
    // for (int i = 0; i < static_cast<int>(components.size()); i++) {
    //     for (int j = 0; j < static_cast<int>(components[i].size()); j++) {
    //         if (components[i][j] != nullptr) {
    //             totalRevenue += components[i][j]->getTotalRevenue();
    //         }
    //     }
    // }
    return totalRevenue;
}

int Composite::getTotalSewageProduction() {
    int totalSewageProduction = 0;
    for (const auto& row : components) {
        for (Leaf* building : row) {
            if (building != nullptr) {
                totalSewageProduction += building->building->getSewageProduction(false);
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

/* IMPLEMENT */
BuildingState* Composite::getAndSetNextState() {
    return nullptr;
}

int Composite::lengthX() const {
    return static_cast<int>(components.size());
}

void Composite::clear(){
    for (int i = 0; i < static_cast<int>(components.size()); i++) {
        for (int j = 0; j < static_cast<int>(components[i].size()); j++) {
            components[i][j] = nullptr;
        }
    }
}

int Composite::lengthY() const {
    return static_cast<int>(components[0].size());
}

std::vector<Building*> Composite::getAllBuildings() const {
    std::vector<Building*> allBuildings;
    
    for (const auto& row : components) {
        for (Leaf* build : row) {
            if (build != nullptr) {
                allBuildings.push_back(build->building);
            }
        }
    }
    return allBuildings;
}