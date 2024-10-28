#ifndef DEMOLISHCOMMAND_H
#define DEMOLISHCOMMAND_H


#include "CityCommand.h"

class DemolishCommand : CityCommand {

private:
	
	int LOCATION_X;
	int LOCATION_Y;

public:
	DemolishCommand(int x, int y, CityMediator* mediator);
	void execute();
};

#endif
