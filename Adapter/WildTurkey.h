//
// Created by switch on 5/25/17.
//

#ifndef ADAPTER_WILDTURKEY_H
#define ADAPTER_WILDTURKEY_H

#include "Turkey.h"

class WildTurkey: public Turkey {
public:
    void gobble()
    {
        std::cout<<"Gobble gobble"<<std::endl;
    }
    void fly()
    {
        std::cout<<"I'm flying a short distance"<<std::endl;
    }
};


#endif //ADAPTER_WILDTURKEY_H
