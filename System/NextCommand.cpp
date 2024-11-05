#include "NextCommand.h"
#include<iostream>

NextCommand::NextCommand(TurnMediator* mediator) {
    this->mediator = mediator;
}


void NextCommand::execute() {
	if (mediator) {
        int pop = mediator->nextRound();
        std::cout << "Population increase: " << pop << std::endl;
    } else{
		std::cout<<"Mediator not available"<<std::endl;
	}

}
