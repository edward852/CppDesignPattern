//
// Created by switch on 6/7/17.
//

#include <iostream>
#include "HasQuarterState.h"
#include "GumballMachine.h"

using namespace std;

HasQuarterState::HasQuarterState()
    : desc{"HasQuarterState"}
{

}

HasQuarterState::~HasQuarterState()
{
    cout<<__func__<<" called"<<endl;
}

void HasQuarterState::insertQuarter()
{
    cout<<"You can't insert another quarter"<<endl;
}

void HasQuarterState::ejectQuarter()
{
    auto spMgr = pMgr.lock();
    auto pState = spMgr->getNoQuarterState();

    spMgr->setState(pState);

    cout<<"Quarter returned"<<endl;
}

void HasQuarterState::turnCrank()
{
    auto spMgr = pMgr.lock();
    auto pState = spMgr->getSoldState();

    spMgr->setState(pState);

    cout<<"You turned..."<<endl;
}

void HasQuarterState::dispense()
{
    cout<<"No gumball dispensed"<<endl;
}

const string &HasQuarterState::getDesc()
{
    return desc;
}

void HasQuarterState::setStateMgr(State::MgrPtr pMgr)
{
    this->pMgr = pMgr;
}

