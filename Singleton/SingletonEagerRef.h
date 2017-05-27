//
// Created by switch on 5/24/17.
//

#ifndef SINGLETON_SINGLETONEAGER_H
#define SINGLETON_SINGLETONEAGER_H

class SingletonEagerRef {
public:
    static SingletonEagerRef& getInstance() { return s; }
    void display();

private:
    SingletonEagerRef() {};
    SingletonEagerRef(const SingletonEagerRef &);             // do not implement
    SingletonEagerRef& operator=(const SingletonEagerRef &);  // do not implement

    static SingletonEagerRef s;
};

#endif //SINGLETON_SINGLETONEAGER_H
