//
// Created by switch on 6/2/17.
//

#include "LunchMenuIterator.h"

#define USE_VEC_ITER        (1)

LunchMenuIterator::LunchMenuIterator(const std::vector<MenuItem> &menuItems)
    :menuItems{menuItems}, position{0}, it{this->menuItems.begin()}
{

}

bool LunchMenuIterator::hasNext() {
#if USE_VEC_ITER
    return it!=menuItems.end();
#else
    if (0>position || menuItems.size()<=position)
    {
        return false;
    }

    return true;
#endif
}

void *LunchMenuIterator::next() {
#if USE_VEC_ITER
    if (it!=menuItems.end())
    {
        return (void *)(&(*it++));
    }
#else
    if (position<menuItems.size())
    {
        return (void *)&menuItems.at(position++);
    }
#endif
    return nullptr;

}
