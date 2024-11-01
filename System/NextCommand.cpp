#include "NextCommand.h"
#include<iostream>

NextCommand::NextCommand(TurnMediator* mediator) {
    this->mediator = mediator;
}


void NextCommand::execute() {
	// TODO - implement NextCommand::execute
	//throw "Not yet implemented";

	 if (mediator) {
        mediator->nextRound();
        std::cout << "Next round called." << std::endl;
    }

	else{
		std::cout<<"Mediator not available"<<std::endl;
	}

}
