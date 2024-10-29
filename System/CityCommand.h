#ifndef CITYCOMMAND_H
#define CITYCOMMAND_H

#include "CityMediator.h"

class CityCommand {

protected:
	CityMediator* mediator;

public:
	virtual void execute() = 0;
};

#endif
