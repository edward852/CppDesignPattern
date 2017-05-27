//
// Created by switch on 5/24/17.
//

#ifndef SINGLETON_SINGLETONEAGERPRT_H
#define SINGLETON_SINGLETONEAGERPRT_H


class SingletonEagerPtr {
public:
    static SingletonEagerPtr* getInstance() { return s; }
    void display();

private:
    SingletonEagerPtr();
    SingletonEagerPtr(const SingletonEagerPtr &);             // do not implement
    SingletonEagerPtr& operator=(const SingletonEagerPtr &);  // do not implement

    static SingletonEagerPtr* s;
};


#endif //SINGLETON_SINGLETONEAGERPRT_H
