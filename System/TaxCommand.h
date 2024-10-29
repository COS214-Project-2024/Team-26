#ifndef TAXCOMMAND_H
#define TAXCOMMAND_H

#include "CityCommand.h"

class TaxCommand : public CityCommand {

public:
	int tax;
	
	TaxCommand(int tax, CityMediator* mediator);
	void execute();
	
};

#endif
