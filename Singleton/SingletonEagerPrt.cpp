//
// Created by switch on 5/24/17.
//
#include <iostream>
#include "SingletonEagerPrt.h"
#include <typeinfo>

using namespace std;

SingletonEagerPtr* SingletonEagerPtr::s = new SingletonEagerPtr();

void SingletonEagerPtr::display()
{
    cout<<"This is instance of "<< typeid(this).name()<<"@"<<this<<endl;
}

SingletonEagerPtr::SingletonEagerPtr()
{
    cout<<__func__<<" called"<<endl;
}
