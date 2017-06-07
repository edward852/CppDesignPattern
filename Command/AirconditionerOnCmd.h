//
// Created by switch on 5/24/17.
//

#ifndef COMMAND_AIRCONDITIONERONCMD_H
#define COMMAND_AIRCONDITIONERONCMD_H

#include "Command.h"
#include "Airconditioner.h"

class AirconditionerOnCmd: public Command {
public:
    AirconditionerOnCmd(Airconditioner& _ac):ac(_ac) {}
    virtual void execute() { ac.on(); }

private:
    Airconditioner& ac;
};


#endif //COMMAND_AIRCONDITIONERONCMD_H
