//
// Created by switch on 6/7/17.
//

#ifndef STATE_HASQUARTERSTATE_H
#define STATE_HASQUARTERSTATE_H


#include "State.h"

// Forward Declaration
class GumballMachine;

class HasQuarterState: public State {
public:
    HasQuarterState();

    virtual ~HasQuarterState();

    void insertQuarter() override;

    void ejectQuarter() override;

    void turnCrank() override;

    void dispense() override;

    const std::string &getDesc() override;

    void setStateMgr(MgrPtr pMgr) override;

private:
    MgrPtr pMgr;
    std::string desc;
};


#endif //STATE_HASQUARTERSTATE_H
