#include "DemolishCommand.h"
#include <iostream>


DemolishCommand::DemolishCommand(int x, int y, BuildingMediator* mediator) {
	this->LOCATION_X = x;
	this->LOCATION_Y = y;
    this->mediator = mediator;
}



void DemolishCommand::execute() {
	// TODO - implement DemolishCommand::execute
	//throw "Not yet implemented";

	if (mediator) {

		if(mediator->demolish(LOCATION_X, LOCATION_Y)){
			std::cout << "Building at (" << LOCATION_X << ", " << LOCATION_Y << ") has been demolished." << std::endl;
		}

		else {
            std::cout << "Failed to demolish building at (" << LOCATION_X << ", " << LOCATION_Y << ")." << std::endl;
        }

	}

	else{
		std::cout<<"Unable to demolish building"<<std::endl;
	}



}
