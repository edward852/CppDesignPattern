//
// Created by switch on 5/24/17.
//
#include <iostream>
#include "Airconditioner.h"

using namespace std;

Airconditioner::Airconditioner(string loc)
{
    location = loc;
}

void Airconditioner::on()
{
    cout<<"Airconditioner@"<<location<<" is on"<<endl;
}

void Airconditioner::off()
{
    cout<<"Airconditioner@"<<location<<" is off"<<endl;
}
