
#ifndef DEMOLISHCOMMAND_H
#define DEMOLISHCOMMAND_H


#include "CityCommand.h"
#include "BuildingMediator.h"
class DemolishCommand : public CityCommand {
private:
	BuildingMediator* mediator;
private:
	
	int LOCATION_X;
	int LOCATION_Y;

public:
	DemolishCommand(int x = 0, int y = 0, BuildingMediator* mediator = new BuildingMediator());
	void execute();
};

#endif