//
// Created by switch on 6/7/17.
//

#ifndef STATE_SOLDOUTSTATE_H
#define STATE_SOLDOUTSTATE_H


#include <memory>
#include "State.h"

// Forward Declaration
class GumballMachine;

class SoldOutState: public State {
public:
    SoldOutState();

    virtual ~SoldOutState();

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


#endif //STATE_SOLDOUTSTATE_H
