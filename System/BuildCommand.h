#ifndef BUILDCOMMAND_H
#define BUILDCOMMAND_H

#include "CityCommand.h"
#include "BuildingMediator.h"
#include <iostream>

/**
 * @class BuildCommand
 * @brief Represents a command to construct a building at a specific location.
 *
 * The BuildCommand class specifies the type of building to be constructed and the location 
 * (coordinates) where it should be built. It uses a mediator to communicate
 * and execution of the building process.
 */
class BuildCommand : public CityCommand {

private:
    /// The type of building to be constructed.
    std::string buildingType;

    /// The X coordinate of the building's location.
    int LOCATION_X;

    /// The Y coordinate of the building's location.
    int LOCATION_Y;

    /// Pointer to the mediator responsible for coordinating the building process.
    BuildingMediator* mediator;

public:
	BuildCommand(const std::string& buildingType, int x, int y, BuildingMediator* mediator = new BuildingMediator());
	void execute();
};

#endif

