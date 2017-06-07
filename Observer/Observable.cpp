//
// Created by switch on 5/22/17.
//

#include "Observable.h"

using namespace std;

int Observable::addObserver(Observer &o) {
    observers.push_back(&o);
    return 0;
}

int Observable::delObserver(Observer &o) {
    vector<Observer *>::iterator it;

    for (it=observers.begin(); it!=observers.end(); ++it)
    {
        if (*it == &o)
        {
            observers.erase(it);
            return 0;
        }
    }

    return -1;
}

int Observable::ntfyObservers() {
    vector<Observer *>::iterator it;

    for (it=observers.begin(); it!=observers.end(); ++it)
    {
        (*it)->update();
    }

    return 0;
}

Observable::~Observable() {
    observers.clear();
    observers.swap(observers);
}
