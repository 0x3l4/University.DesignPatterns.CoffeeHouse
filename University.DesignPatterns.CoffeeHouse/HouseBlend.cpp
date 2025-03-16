#include "HouseBlend.h"

HouseBlend::HouseBlend()
{
	description = "House Blend coffee";
}

double HouseBlend::cost() const
{
	float cost;

	switch (size)
	{
	case BeverageSize::SMALL:
		cost = 0.89;
		break;
	case BeverageSize::MEDIUM:
		cost = 0.99;
		break;
	case BeverageSize::LARGE:
		cost = 1.19;
		break;
	default:
		break;
	}

	return cost;
}
