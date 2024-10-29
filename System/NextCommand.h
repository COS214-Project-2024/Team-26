#ifndef NEXTCOMMAND_H
#define NEXTCOMMAND_H

#include "CityCommand.h"
class NextCommand : public CityCommand {


public:
	NextCommand(CityMediator* mediator);
	void execute();
};

#endif
