#include "NextCommand.h"
#include<iostream>

NextCommand::NextCommand(TurnMediator* mediator) {
    this->mediator = mediator;
}


void NextCommand::execute() {
	if (mediator) {
        std::cout << "Population increase: " << mediator->nextRound() << std::endl;
    } else{
		std::cout<<"Mediator not available"<<std::endl;
	}

}
