//
// Created by switch on 5/24/17.
//

#ifndef COMMAND_LIGHTOFFCMD_H
#define COMMAND_LIGHTOFFCMD_H

#include "Light.h"
#include "Command.h"

class LightOffCmd: public Command {
public:
    LightOffCmd(Light& l):light(l) {}
    virtual void execute() { light.off(); }

private:
    Light& light;
};


#endif //COMMAND_LIGHTOFFCMD_H
