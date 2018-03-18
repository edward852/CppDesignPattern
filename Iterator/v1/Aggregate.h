//
// Created on 2018/3/18.
//

#ifndef ITERATOR_AGGREGATE_H
#define ITERATOR_AGGREGATE_H

#include "Iterator.h"

class Aggregate {
public:
    virtual Iterator::UniqItrPtr iterator() = 0;

    virtual ~Aggregate() {}
};


#endif //ITERATOR_AGGREGATE_H
