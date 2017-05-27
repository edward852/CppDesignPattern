//
// Created by switch on 5/24/17.
//
#include <iostream>
#include <typeinfo>
#include "SingletonEagerRef.h"

using namespace std;

SingletonEagerRef SingletonEagerRef::s;

void SingletonEagerRef::display()
{
    cout<<"This is instance of "<< typeid(this).name()<<"@"<<this<<endl;
}
