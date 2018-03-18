//
// Created by on 2018/3/18.
//

#include <iostream>

#include "BookSelf.h"
#include "BookSelfIterator.h"

using namespace std;

BookSelfIterator::BookSelfIterator(BookSelf *pBookSelf)
        : pBookSelf(pBookSelf), index(0)
{

}

BookSelfIterator::~BookSelfIterator()
{
    cout<<"~BookSelfIterator()"<<endl;
}

bool BookSelfIterator::hasNext()
{
    if (index < pBookSelf->getLength())
    {
        return true;
    }

    return false;
}

void *BookSelfIterator::next()
{
    return (void *)pBookSelf->getBookAt(index++);
}


