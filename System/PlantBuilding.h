#ifndef PLANTBUILDING_H
#define PLANTBUILDING_H

#include "Building.h"

class PlantBuilding : public Building{
    public:
        PlantBuilding();
        virtual ~PlantBuilding() = 0;    
};

#endif //PLANTBUILDING_H