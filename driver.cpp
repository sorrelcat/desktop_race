#include "driver.h"
#include <string>

Driver::Driver(std::string n, int l, Car* c) : name(n), level(l), car(c) {

}

Driver::Driver()
{
    Driver("Noname", 0, new Car());
}

bool Driver::operator==(const Driver& d) {
    if(d.level != level) return false;
    if(d.name != name) return false;
    if(d.car != car) return false;
    return true;
}

bool Driver::operator!=(const Driver& d) {
    return !(*this == d);
}

