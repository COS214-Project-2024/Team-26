#ifndef CITYMEDIATOR_H
#define CITYMEDIATOR_H

#include <string>
#include "Iterator.h"
#include "Composite.h"

/**
 * @class CityMediator
 * @brief A base mediator class that provides access to building-related operations in the city.
 * 
 * The CityMediator class serves as a base for various mediators that facilitate interactions
 * with city buildings through an iterator.
 */
class CityMediator {
protected:
    /**
     * @brief Static iterator for accessing buildings within the city.
     */
    static Iterator* buildings;

public:
    /**
     * @brief Constructs a CityMediator object.
     */
    CityMediator() = default;

    /**
     * @brief Retrieves the buildings iterator, initializing it if necessary.
     * 
     * @return A pointer to the buildings iterator.
     */
    static Iterator* getBuildings() {
        if (!buildings)
            buildings = new Iterator();
        return buildings;
    }

    /**
     * @brief Virtual destructor for CityMediator, cleans up the buildings iterator.
     */
    virtual ~CityMediator() {
        if (buildings) delete buildings;
    }
};

#endif