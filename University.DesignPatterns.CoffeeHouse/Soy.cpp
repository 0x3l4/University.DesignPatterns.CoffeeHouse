#include "Soy.h"
#include "CondimentDecorator.h"

Soy::Soy(Beverage* b) : CondimentDecorator(b)
{
    
}

string Soy::getDescription() const
{
    return beverage->getDescription() + ", Soy";
}

double Soy::cost() const
{
    float cost = beverage->cost();

    switch (beverage->getSize())
    {
    case BeverageSize::SMALL:
        cost += 0.10;
        break;
    case BeverageSize::MEDIUM:
        cost += 0.15;
        break;
    case BeverageSize::LARGE:
        cost += 0.20;
        break;
    default:
        break;
    }

    return cost;
}

Soy::~Soy()
{
    delete beverage;
}
