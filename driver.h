#ifndef DRIVER_H
#define DRIVER_H
#include <string>
#include  "car.h"
#include "observable.h"

class Driver
{
protected:
    std::string name;
    int level;
    Car* car;
public:
    Driver();
    Driver (std::string, int, Car*);

    bool operator==(const Driver&);
    bool operator!=(const Driver&);
};

#endif // DRIVER_H
