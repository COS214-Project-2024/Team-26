#ifndef TURNMEDIATOR_H
#define TURNMEDIATOR_H

#include "CityMediator.h"

class TurnMediator : public CityMediator {


public:
	void nextRound();

	int handlePopulation();
};

#endif
