#ifndef NEXTCOMMAND_H
#define NEXTCOMMAND_H

#include "CityCommand.h"
#include "TurnMediator.h"
class NextCommand : public CityCommand {
private:
	TurnMediator* mediator;

public:
	NextCommand(TurnMediator* mediator = new TurnMediator());
	void execute();
};

#endif