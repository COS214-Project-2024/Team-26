#ifndef BOWLING_H
#define BOWLING_H

#include "EntertainmentBuilding.h"

class Bowling : public EntertainmentBuilding
{
private:
    int revenue;

public:
    Bowling(int revenue, int consumption, int x, int y) : EntertainmentBuilding("Bowling", x, y) {}
};
#endif