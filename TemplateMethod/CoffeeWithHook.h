//
// Created by switch on 5/31/17.
//

#ifndef TEMPLATEMETHOD_COFFEEWITHHOOK_H
#define TEMPLATEMETHOD_COFFEEWITHHOOK_H


#include "CaffeineBeverageWithHook.h"

class CoffeeWithHook: public CaffeineBeverageWithHook {
public:
    void brew();

    void addCondiments();

    bool customerWantsCondiments();
};


#endif //TEMPLATEMETHOD_COFFEEWITHHOOK_H
