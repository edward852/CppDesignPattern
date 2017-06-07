//
// Created by switch on 5/31/17.
//

#ifndef TEMPLATEMETHOD_COFFEE_H
#define TEMPLATEMETHOD_COFFEE_H

#include "CaffeineBeverage.h"

class Coffee: public CaffeineBeverage {
public:
    void brew()
    {
        std::cout<<"Dripping Coffee through filter"<<std::endl;
    }

    void addCondiments()
    {
        std::cout<<"Adding Sugar and Milk"<<std::endl;
    }
};


#endif //TEMPLATEMETHOD_COFFEE_H
