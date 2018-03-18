//
// Created on 2018/3/18.
//

#ifndef ITERATOR_ITERATOR_H
#define ITERATOR_ITERATOR_H

#include <memory>

class Iterator {
public:
    typedef std::unique_ptr<Iterator> UniqItrPtr;

    virtual bool hasNext() = 0;
    virtual void *next() = 0;

    virtual ~Iterator() {};
};


#endif //ITERATOR_ITERATOR_H
