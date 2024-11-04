#ifndef THEATER_H
#define THEATER_H

#include "EntertainmentBuilding.h"

class Theater : public EntertainmentBuilding
{
private:
    int revenue;

public:
    Theater(int revenue, int consumption, int x, int y) : EntertainmentBuilding("Theater", x, y) {}
};
#endif