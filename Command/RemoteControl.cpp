//
// Created by switch on 5/24/17.
//

#include "RemoteControl.h"
#include "NoopCmd.h"

RemoteControl::RemoteControl()
{
    for (int i=0; i<maxCmds; i++)
    {
        onCmds[i] = new NoopCmd();
        offCmds[i] = new NoopCmd();
    }
}

void RemoteControl::setCommand(int slot, Command& onCmd, Command& offCmd)
{
    if (0<=slot && slot<maxCmds)
    {
        if (onCmds[slot])
            delete onCmds[slot];
        onCmds[slot] = &onCmd;

        if (offCmds[slot])
            delete offCmds[slot];
        offCmds[slot] = &offCmd;
    }
}

void RemoteControl::onBtnPressed(int slot)
{
    if (0<=slot && slot<maxCmds)
    {
        onCmds[slot]->execute();
    }
}

void RemoteControl::offBtnPressed(int slot)
{
    if (0<=slot && slot<maxCmds)
    {
        offCmds[slot]->execute();
    }
}
