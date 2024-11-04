#ifndef APARTMENT_h
#define APARTMENT_h

#include "ResidentialBuilding.h"

/**
 * @brief Class representing an apartment building in the simulation
 * @details Apartment is a type of residential building that inherits from ResidentialBuilding
 *          and implements specific apartment-related functionality
 */
class Apartment : public ResidentialBuilding {
public:
    Apartment(int x, int y) : ResidentialBuilding("Apartment", x, y) {}
};

#endif