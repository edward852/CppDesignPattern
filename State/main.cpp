#include <iostream>
#include <memory>

#include "GumballMachine.h"

using namespace std;

int main() {
    //auto pMach = make_shared<GumballMachine>(5);
    GumballMachine mach(5);
    auto* pMach = &mach;

    pMach->print();

    pMach->insertQuarter();
    pMach->print();

    pMach->turnCrank();
    pMach->print();

    pMach->ejectQuarter();

    return 0;
}