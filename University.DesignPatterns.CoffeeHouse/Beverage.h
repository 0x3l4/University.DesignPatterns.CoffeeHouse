#pragma once

#include <string>

using namespace std;

enum class BeverageSize : char
{
	SMALL,
	MEDIUM,
	LARGE,
};

class Beverage
{
public:
	virtual void setSize(BeverageSize size);
	virtual BeverageSize getSize() const;
	virtual string getDescription() const;
	virtual double cost() const = 0;

protected:
	string description;
	BeverageSize size = BeverageSize::MEDIUM;
};

