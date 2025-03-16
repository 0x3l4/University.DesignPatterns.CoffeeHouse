#pragma once

#include "CondimentDecorator.h"

class Whip : public CondimentDecorator
{
public:
	Whip(Beverage* b);
	virtual string getDescription() const override;
	virtual double cost() const override;
	~Whip();
};

