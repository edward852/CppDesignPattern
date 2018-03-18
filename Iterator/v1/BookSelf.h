//
// Created on 2018/3/18.
//

#ifndef ITERATOR_BOOKSELF_H
#define ITERATOR_BOOKSELF_H

#include <vector>
#include "Aggregate.h"
#include "Book.h"

class BookSelf: public Aggregate {
private:
    std::vector<Book> books;

public:
    BookSelf();
    virtual ~BookSelf();

    const Book* getBookAt(int index);
    void appendBook(const Book &book);
    int getLength();

    Iterator::UniqItrPtr iterator() override;
};


#endif //ITERATOR_BOOKSELF_H
