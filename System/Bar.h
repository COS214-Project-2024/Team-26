#ifndef BAR_H
#define BAR_H

#include "EntertainmentBuilding.h"

class Bar : public EntertainmentBuilding
{
private:
    int revenue;

public:
    Bar(int revenue, int consumption);
};
#endif