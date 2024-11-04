#include "DemolishCommand.h"
#include <iostream>


DemolishCommand::DemolishCommand(int x, int y, BuildingMediator* mediator) : CityCommand() {
	this->LOCATION_X = x;
	this->LOCATION_Y = y;
    this->mediator = mediator;
}



void DemolishCommand::execute() {
	if (mediator) {
		std::cout << "Choose x co-ordinate:\t";
		std::cin >> LOCATION_X;
		std::cout << "Choose y co-ordinate:\t";
		std::cin >> LOCATION_Y;

		std::string message = mediator->demolish(LOCATION_X, LOCATION_Y);
		if(message == ""){
			std::cout << "Building at (" << LOCATION_X << ", " << LOCATION_Y << ") has been demolished." << std::endl;
		} else {
            std::cout << "Failed to demolish building at (" << LOCATION_X << ", " << LOCATION_Y << ")." << std::endl;
			std::cout << "Error:\t" << message << std::endl;
        }

	} else {
		std::cout<<"Unable to demolish building"<<std::endl;
	}
}
