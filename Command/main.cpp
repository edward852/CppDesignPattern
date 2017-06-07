#include <iostream>
#include <string>
//#include "Light.h"
//#include "Airconditioner.h"
#include "LightOnCmd.h"
#include "LightOffCmd.h"
#include "AirconditionerOnCmd.h"
#include "AirconditionerOffCmd.h"
#include "RemoteControl.h"

using namespace std;

int main() {
    Light livingRoomLight("living room");
    Light kitchenLight("kitchen");
    Airconditioner bedroomAc("bedroom");
    Airconditioner dinningRoomAc("dinning room");

    LightOnCmd lightOnCmd (livingRoomLight);
    LightOffCmd lightOffCmd(kitchenLight);
    AirconditionerOnCmd acOnCmd(bedroomAc);
    AirconditionerOffCmd acOffCmd(dinningRoomAc);

    RemoteControl rmtCtrl;
    rmtCtrl.setCommand(0, lightOnCmd, lightOffCmd);
    rmtCtrl.setCommand(1, acOnCmd, acOffCmd);

    rmtCtrl.onBtnPressed(0);
    rmtCtrl.offBtnPressed(0);
    rmtCtrl.onBtnPressed(1);
    rmtCtrl.offBtnPressed(1);
    // NoopCmd
    rmtCtrl.onBtnPressed(2);

    return 0;
}