//
// Created by switch on 5/23/17.
//

#include "Mocha.h"

std::string Mocha::getDescription()
{
    return beverage->getDescription()+", Mocha";
}

double Mocha::cost()
{
    return 0.2 + beverage->cost();
}
