//
// Created by switch on 6/7/17.
//

#include <iostream>
#include "SoldState.h"
#include "GumballMachine.h"

using namespace std;

SoldState::SoldState()
    : desc{"SoldState"}
{

}

SoldState::~SoldState()
{
    cout<<__func__<<" called"<<endl;
}

void SoldState::insertQuarter()
{
    cout<<"Please wait, we're already giving you a gumball"<<endl;
}

void SoldState::ejectQuarter()
{
    cout<<"Sorry, you already turned the crank"<<endl;
}

void SoldState::turnCrank()
{
    cout<<"Turning twice doesn't get you another gumball!"<<endl;
}

void SoldState::dispense()
{
    auto spMgr = pMgr.lock();

    spMgr->releaseBall();
    if (0 < spMgr->getCount())
    {
        spMgr->setState(spMgr->getNoQuarterState());
    }
    else
    {
        cout<<"Oops, out of gumballs!"<<endl;
        spMgr->setState(spMgr->getSoldOutState());
    }
}

const string &SoldState::getDesc()
{
    return desc;
}

void SoldState::setStateMgr(State::MgrPtr pMgr)
{
    this->pMgr = pMgr;
}
