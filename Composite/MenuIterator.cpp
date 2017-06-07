//
// Created by switch on 6/5/17.
//

#include <iostream>
#include "MenuIterator.h"

using namespace std;

MenuIterator::MenuIterator(const MenuIter &begin, const MenuIter &end)
{
    iter = begin;
    itEnd = end;
}

bool MenuIterator::hasNext() {
    return iter!=itEnd;
}

MenuIterator::ElemPtr MenuIterator::next()
{
    if (hasNext())
    {
        return *iter++;
    }

    return nullptr;
}

MenuIterator::~MenuIterator() {
    cout<<__func__<<" called"<<endl;
}
