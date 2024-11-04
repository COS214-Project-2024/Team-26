#include "BuildCommand.h"
#include<iostream>



BuildCommand::BuildCommand(const std::string& buildingType, int x, int y, BuildingMediator* mediator) : CityCommand() {
	this->buildingType = buildingType;
	this->LOCATION_X = x;
	this->LOCATION_Y = y;
	this->mediator = mediator;
}



void BuildCommand::execute() {
	if (mediator) {
		std::cout << "Choose a building type:\t";
		std::cin >> buildingType;
		std::cout << "Choose x co-ordinate:\t";
		std::cin >> LOCATION_X;
		std::cout << "Choose y co-ordinate:\t";
		std::cin >> LOCATION_Y;
		
		std::string message = mediator->build(buildingType, LOCATION_X, LOCATION_Y);
		if (message == "") {

            std::cout << buildingType << " has been built at (" << LOCATION_X << ", " << LOCATION_Y << ")." << std::endl;
        } 
		
		else {
            std::cout << "Failed to build " << buildingType << " at (" << LOCATION_X << ", " << LOCATION_Y << ")." << std::endl;
			std::cout << "Error:\t" << message << std::endl;
        }
	}

	else{
		std::cout<<"mediator not available";
	}


}