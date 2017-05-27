#include <iostream>
#include "SingletonEagerRef.h"
#include "SingletonEagerPrt.h"
#include "SingletonLazyRef.h"
#include "SingletonLazyPtr.h"

using namespace std;

int main() {
    SingletonEagerRef& ser1 = SingletonEagerRef::getInstance();
    SingletonEagerRef& ser2 = SingletonEagerRef::getInstance();

    cout<<"Check SingletonEagerRef"<<endl;
    ser1.display();
    ser2.display();
    cout<<endl;

    cout<<"Check SingletonEagerPtr"<<endl;
    SingletonEagerPtr* sep1 = SingletonEagerPtr::getInstance();
    SingletonEagerPtr* sep2 = SingletonEagerPtr::getInstance();
    sep1->display();
    sep2->display();
    cout<<endl;

    cout<<"Check SingletonLazyRef"<<endl;
    SingletonLazyRef& slr1 = SingletonLazyRef::getInstance();
    SingletonLazyRef& slr2 = SingletonLazyRef::getInstance();
    slr1.display();
    slr2.display();
    cout<<endl;

    cout<<"Check SingletonLazyPtr"<<endl;
    SingletonLazyPtr* slp1 = SingletonLazyPtr::getInstance();
    SingletonLazyPtr* slp2 = SingletonLazyPtr::getInstance();
    slp1->display();
    slp2->display();
    cout<<endl;

#if 0
    cout<<"sizeof Singleton: " <<sizeof(SingletonEagerRef)<<endl;
    cout<<"sizeof Singleton&: "<<sizeof(SingletonEagerRef&)<<endl;
    cout<<"sizeof Singleton*: "<<sizeof(SingletonEagerRef*)<<endl;
#endif
    return 0;
}