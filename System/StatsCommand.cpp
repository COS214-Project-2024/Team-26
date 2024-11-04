#include "StatsCommand.h"
#include<iostream>

StatsCommand::StatsCommand(StatsMediator* mediator) : CityCommand() {
	this->mediator = mediator;
}

void StatsCommand::execute() {
	if (mediator) {
        std::string input;
        std::getline(std::cin, input);

        if (input == "all") {
            std::cout << "City Stats:\n" << mediator->getAllStats();
        } else if (input == "buildings") {
            std::cout << "Buildings:\n" << mediator->buildingDetails();
        } else if (input == "population") {
            std::cout << "Total housing space:\t" << mediator->populationDetails() << std::endl;
        } else if (input == "resources") {
            std::cout << "Resource (Consumption vs Production):\n" << mediator->resourceDetails() << std::endl;
        } else if (input == "tax") {
            std::cout << "Current tax rate:\t" << std::to_string(mediator->getTax()) << std::endl;
        } else { 
            std::cout << "Invalid stats command:\t" << input << std::endl;
        }
        
        
	} else{
		std::cout<<"mediator not available";
	}


}