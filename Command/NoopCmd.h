//
// Created by switch on 5/24/17.
//

#ifndef COMMAND_NOOPCMD_H
#define COMMAND_NOOPCMD_H

#include "Command.h"

class NoopCmd: public Command {
public:
    virtual void execute() { /* no operation */ }
};


#endif //COMMAND_NOOPCMD_H
