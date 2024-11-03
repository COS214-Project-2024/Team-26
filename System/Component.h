#ifndef COMPONENT_H
#define COMPONENT_H

#include "Building.h"
#include "BuildingState.h"

#include "Sewage.h"
#include "Waste.h"
#include "Power.h"
#include "Water.h"

class Component {
	public:
		Component();

		virtual ~Component() = default;

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