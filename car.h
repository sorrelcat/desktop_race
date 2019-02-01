#ifndef CAR_H
#define CAR_H
#include "constants.h"


class Car
{
protected:
    int number;
    double speed;
    enum colors {
        RED,
        GREEN,
        BLUE,
        YELLOW,
        WHITE,
        SHADOW
    } color;
    int x;
    int y;

public:
    Car();
    Car(int, double, colors);
    void start();
    void stop();
    bool operator==(const Car& c);
    bool operator!=(const Car& c);
};

#endif // CAR_H
