
#ifndef TAXCOMMAND_H
#define TAXCOMMAND_H

#include "CityCommand.h"
#include "TurnMediator.h"

class TaxCommand : public CityCommand {
private:
	TurnMediator* mediator;
public:
	int tax;
	
	TaxCommand(int tax, TurnMediator* mediator = new TurnMediator());
	void execute();
	
};

#endif

