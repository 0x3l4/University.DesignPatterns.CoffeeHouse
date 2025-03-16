#include "DarkRoast.h"

DarkRoast::DarkRoast()
{
	description = "Dark Roast coffee";
}

double DarkRoast::cost() const
{
	float cost;

	switch (size)
	{
	case BeverageSize::SMALL:
		cost = 1.19f;
		break;
	case BeverageSize::MEDIUM:
		cost = 1.39f;
		break;
	case BeverageSize::LARGE:
		cost = 1.65f;
		break;
	default:
		break;
	}

	return cost;
}
