//
// Created by switch on 5/25/17.
//

#ifndef ADAPTER_MALLARDDUCK_H
#define ADAPTER_MALLARDDUCK_H

#include "Duck.h"

class MallardDuck: public Duck {
public:
    void quack()
    {
        std::cout<<"Quack"<<std::endl;
    }
    void fly()
    {
        std::cout<<"I'm flying"<<std::endl;
    }
};


#endif //ADAPTER_MALLARDDUCK_H
