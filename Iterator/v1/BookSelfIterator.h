//
// Created on 2018/3/18.
//

#ifndef ITERATOR_BOOKSELFITERATOR_H
#define ITERATOR_BOOKSELFITERATOR_H

#include "BookSelf.h"
#include "Iterator.h"

class BookSelfIterator: public Iterator {
private:
    BookSelf *pBookSelf;
    int index;

public:
    BookSelfIterator(BookSelf *pBookSelf);
    virtual ~BookSelfIterator();

    bool hasNext() override;
    void *next() override;
};


#endif //ITERATOR_BOOKSELFITERATOR_H
