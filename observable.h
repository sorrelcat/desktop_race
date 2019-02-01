#ifndef OBSERVABLE_H
#define OBSERVABLE_H
#include <vector>
#include "observer.h"


class Observable
{
    std::vector<Observer*> observers;
public:
   void addObserver(Observer *observer);
   void notifyUpdate();

};

#endif // OBSERVABLE_H
