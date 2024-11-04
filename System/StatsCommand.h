#ifndef STATSCOMMAND_H
#define STATSCOMMAND_H

#include "CityCommand.h"
#include "StatsMediator.h"
#include<iostream>

class StatsCommand : public CityCommand {

private:
	StatsMediator* mediator;

public:
	StatsCommand(StatsMediator* mediator = new StatsMediator());
	void execute();
};

#endif

