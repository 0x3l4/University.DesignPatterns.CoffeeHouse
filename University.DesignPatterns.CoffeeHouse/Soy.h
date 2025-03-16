#pragma once

#include "CondimentDecorator.h"

class Soy : public CondimentDecorator
{
public:
	Soy(Beverage* b);
	virtual string getDescription() const override;
	virtual double cost() const override;
	~Soy();
};

