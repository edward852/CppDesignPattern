//
// Created on 2018/3/18.
//

#ifndef ITERATOR_BOOK_H
#define ITERATOR_BOOK_H

#include <string>

class Book {
private:
    std::string name;

public:
    Book(const std::string &name);
    virtual ~Book();

    std::string getName() const;
};


#endif //ITERATOR_BOOK_H
