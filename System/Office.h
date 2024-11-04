#ifndef OFFICE_H
#define OFFICE_H

#include "CommercialBuilding.h"

/**
 * @class Office
 * @brief Represents an office building in the commercial district
 *
 * The Office class is a specialized type of CommercialBuilding that provides
 * workspace for businesses. It contributes to the city's economic activity
 * and employment opportunities.
 */
class Office : public CommercialBuilding
{
    public:
        Office(int x, int y) : CommercialBuilding("Office", x, y) {}
};

#endif