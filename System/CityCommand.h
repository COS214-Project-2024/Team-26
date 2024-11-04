#ifndef CITYCOMMAND_H
#define CITYCOMMAND_H

#include "CityMediator.h"

/**
 * @class CityCommand
 * @brief An abstract base class for commands.
 * The CityCommand class serves as an interface for various commands. Derived classes must implement the 
 * execute() method to define specific actions.
 */
class CityCommand {

protected:
    
    // CityMediator* mediator;

public:
    /**
     * @brief Pure virtual function to execute a command.
     *
     * This function will be overridden by derived classes to specify the command behavior.
     */
    virtual void execute() = 0;
};

#endif //


