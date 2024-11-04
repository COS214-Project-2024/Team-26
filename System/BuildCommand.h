#ifndef BUILDCOMMAND_H
#define BUILDCOMMAND_H

#include "CityCommand.h"
#include "BuildingMediator.h"
#include<iostream>

class BuildCommand : public CityCommand {

private:
	std::string buildingType;
	int LOCATION_X;
	int LOCATION_Y;
	BuildingMediator* mediator;

public:
	BuildCommand(const std::string& buildingType = "", int x = 0, int y = 0, BuildingMediator* mediator = new BuildingMediator());
	void execute();
};

#endif

