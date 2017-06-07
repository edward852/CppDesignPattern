//
// Created by switch on 5/31/17.
//

#ifndef TEMPLATEMETHOD_TEA_H
#define TEMPLATEMETHOD_TEA_H

#include "CaffeineBeverage.h"

class Tea: public CaffeineBeverage {
public:
    void brew()
    {
        std::cout<<"Steeping the tea"<<std::endl;
    }

    void addCondiments()
    {
        std::cout<<"Adding Lemon"<<std::endl;
    }
};


#endif //TEMPLATEMETHOD_TEA_H
