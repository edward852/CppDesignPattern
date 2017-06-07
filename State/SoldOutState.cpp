//
// Created by switch on 6/7/17.
//

#include <iostream>
#include "SoldOutState.h"

using namespace std;

SoldOutState::SoldOutState()
    : desc{"SoldOutState"}
{

}

SoldOutState::~SoldOutState()
{
    cout<<__func__<<" called"<<endl;
}

void SoldOutState::insertQuarter()
{
    cout<<"You can't inserted a quarter, the machine is sold out"<<endl;
}

void SoldOutState::ejectQuarter()
{
    cout<<"You can't eject, you haven't injected a quarter yet"<<endl;
}

void SoldOutState::turnCrank()
{
    cout<<"You turned, but there are no gumballs"<<endl;
}

void SoldOutState::dispense()
{
    cout<<"No gumball dispensed"<<endl;
}

const string &SoldOutState::getDesc()
{
    return desc;
}

void SoldOutState::setStateMgr(State::MgrPtr pMgr)
{
    this->pMgr = pMgr;
}
