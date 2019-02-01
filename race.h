#ifndef RACE_H
#define RACE_H
#include <vector>
#include "driver.h"
#include "observer.h"

class Race : public Observable
{
    std::vector<Observer*> observers;
    std::vector<Driver*> drivers;
    int rounds;
public:
    Race();

    void setRounds(int);
    int getRounds();

    void addDriver(Driver*);
    void removeDriver(Driver*);
    Driver* findDriver(Driver*);

    int getDriversQuantity();
    int getObserversQuantity();

    void addObserver(Observer* t);
};

#endif // RACE_H
