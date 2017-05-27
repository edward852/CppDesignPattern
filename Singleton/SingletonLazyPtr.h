//
// Created by switch on 5/24/17.
//

#ifndef SINGLETON_SINGLETONLAZYPTR_H
#define SINGLETON_SINGLETONLAZYPTR_H

#include <pthread.h>

class SingletonLazyPtr {
public:
    static SingletonLazyPtr* getInstance();
    void display();

private:
    SingletonLazyPtr();
    SingletonLazyPtr(const SingletonLazyPtr &);             // do not implement
    SingletonLazyPtr& operator=(const SingletonLazyPtr &);  // do not implement
    static void initSingleton();

    static SingletonLazyPtr* s;
    static pthread_once_t po;
};


#endif //SINGLETON_SINGLETONLAZYPTR_H
