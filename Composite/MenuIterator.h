//
// Created by switch on 6/5/17.
//

#ifndef COMPOSITE_MENUITERATOR_H
#define COMPOSITE_MENUITERATOR_H

#include <list>
#include "MenuComponent.h"
#include "Iterator.h"

class MenuIterator : public Iterator<MenuComponent> {
private:
    typedef std::list<MenuComponent::MenuCompPtr>::iterator MenuIter;

public:
    MenuIterator(const MenuIter &begin, const MenuIter &end);

    ~MenuIterator();

    bool hasNext();

    ElemPtr next();

private:
    MenuIter iter;
    MenuIter itEnd;
};


#endif //COMPOSITE_MENUITERATOR_H
