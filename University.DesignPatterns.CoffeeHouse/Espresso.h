#pragma once

#include "Beverage.h"

class Espresso : public Beverage
{
public:
	Espresso();
	virtual double cost() const override;
};

