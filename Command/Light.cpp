//
// Created by switch on 5/24/17.
//

#include <iostream>
#include "Light.h"

using namespace std;

Light::Light(string loc)
{
    location = loc;
}

void Light::on()
{
    cout<<"Light@"<<location<<" is on"<<endl;
}

void Light::off()
{
    cout<<"Light@"<<location<<" is off"<<endl;
}
