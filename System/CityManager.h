#ifndef CITYMANAGER_H
#define CITYMANAGER_H

#include<iostream>
#include<map>
#include "CityCommand.h"


class CityManager {

private:
	std::map<std::string, CityCommand*> commandsList;

public:
	void registerCommand(std::string input, CityCommand* command);

	std::string handleUserInput(std::string input);

	void executeCommand(CityCommand* command);
};

#endif
