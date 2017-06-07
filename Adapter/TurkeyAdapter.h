//
// Created by switch on 5/25/17.
//

#ifndef ADAPTER_TURKEYADAPTER_H
#define ADAPTER_TURKEYADAPTER_H

#include "Turkey.h"
#include "Duck.h"

class TurkeyAdapter: public Duck {
public:
    TurkeyAdapter(Turkey& t): turkey(&t) {}
    void quack()
    {
        turkey->gobble();
    }
    void fly()
    {
        for (int i=0; i<5; i++)
        {
            turkey->fly();
        }
    }
private:
    Turkey* turkey;
};


#endif //ADAPTER_TURKEYADAPTER_H
