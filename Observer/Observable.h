//
// Created by switch on 5/22/17.
//

#ifndef OBSERVERPATTERN_OBSERVABLE_H
#define OBSERVERPATTERN_OBSERVABLE_H


#include <vector>
#include "Observer.h"

class Observable {
public:
    Observable()
    {

    }

    int addObserver(Observer& o);
    int delObserver(Observer& o);
    int ntfyObservers();
    virtual ~ Observable();

private:
    std::vector<Observer *> observers;
};


#endif //OBSERVERPATTERN_OBSERVABLE_H
