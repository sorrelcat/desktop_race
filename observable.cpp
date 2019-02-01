#include "observable.h"

void Observable::addObserver(Observer *observer)
{
   observers.push_back(observer);
}

void Observable::notifyUpdate()
{
   int size = observers.size();
   for (int i = 0; i < size; i++)
   {
      observers[i]->update();
   }
}
