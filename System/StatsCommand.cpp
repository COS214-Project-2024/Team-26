#include "StatsCommand.h"
#include<iostream>

StatsCommand::StatsCommand(StatsMediator* mediator) : CityCommand() {
	this->mediator = mediator;
}

void StatsCommand::execute() {
	if (mediator) {
        std::string input;
        std::getline(std::cin, input);

        if (input == "buildings") {
            mediator->printBuildings();
        } else {
            std::cout << "unkown stats command: " + input << std::endl;
        }
        
	} else{
		std::cout<<"mediator not available";
	}


}