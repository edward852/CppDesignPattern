//
// Created by switch on 6/2/17.
//

#ifndef ITERATOR_ITERATOR_H
#define ITERATOR_ITERATOR_H


class Iterator {
public:
    virtual bool hasNext() = 0;
    virtual void *next() = 0;
};


#endif //ITERATOR_ITERATOR_H
