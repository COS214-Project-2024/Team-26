#ifndef BUILDCOMMAND_H
#define BUILDCOMMAND_H

#include "CityCommand.h"
#include<iostream>

class BuildCommand : public CityCommand {

private:
	std::string buildingType;
	int LOCATION_X;
	int LOCATION_Y;

public:
	BuildCommand(const std::string& buildingType, int x, int y, CityMediator* mediator);
	void execute();
};

#endif

