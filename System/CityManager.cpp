#include "CityManager.h"

void CityManager::registerCommand(std::string input, CityCommand *command) {
	
	//throw "Not yet implemented";

	commandsList[input] = command;


}

std::string CityManager::handleUserInput(std::string input) {
	
	//throw "Not yet implemented";

	auto it = commandsList.find(input);

	if (it != commandsList.end()) {
        // Command found -  execute it
        executeCommand(it->second);
        return "Command executed: " + input;
    }
	else {
        return "Command not found: " + input;
    

	}
}

void CityManager::executeCommand(CityCommand* command) {
	// TODO - implement CityManager::executeCommand
	//throw "Not yet implemented";

	  if (command) {
        command->execute();
    }


}
