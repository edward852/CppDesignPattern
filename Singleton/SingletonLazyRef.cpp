//
// Created by switch on 5/24/17.
//
#include <iostream>
#include <typeinfo>
#include "SingletonLazyRef.h"

using namespace std;

SingletonLazyRef::SingletonLazyRef()
{
    cout<<__func__<<" called"<<endl;
}

void SingletonLazyRef::display()
{
    cout<<"This is instance of "<< typeid(this).name()<<"@"<<this<<endl;
}
