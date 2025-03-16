#pragma once

#include "Beverage.h"

class CondimentDecorator : public Beverage
{
public:
	CondimentDecorator(Beverage* b);
	void setSize(BeverageSize size) override;
	BeverageSize getSize() const override;
protected:
	Beverage* beverage;
};