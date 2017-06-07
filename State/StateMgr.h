//
// Created by switch on 6/7/17.
//

#ifndef STATE_STATEMGR_H
#define STATE_STATEMGR_H

#include <memory>

#include "State.h"

class StateMgr: public std::enable_shared_from_this<StateMgr>
{
public:
    typedef std::shared_ptr<State> StatePtr;
    typedef std::shared_ptr<StateMgr> StateMgrPtr;

    StateMgr(int numOfGumballs);

    StateMgrPtr getSharedPtr();

    void setState(StatePtr pState);

    StatePtr getState();
    StatePtr getNoQuarterState();
    StatePtr getHasQuarterState();
    StatePtr getSoldOutState();
    StatePtr getSoldState();

    void init();
    void print();
    void releaseBall();
    int getCount() const;

private:
    StatePtr pCurState;
    StatePtr pSoldOutState;
    StatePtr pNoQuarterState;
    StatePtr pHasQuarterState;
    StatePtr pSoldState;

    int count;
};


#endif //STATE_STATEMGR_H
