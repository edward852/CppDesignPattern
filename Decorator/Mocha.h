//
// Created by switch on 5/23/17.
//

#ifndef DECORATOR_MOCHA_H
#define DECORATOR_MOCHA_H

#include "Beverage.h"
#include "CondimentDecorator.h"

class Mocha: public CondimentDecorator {
public:
    Mocha(Beverage *b)
    {
        beverage = b;
    }
    std::string getDescription();
    double cost();

private:
    Beverage *beverage;
};


#endif //DECORATOR_MOCHA_H
