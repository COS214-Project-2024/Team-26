#include "CityManager.h"

void CityManager::registerCommand(std::string input, CityCommand *command) {
	
	//throw "Not yet implemented";

	commandsList[input] = command;


}

std::string CityManager::handleUserInput(std::string input) {
	// help - provide list of available commands
	if (input == "h" || input == "help") {
		std::string commands = "";
		for (const auto& command : commandsList)
			commands += command.first + "\n";

		return commands;
	} else {
		auto it = commandsList.find(input);

		if (it != commandsList.end()) {
			// Command found -  execute it
			executeCommand(it->second);
			return "";
		} else {
			return "Command not found: " + input;
		}
	}
}

void CityManager::executeCommand(CityCommand* command) {
	// TODO - implement CityManager::executeCommand
	//throw "Not yet implemented";

	  if (command) {
        command->execute();
    }


}
