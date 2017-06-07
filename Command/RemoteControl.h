//
// Created by switch on 5/24/17.
//

#ifndef COMMAND_REMOTECONTROL_H
#define COMMAND_REMOTECONTROL_H

#include <zconf.h>
#include "Command.h"

class RemoteControl {
public:
    RemoteControl();
    void setCommand(int slot, Command& onCmd, Command& offCmd);
    void onBtnPressed(int slot);
    void offBtnPressed(int slot);

private:
    static const int maxCmds = 7;

    Command* onCmds[maxCmds];
    Command* offCmds[maxCmds];
};


#endif //COMMAND_REMOTECONTROL_H
