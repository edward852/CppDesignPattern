#include <iostream>
//#include "Beverage.h"
//#include "CondimentDecorator.h"
#include "HouseBlend.h"
#include "Mocha.h"

using namespace std;

int main()
{
    Beverage *beverage = new HouseBlend();
    cout<<beverage->getDescription()<<": $"<<beverage->cost()<<endl;

    beverage = new Mocha(beverage);
    cout<<beverage->getDescription()<<": $"<<beverage->cost()<<endl;

    beverage = new Mocha(beverage);
    cout<<beverage->getDescription()<<": $"<<beverage->cost()<<endl;

    return 0;
}