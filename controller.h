#ifndef Controller_H
#define Controller_H
#include "race.h"

class Controller
{
    Race* race;
public:
    Controller(Race* r);
    void startRace();
};

#endif // Controller_H


