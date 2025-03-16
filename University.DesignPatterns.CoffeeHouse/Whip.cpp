#include "Whip.h"
#include "CondimentDecorator.h"

Whip::Whip(Beverage* b) : CondimentDecorator(b)
{
	
}

string Whip::getDescription() const
{
	return beverage->getDescription() + ", Whip";
}

double Whip::cost() const
{
    float cost = beverage->cost();

    switch (beverage->getSize())
    {
    case BeverageSize::SMALL:
        cost += 0.08;
        break;
    case BeverageSize::MEDIUM:
        cost += 0.13;
        break;
    case BeverageSize::LARGE:
        cost += 0.18;
        break;
    default:
        break;
    }

    return cost;
}

Whip::~Whip()
{
	delete beverage;
}
