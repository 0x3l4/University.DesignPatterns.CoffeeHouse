#include "Espresso.h"

Espresso::Espresso()
{
	description = "Espresso";
}

double Espresso::cost() const
{
	float cost;

	switch (size)
	{
	case BeverageSize::SMALL:
		cost = 1.75;
		break;
	case BeverageSize::MEDIUM:
		cost = 1.99;
		break;
	case BeverageSize::LARGE:
		cost = 2.19;
		break;
	default:
		break;
	}

	return cost;
}
