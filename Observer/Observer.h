//
// Created by switch on 5/22/17.
//

#ifndef OBSERVERPATTERN_OBSERVER_H
#define OBSERVERPATTERN_OBSERVER_H


class Observer {
public:
    virtual void update()= 0;
    virtual void display()= 0;
};


#endif //OBSERVERPATTERN_OBSERVER_H
