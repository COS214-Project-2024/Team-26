#include "TurnMediator.h"

TurnMediator::TurnMediator() : CityMediator() {
	government = government->instance();
}

void TurnMediator::nextRound() {
	// handle population
	handlePopulation();

	// handle building states
	getBuildings()->getAndSetNextState();

	// update city funds
	// government->collectIncomeTax();
}

int TurnMediator::handlePopulation() {
	PopulationStrategy* birthRate = new BirthRateStrategy();
	PopulationStrategy* deathRate = new DeathRateStrategy();
	PopulationStrategy* immigrationRate = new ImmigrationStrategy();

	// handle population increase or deacrease
	int births = birthRate->execute();
	int deaths = deathRate->execute();
	int immigrations = immigrationRate->execute();

	// create || eliminate citizens
	// add children to some randomly chosen house
	for (int i = 0; i < births; i++) {
		// (government->getRandomCitizen())->cloneChild();
	}

	// eliminate x amount of citizens
	government->eliminateCitizens(deaths);

	// 20% chance for related citizen to move in with family (same house different job)
	//	80% chance for new citizen to move into own house
	for (int i = 0; i < immigrations; i++) {
		int randVal = rand() % 101;
		if (randVal < 20) {
			Building* job = getBuildings()->getJob();
			// (government->getRandomCitizen())->cloneRelated(job);
		} else {
			Building* house = getBuildings()->getHouse();
			Building* job = getBuildings()->getJob();
			// (government->getRandomCitizen())->cloneUnrelated(house, job);
		}
	}

	return births + immigrations - deaths;
}

void TurnMediator::updateStats() {
	// totalPoulation = government->getPopulation();
    
	// avgSatisfaction = government->getAverageSatisfaction();

    // int getAvailableHousingSpace();
	// // getBuildings()->

    // int getImmigrationLimit();

    // int getTotalHousingSpace();
}

int TurnMediator::changeTaxRates(int newRate) {
	return 0;
}

TurnMediator::~TurnMediator() {
}