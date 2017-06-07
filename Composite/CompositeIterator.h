//
// Created by switch on 6/5/17.
//

#ifndef COMPOSITE_COMPOSITEITERATOR_H
#define COMPOSITE_COMPOSITEITERATOR_H

#include <list>
#include <stack>

#include "MenuComponent.h"
#include "Iterator.h"


class CompositeIterator: public Iterator<MenuComponent> {
private:
    typedef std::stack<IterPtr> CompIterStk;

public:
    CompositeIterator(const IterPtr &iter);

    bool hasNext();
    ElemPtr next();

    ~CompositeIterator();

private:
    CompIterStk iterStk;
};


#endif //COMPOSITE_COMPOSITEITERATOR_H
