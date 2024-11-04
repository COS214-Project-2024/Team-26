#ifndef BUILDINGMEDIATOR_H
#define BUILDINGMEDIATOR_H

#include "CityMediator.h"

#include "BuildingFactory.h"
	#include "ResidentialBuildingFactory.h"
	#include "CommercialBuildingFactory.h"
	#include "ServiceBuildingFactory.h"
	#include "EntertainmentBuildingFactory.h"
	#include "LandmarkBuildingFactory.h"
	#include "IndustrialBuildingFactory.h"
	#include "PlantBuildingFactory.h"

#include "Iterator.h"

#include "ConcreteGovernment.h"

#include "BuildingState.h"
	#include"PlacedState.h"
	#include "UnderConstructionState.h"
	#include "CompleteState.h"
	#include "DemolishedState.h"

class BuildingMediator : public CityMediator {

private:
	BuildingFactory* factory;

	ConcreteGovernment* government;

public:
	BuildingMediator();

	/**
	 * @brief Builds a new building with the specified parameters.
	 * 
	 * @param buildingName The name of the building to be created.
	 * @param locationX The X-coordinate of the building's location.
	 * @param locationY The Y-coordinate of the building's location.
	 * @param state Optional pointer to the initial state of the building. Defaults to nullptr.
	 * 
	 * @return A string representing the building's details.
	 */
	std::string build(std::string buildingName, int locationX, int locationY, BuildingState* state = nullptr);

	/**
	 * @brief Demolishes a building with the specified location if there is one.
	 * 
	 * @param locationX The X-coordinate of the building's location.
	 * @param locationY The Y-coordinate of the building's location.
	 * 
	 * @return A string representing the building's details.
	 */
	std::string demolish(int locationX, int locationY);

	~BuildingMediator();
};

#endif
