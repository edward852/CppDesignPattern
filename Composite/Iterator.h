//
// Created by switch on 6/5/17.
//

#ifndef COMPOSITE_ITERATOR_H
#define COMPOSITE_ITERATOR_H


#include <memory>

template <class _Tp>
class Iterator {
public:
    typedef _Tp ElemType;
    typedef typename std::shared_ptr<Iterator> IterPtr;
    typedef typename std::shared_ptr<_Tp> ElemPtr;

    virtual bool hasNext() = 0;
    virtual ElemPtr next() = 0;

    virtual ~Iterator() = default;
};

#endif //COMPOSITE_ITERATOR_H
