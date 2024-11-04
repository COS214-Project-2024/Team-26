
#ifndef DEMOLISHCOMMAND_H
#define DEMOLISHCOMMAND_H

#include "CityCommand.h"
#include "BuildingMediator.h"

/**
 * @class DemolishCommand
 * @brief Represents a command to demolish a building at a specified location.
 *
 * The DemolishCommand class is used to specify the location of a building 
 * that needs to be demolished. 
 */
class DemolishCommand : public CityCommand {
private:
    /// Pointer to the mediator responsible for coordinating the demolition process.
    BuildingMediator* mediator;

    /// The X coordinate of the location where the building will be demolished.
    int LOCATION_X;

    /// The Y coordinate of the location where the building will be demolished.
    int LOCATION_Y;

public:
    /**
     * @brief Constructs a DemolishCommand object.
     * @param x The X coordinate of the location.
     * @param y The Y coordinate of the location.
     * @param mediator Pointer to a BuildingMediator to handle the command.
     *        Defaults to a new instance of BuildingMediator.
     */
    DemolishCommand(int x = 0, int y = 0, BuildingMediator* mediator = new BuildingMediator());

    /**
     * @brief Executes the demolish command.
     *
     * This method calls the mediator to handle the demolition at the specified location.
     */
    void execute();
};

#endif 
