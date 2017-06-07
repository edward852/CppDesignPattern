//
// Created by switch on 6/5/17.
//

#include <iostream>

#include "Menu.h"
#include "CompositeIterator.h"

using namespace std;

CompositeIterator::CompositeIterator(const IterPtr &iter)
{
    iterStk.push(iter);
}

bool CompositeIterator::hasNext() {
    bool repeat;

    do {
        repeat = false;

        if (iterStk.empty()) {
            return false;
        }

        const IterPtr &iterPtr = iterStk.top();
        if (!iterPtr->hasNext()) {
            iterStk.pop();
            repeat = true;
        }
    } while (repeat);

    return true;
}


CompositeIterator::
ElemPtr CompositeIterator::next() {
    if (!hasNext())
    {
        return nullptr;
    }

    const IterPtr &iterPtr = iterStk.top();
    ElemPtr pComp = iterPtr->next();
    if (nullptr != dynamic_pointer_cast<Menu>(pComp))
    {
        iterStk.push(pComp->createIterator());
    }

    return pComp;
}

CompositeIterator::~CompositeIterator() {
    cout<<__func__<<" called"<<endl;
}

