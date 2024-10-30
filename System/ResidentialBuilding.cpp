#include <exception>
using namespace std;

#include "ResidentialBuilding.h"
#include "Building.h"

int ResidentialBuilding::getSewageProduction()
{
    return sewageProduction;
}

int ResidentialBuilding::getWasteProduction()
{
    return wasteProduction;
}