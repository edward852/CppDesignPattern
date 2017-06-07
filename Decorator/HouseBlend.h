//
// Created by switch on 5/23/17.
//

#ifndef DECORATOR_HOUSEBLEND_H
#define DECORATOR_HOUSEBLEND_H


#include "Beverage.h"

class HouseBlend: public Beverage {
public:
    HouseBlend();
    double cost() override;
};


#endif //DECORATOR_HOUSEBLEND_H
