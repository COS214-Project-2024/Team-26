#ifndef APARTMENT_h
#define APARTMENT_h

#include "ResidentialBuilding.h"

class Apartment : public ResidentialBuilding {
public:
    Apartment(int x, int y) : ResidentialBuilding("Apartment", x, y) {}
};

#endif
