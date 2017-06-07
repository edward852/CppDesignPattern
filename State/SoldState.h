//
// Created by switch on 6/7/17.
//

#ifndef STATE_SOLDSTATE_H
#define STATE_SOLDSTATE_H


#include "State.h"

// Forward Declaration
class GumballMachine;

class SoldState: public State {
public:
    SoldState();

    virtual ~SoldState();

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


#endif //STATE_SOLDSTATE_H
