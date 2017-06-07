//
// Created by switch on 5/23/17.
//

#ifndef DECORATOR_CONDIMENTDECORATOR_H
#define DECORATOR_CONDIMENTDECORATOR_H

#include <string>
#include "Beverage.h"

class CondimentDecorator: public Beverage {
public:
    virtual std::string getDescription() = 0;
};


#endif //DECORATOR_CONDIMENTDECORATOR_H
