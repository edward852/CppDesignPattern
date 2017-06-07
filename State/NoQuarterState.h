//
// Created by switch on 6/7/17.
//

#ifndef STATE_NOQUARTERSTATE_H
#define STATE_NOQUARTERSTATE_H


#include "State.h"

// Forward Declaration
class GumballMachine;

class NoQuarterState: public State {
public:
    NoQuarterState();

    virtual ~NoQuarterState();

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


#endif //STATE_NOQUARTERSTATE_H
