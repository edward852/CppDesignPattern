//
// Created by switch on 6/7/17.
//

#include <iostream>
#include "NoQuarterState.h"
#include "GumballMachine.h"

using namespace std;

NoQuarterState::NoQuarterState()
        : desc{"NoQuarterState"}
{

}

NoQuarterState::~NoQuarterState()
{
    cout<<__func__<<" called"<<endl;
}

void NoQuarterState::insertQuarter()
{
    auto spMgr = pMgr.lock();
    auto pState = spMgr->getHasQuarterState();

    spMgr->setState(pState);

    cout<<"You inserted a quarter"<<endl;
}

void NoQuarterState::ejectQuarter()
{
    cout<<"You haven't inserted a quarter"<<endl;
}

void NoQuarterState::dispense()
{
    cout<<"You turned, but there's no quarter"<<endl;
}

void NoQuarterState::turnCrank()
{
    cout<<"You need to pay first"<<endl;
}

const string &NoQuarterState::getDesc()
{
    return desc;
}

void NoQuarterState::setStateMgr(State::MgrPtr pMgr)
{
    this->pMgr = pMgr;
}
