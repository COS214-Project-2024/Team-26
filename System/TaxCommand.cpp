#include "TaxCommand.h"
#include<iostream>

TaxCommand::TaxCommand(int tax, TurnMediator* mediator) {
	this->tax = tax;
    this->mediator = mediator;
}


void TaxCommand::execute() {
	// TODO - implement TaxCommand::execute
	//throw "Not yet implemented";

	if (mediator) {
        mediator->changeTaxRates(tax);
        std::cout << "Tax rate changed to " << tax << std::endl;
	}

	else{
		std::cout<<"Cannot change tax"<<std::endl;
	}
}
