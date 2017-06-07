//
// Created by switch on 6/7/17.
//

#include <iostream>

#include "StateMgr.h"
#include "SoldOutState.h"
#include "NoQuarterState.h"
#include "HasQuarterState.h"
#include "SoldState.h"

using namespace std;

StateMgr::StateMgr(int numOfGumballs)
    :count{numOfGumballs}
{
    pSoldOutState = make_shared<SoldOutState>();
    pNoQuarterState = make_shared<NoQuarterState>();
    pHasQuarterState = make_shared<HasQuarterState>();
    pSoldState = make_shared<SoldState>();
}

StateMgr::StateMgrPtr StateMgr::getSharedPtr()
{
    return shared_from_this();
}

void StateMgr::setState(StateMgr::StatePtr pState)
{
#if 1
    if (pCurState)
    {
        cout << "[ State " << pCurState->getDesc() << " -> " << pState->getDesc() << " ]" << endl;
    }
#endif
    pCurState = pState;
}

StateMgr::StatePtr StateMgr::getState()
{
    return pCurState;
}

StateMgr::StatePtr StateMgr::getNoQuarterState()
{
    return pNoQuarterState;
}

StateMgr::StatePtr StateMgr::getHasQuarterState()
{
    return pHasQuarterState;
}

StateMgr::StatePtr StateMgr::getSoldOutState()
{
    return pSoldOutState;
}

StateMgr::StatePtr StateMgr::getSoldState()
{
    return pSoldState;
}

void StateMgr::print()
{
    cout<<string(40, '-')<<endl;

    cout<<"SoldOutState Ref "<<pSoldOutState.use_count()<<endl;
    cout<<"NoQuarterState Ref "<<pNoQuarterState.use_count()<<endl;
    cout<<"HasQuarterState Ref "<<pHasQuarterState.use_count()<<endl;
    cout<<"SoldState Ref "<<pSoldState.use_count()<<endl;

    cout<<string(40, '-')<<endl;
}

int StateMgr::getCount() const
{
    return count;
}

void StateMgr::releaseBall()
{
    cout<<"A gumball comes rolling out the slot..."<<endl;

    if (0 < count)
    {
        count--;
    }
}

void StateMgr::init()
{
    pSoldOutState->setStateMgr(shared_from_this());
    pNoQuarterState->setStateMgr(shared_from_this());
    pHasQuarterState->setStateMgr(shared_from_this());
    pSoldState->setStateMgr(shared_from_this());
}



