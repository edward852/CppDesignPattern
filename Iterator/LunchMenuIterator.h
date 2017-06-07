//
// Created by switch on 6/2/17.
//

#ifndef ITERATOR_LUNCHMENUITERATOR_H
#define ITERATOR_LUNCHMENUITERATOR_H

#include <vector>
#include "Iterator.h"
#include "MenuItem.h"

class LunchMenuIterator: public Iterator {
public:
    LunchMenuIterator(const std::vector<MenuItem>&);
    bool hasNext();
    void* next();

private:
    typedef std::vector<MenuItem> MenuItems;
    MenuItems menuItems;
    MenuItems::iterator it;
    int position;
};


#endif //ITERATOR_LUNCHMENUITERATOR_H
