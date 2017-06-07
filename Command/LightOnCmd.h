//
// Created by switch on 5/24/17.
//

#ifndef COMMAND_LIGHTONCMD_H
#define COMMAND_LIGHTONCMD_H

#include "Light.h"
#include "Command.h"

class LightOnCmd: public Command {
public:
    LightOnCmd(Light& l):light(l) {}
    virtual void execute() { light.on(); }

private:
    Light& light;
};


#endif //COMMAND_LIGHTONCMD_H
