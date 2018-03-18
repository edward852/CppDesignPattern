//
// Created on 2018/3/18.
//

#include <iostream>

#include "BookSelf.h"
#include "BookSelfIterator.h"

using namespace std;

BookSelf::BookSelf()
{
    books.reserve(8);
}

BookSelf::~BookSelf()
{
    cout<<"~BookSelf()"<<endl;
}

const Book* BookSelf::getBookAt(int index)
{
    if (0>index || index>=books.size())
    {
        return nullptr;
    }

    return &books[index];
}

void BookSelf::appendBook(const Book &book)
{
    books.push_back(book);
}

int BookSelf::getLength()
{
    return books.size();
}

Iterator::UniqItrPtr BookSelf::iterator()
{
    return Iterator::UniqItrPtr(new BookSelfIterator(this));
}

