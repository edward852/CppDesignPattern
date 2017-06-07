//
// Created by switch on 6/7/17.
//
#include <iostream>

#include "GumballMachine.h"
#include "SoldOutState.h"
#include "NoQuarterState.h"
#include "HasQuarterState.h"
#include "SoldState.h"

using namespace std;

GumballMachine::GumballMachine(int numOfGumballs)
{
    pMgr = make_shared<StateMgr>(numOfGumballs);
    pMgr->init();

    if (0 < numOfGumballs)
    {
        pMgr->setState(pMgr->getNoQuarterState());
    }
    else
    {
        pMgr->setState(pMgr->getSoldOutState());
    }
}

GumballMachine::~GumballMachine()
{
    cout<<__func__<<" called"<<endl;
}

void GumballMachine::insertQuarter()
{
    pMgr->getState()->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
    pMgr->getState()->ejectQuarter();
}

void GumballMachine::turnCrank()
{
    pMgr->getState()->turnCrank();
    pMgr->getState()->dispense();
}

void GumballMachine::print()
{
    pMgr->print();
    cout<<"StateMgr Ref "<<pMgr.use_count()<<endl;

    cout<<string(40, '-')<<endl;
}
