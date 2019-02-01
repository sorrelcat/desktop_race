#include "race.h"
#include "shadowdriver.h"

Race::Race() : rounds(DEFAULT_ROUNDS)
{

}

void Race::setRounds(int n) {
    rounds = n;
}

int Race::getRounds() {
    return rounds;
}

Driver* Race::findDriver(Driver* d) {
    for(Driver* t : drivers) {
        if(t == d) {
            return t;
        }
    }
    return new ShadowDriver();
}

void Race::addDriver(Driver* d) {
    drivers.push_back(d);
}

void Race::removeDriver(Driver* d) {
    for(int i = 0; i < drivers.size(); ++i) {
        if(*drivers[i] == *d) {
            drivers.erase(drivers.begin() + i);
            return;
        }
    }
}

void Race::addObserver(Observer* t) {
    observers.push_back(t);
}


int Race::getDriversQuantity() {
    return drivers.size();
}
int Race::getObserversQuantity() {
    return observers.size();
}
