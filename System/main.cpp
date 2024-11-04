#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

#include "CityManager.h"

#include "CityCommand.h"
    #include "NextCommand.h"
    #include "StatsCommand.h"
    #include "BuildCommand.h"
    #include "DemolishCommand.h"

#include "CityMediator.h"
    #include "BuildingMediator.h"
int main() {
    // input manager
    CityManager* manager = new CityManager();

    // commands
        // next
    CityCommand* next = new NextCommand();
    manager->registerCommand("next", next);
        // stats
    CityCommand* stats = new StatsCommand();
    manager->registerCommand("stats", stats);
        // build
    CityCommand* build = new BuildCommand();
    manager->registerCommand("build", build);
        // demolish
    CityCommand* demolish = new DemolishCommand();
    manager->registerCommand("demolish", demolish);
        // tax

    std::cout << "Available Commands:" << std::endl;
    std::cout << manager->handleUserInput("h") << std::endl;

    while (true) {
        // get input and convert to lower case
        std::string input;
        std::getline(std::cin, input);
        std::transform(input.begin(), input.end(), input.begin(), [](unsigned char c){ return std::tolower(c); });

        if (input == "q" || input == "quit") {
            break;
        } else if (input == "") {
            continue;
        } else {
            std::cout << manager->handleUserInput(input) << std::endl;
        }
    }
    
    
    return 0;
}