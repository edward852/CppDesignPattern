//
// Created by switch on 5/31/17.
//

#ifndef TEMPLATEMETHOD_CAFFEINEBEVERAGEWITHHOOK_H
#define TEMPLATEMETHOD_CAFFEINEBEVERAGEWITHHOOK_H

#include <iostream>

class CaffeineBeverageWithHook {
public:
    void prepareRecipe()
    {
        boilWater();
        brew();
        pourInCup();

        if (customerWantsCondiments())
        {
            addCondiments();
        }
    }

    void boilWater()
    {
        std::cout<<"Boiling water"<<std::endl;
    }

    void pourInCup()
    {
        std::cout<<"Pouring into cup"<<std::endl;
    }

    virtual bool customerWantsCondiments()
    {
        return true;
    }

    virtual void brew() = 0;
    virtual void addCondiments() = 0;
};


#endif //TEMPLATEMETHOD_CAFFEINEBEVERAGEWITHHOOK_H
