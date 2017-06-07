//
// Created by switch on 6/5/17.
//

#ifndef COMPOSITE_NULLITERATOR_H
#define COMPOSITE_NULLITERATOR_H

#include "MenuComponent.h"
#include "Iterator.h"

class NullIterator: public Iterator<MenuComponent> {
public:
    bool hasNext() { return false; }
    ElemPtr next() { return nullptr; }

    NullIterator()
    {
        ptr = new char[128];
    }

    ~NullIterator()
    {
        std::cout<<__func__<<" called"<<std::endl;
        delete[] ptr;
    }

private:
    char *ptr;
};


#endif //COMPOSITE_NULLITERATOR_H
