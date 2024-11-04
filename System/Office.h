#ifndef OFFICE_H
#define OFFICE_H

#include "CommercialBuilding.h"

class Office: public CommercialBuilding {
public:
    Office(int x, int y) : CommercialBuilding("Office", x, y) {}
};

#endif
