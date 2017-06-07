//
// Created by switch on 6/7/17.
//

#ifndef STATE_STATE_H
#define STATE_STATE_H

#include <memory>
#include <string>

// Forward Declaration
class StateMgr;

class State {
public:
    typedef std::weak_ptr<StateMgr> MgrPtr;

    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;

    virtual const std::string& getDesc() = 0;
    virtual void setStateMgr(MgrPtr pMgr) = 0;

    virtual ~State() = default;
};


#endif //STATE_STATE_H
