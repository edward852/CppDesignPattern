//
// Created by switch on 5/24/17.
//

#ifndef COMMAND_AIRCONDITIONEROFFCMD_H
#define COMMAND_AIRCONDITIONEROFFCMD_H


#include "Command.h"
#include "Airconditioner.h"

class AirconditionerOffCmd: public Command {
public:
    AirconditionerOffCmd(Airconditioner& _ac):ac(_ac) {}
    virtual void execute() { ac.off(); }

private:
    Airconditioner& ac;
};


#endif //COMMAND_AIRCONDITIONEROFFCMD_H
