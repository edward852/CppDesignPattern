//
// Created by switch on 6/7/17.
//

#ifndef STATE_GUMBALLMACHINE_H
#define STATE_GUMBALLMACHINE_H


#include <memory>

#include "StateMgr.h"

class GumballMachine
{
public:
    GumballMachine(int numOfGumballs);
    ~GumballMachine();

    void insertQuarter();

    void ejectQuarter();

    void turnCrank();

    void print();

private:
    StateMgr::StateMgrPtr pMgr;
};


#endif //STATE_GUMBALLMACHINE_H
