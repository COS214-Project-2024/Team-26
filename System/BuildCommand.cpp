#include "BuildCommand.h"
#include<iostream>



BuildCommand::BuildCommand(const std::string& buildingType, int x, int y, BuildingMediator* mediator) : CityCommand() {
	this->buildingType = buildingType;
	this->LOCATION_X = x;
	this->LOCATION_Y = y;
	this->mediator = mediator;
}



void BuildCommand::execute() {
	// TODO - implement BuildCommand::execute
	//throw "Not yet implemented";
	if (mediator) {

		if (mediator->build(buildingType, LOCATION_X, LOCATION_Y)) {

            std::cout << buildingType << " has been built at (" << LOCATION_X << ", " << LOCATION_Y << ")." << std::endl;
        } 
		
		else {
            std::cout << "Failed to build " << buildingType << " at (" << LOCATION_X << ", " << LOCATION_Y << ")." << std::endl;
        }
	}

	else{
		std::cout<<"mediator not available";
	}


}
