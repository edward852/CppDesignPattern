//
// Created by switch on 5/31/17.
//

#ifndef TEMPLATEMETHOD_CAFFEINEBEVERAGE_H
#define TEMPLATEMETHOD_CAFFEINEBEVERAGE_H

#include <iostream>

class CaffeineBeverage {
public:
    void prepareRecipe()
    {
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    }

    void boilWater()
    {
        std::cout<<"Boiling water"<<std::endl;
    }

    void pourInCup()
    {
        std::cout<<"Pouring into cup"<<std::endl;
    }

    virtual void brew() = 0;
    virtual void addCondiments() = 0;
};


#endif //TEMPLATEMETHOD_CAFFEINEBEVERAGE_H
