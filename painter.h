#ifndef PAINTER_H
#define PAINTER_H

#include <iostream>
#include "race.h"
#include "observer.h"

class Painter : public Observer
{
    Race* race;
public:
    Painter(Race* r);
    virtual void update();

};

#endif // PAINTER_H
