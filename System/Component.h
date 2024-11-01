#ifndef COMPONENT_H
#define COMPONENT_H

#include "Iterator.h"
#include "BuildingState.h"
#include "Building.h"

class Component {
	public:
		Component();

		virtual ~Component() {};

		virtual Iterator* createIterator() = 0;

		virtual void add(Building* component, int x, int y) = 0;

		virtual void remove(Building* component, int x, int y) = 0;

		virtual int getTotalPowerConsumption() = 0;

		virtual int getTotalWaterConsumption() = 0;

		virtual int getTotalCostConsumption() = 0;

		virtual int getTotalSewageConsumption() = 0;

		virtual int getTotalWasteConsumption() = 0;

		virtual int getTotalPowerProduction() = 0;

		virtual int getTotalWaterProduction() = 0;

		virtual int getTotalRevenue() = 0;

		virtual int getTotalSewageProduction() = 0;

		virtual int getTotalWasteProduction() = 0;

		virtual BuildingState* getAndSetNextState() = 0;
	};

#endif //COMPONENT_H