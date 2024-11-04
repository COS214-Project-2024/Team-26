#include "TaxCommand.h"
#include<iostream>

TaxCommand::TaxCommand(double tax, TurnMediator* mediator) {
	this->tax = tax;
    this->mediator = mediator;
}


void TaxCommand::execute() {
	// TODO - implement TaxCommand::execute
	//throw "Not yet implemented";

	if (mediator) {
		std::cout << "Enter new tax rate (decimal):\t";
		std::string input;
        std::getline(std::cin, input);

		std::cout << "Tax rate changed to:\t" << std::stod(input);
        mediator->changeTaxRates(std::stod(input));
	}

	else{
		std::cout<<"Cannot change tax"<<std::endl;
	}
}
