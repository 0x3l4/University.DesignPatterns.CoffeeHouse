#include <iostream>
#include "Beverage.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "DarkRoast.h"
#include "Soy.h"
#include "Whip.h"


using namespace std;

int main()
{
    Beverage* b = new Espresso;
    cout << b->getDescription() << ", $" << b->cost() << endl;

    b->setSize(BeverageSize::LARGE);
    cout << b->getDescription() << ", $" << b->cost() << endl;
    b = new Soy(b);
    b->setSize(BeverageSize::SMALL);
    cout << b->getDescription() << ", $" << b->cost() << endl;

    delete b;

    Beverage* b2 = new DarkRoast;
    cout << b2->getDescription() << ", $" << b2->cost() << endl;
    
    b2 = new Soy(b2);
    b2 = new Whip(b2);
    b2 = new Whip(b2);
    cout << b2->getDescription() << ", $" << b2->cost() << endl;
    b2->setSize(BeverageSize::SMALL);
    cout << b2->getDescription() << ", $" << b2->cost() << endl;

    delete b2;

    return 0;
}

