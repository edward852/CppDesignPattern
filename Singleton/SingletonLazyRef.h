//
// Created by switch on 5/24/17.
//

#ifndef SINGLETON_SINGLETONLAZYREF_H
#define SINGLETON_SINGLETONLAZYREF_H

// works for c++11(or later standard) only!
class SingletonLazyRef {
public:
    static SingletonLazyRef& getInstance()
    {
        // c++11(or later standard) ensure thread-safe static local initialization
        static SingletonLazyRef s;

        return s;
    }
    void display();

private:
    SingletonLazyRef();
    SingletonLazyRef(const SingletonLazyRef &);             // do not implement
    SingletonLazyRef& operator=(const SingletonLazyRef &);  // do not implement

};


#endif //SINGLETON_SINGLETONLAZYREF_H
