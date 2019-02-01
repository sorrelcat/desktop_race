#include "car.h"
#include <cmath>
#include <limits>

Car::Car(int n, double s, colors c) : number(n), speed (s), color(c)
{
    x = START_POSITION_X;
    y = START_POSITION_Y;
}

Car::Car() {
    Car(0, 0, Car::RED);
}

bool Car::operator==(const Car& c) {
    if(c.x != x) return false;
    if(c.y != y) return false;
    if(c.color != color) return false;
    if(c.number != number) return false;
    if(std::fabs(c.speed - speed) < std::numeric_limits<double>::epsilon()) return false;
    return true;
}

bool Car::operator!=(const Car& c) {
    return !(*this == c);
}
