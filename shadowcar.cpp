#include "shadowcar.h"

ShadowCar::ShadowCar()
{
    number = 0;
    speed = 0;
    color = Car::SHADOW;
    x = 0;
    y = 0;
}

void ShadowCar::stop() {
    speed = 0;
}

void ShadowCar::start() {
    stop();
}
