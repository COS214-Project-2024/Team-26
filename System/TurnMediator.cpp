#include "TurnMediator.h"

TurnMediator::TurnMediator() : CityMediator() {
	government = government->instance();
}

int TurnMediator::nextRound() {
	// handle population
	int populationInc = handlePopulation();

	// handle building states
	getBuildings()->setNextStateAll();

	// update city funds
	// government->collectIncomeTax();

	return populationInc;
}

int TurnMediator::handlePopulation() {
	// age current population
	government->ageAll();

	PopulationStrategy* birthRate = new BirthRateStrategy();
	PopulationStrategy* deathRate = new DeathRateStrategy();
	PopulationStrategy* immigrationRate = new ImmigrationStrategy();

	// handle population increase or deacrease
	int births = birthRate->execute();
	int deaths = deathRate->execute();
	int immigrations = immigrationRate->execute();

	// initial citizens
	if (government->getPopulation() == 0 && immigrations != 0) {
		for (int i = 0; i < immigrations; i++) {
			Building* house = getBuildings()->getHouse();
			Building* job = getBuildings()->getJob();
			government->addCitizen(new Citizen(rand()%1000, rand()%51), house, job);
		}
		return immigrations;
	}

	// create || eliminate citizens
	// add children to some randomly chosen house
	for (int i = 0; i < births; i++) {
		Citizen* cit = government->getRandomCitizen();
		if (cit)
			government->addCitizen(cit->cloneChild());
	}

	// eliminate x amount of citizens
	government->eliminateCitizens(deaths);

	// 20% chance for related citizen to move in with family (same house different job)
	//	80% chance for new citizen to move into own house
	for (int i = 0; i < immigrations; i++) {
		int randVal = rand() % 101;
		if (randVal < 20) {
			Building* job = getBuildings()->getJob();
			government->addCitizen((government->getRandomCitizen())->cloneRelated(job));
		} else {
			Building* house = getBuildings()->getHouse();
			Building* job = getBuildings()->getJob();
			government->addCitizen((government->getRandomCitizen())->cloneUnrelated(house, job));
		}
	}

	return births + immigrations - deaths;
}

int TurnMediator::changeTaxRates(int newRate) {
	return 0;
}

TurnMediator::~TurnMediator() {
}