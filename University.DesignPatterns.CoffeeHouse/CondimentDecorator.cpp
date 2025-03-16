#include "CondimentDecorator.h"

CondimentDecorator::CondimentDecorator(Beverage* b) : beverage(b) 
{ 

}

void CondimentDecorator::setSize(BeverageSize size)
{
	beverage->setSize(size);
}

BeverageSize CondimentDecorator::getSize() const
{
	return beverage->getSize();
}
