#include "painter.h"

Painter::Painter(Race* r)
{
    race = r;
    race->addObserver(this);
}

void Painter::update() {
    std::cout << "Painting model" << std::endl;
    std::cout << "Model: drivers = " << race->getDriversQuantity() << std::endl;
    std::cout << "Observers = " << race->getObserversQuantity() << std::endl;
}
