//
// Created by switch on 6/2/17.
//

#ifndef ITERATOR_DINNERMENUITERATOR_H
#define ITERATOR_DINNERMENUITERATOR_H

#include "Iterator.h"
#include "MenuItem.h"

class DinnerMenuIterator: public Iterator {
public:
    bool hasNext();
    void* next();
    DinnerMenuIterator(MenuItem* menuItems, int numOfItems);

private:
    MenuItem* menuItems;
    int numOfItems;
    int position;
};


#endif //ITERATOR_DINNERMENUITERATOR_H
