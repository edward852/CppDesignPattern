//
// Created by switch on 5/24/17.
//

#include <iostream>
#include <typeinfo>
#include "SingletonLazyPtr.h"

using namespace std;

SingletonLazyPtr* SingletonLazyPtr::s = nullptr;
pthread_once_t SingletonLazyPtr::po = PTHREAD_ONCE_INIT;

void SingletonLazyPtr::display()
{
    cout<<"This is instance of "<< typeid(this).name()<<"@"<<this<<endl;
}

SingletonLazyPtr *SingletonLazyPtr::getInstance()
{
    pthread_once(&po, initSingleton);

    return s;
}

void SingletonLazyPtr::initSingleton()
{
    s = new SingletonLazyPtr();
}

SingletonLazyPtr::SingletonLazyPtr()
{
    cout<<__func__<<" called"<<endl;
}
