//
// Created by switch on 6/2/17.
//

#include "DinnerMenuIterator.h"
#include "DinnerMenu.h"

bool DinnerMenuIterator::hasNext() {
    if (0>position || position>=numOfItems)
    {
        return false;
    }

    return true;
}

void *DinnerMenuIterator::next() {
    if (0<=position && position<numOfItems)
    {
        return (void *)&menuItems[position++];
    }

    return nullptr;
}

DinnerMenuIterator::DinnerMenuIterator(MenuItem *menuItems, int numOfItems)
    :position{0}
{
    this->menuItems = menuItems;
    this->numOfItems = numOfItems;
}
