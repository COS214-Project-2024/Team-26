#ifndef NEXTCOMMAND_H
#define NEXTCOMMAND_H

#include "CityCommand.h"
#include "TurnMediator.h"

/**
 * @class NextCommand
 * @brief Represents a command to advance to the next turn in the city simulation.
 *
 * The NextCommand class facilitates transitioning to the next turn in the city through the 
 * use of a mediator.
 */
class NextCommand : public CityCommand {
private:
    /// Pointer to the mediator responsible for coordinating turn operations.
    TurnMediator* mediator;

public:
    /**
     * @brief Constructs a NextCommand object.
     * @param mediator Pointer to a TurnMediator to execute the command.
     */
    NextCommand(TurnMediator* mediator = new TurnMediator());

    /**
     * @brief Executes the next turn command.
     *
     * This function calls the mediator to go to next in city simulation
     */
    void execute();
};

#endif 
