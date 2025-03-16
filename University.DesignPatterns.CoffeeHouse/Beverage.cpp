#include "Beverage.h"
#include <iostream>

string Beverage::getDescription() const {
	return (size == BeverageSize::SMALL ? "Small\t| " : 
		size == BeverageSize::MEDIUM ? "Medium\t| " : 
		"Large\t| ") + 
		description;
}

void Beverage::setSize(BeverageSize size)
{
	if (this->size != size)
	{
		this->size = size;
	}
}

BeverageSize Beverage::getSize() const
{
	return size;
}