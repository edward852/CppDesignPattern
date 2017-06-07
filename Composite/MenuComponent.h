//
// Created by switch on 6/5/17.
//


// Forward Declaration
//class MenuComponent;

#ifndef COMPOSITE_MENUCOMPONENT_H
#define COMPOSITE_MENUCOMPONENT_H

#include <string>
#include <memory>


#include "Iterator.h"

class MenuComponent {
public:
    typedef std::shared_ptr<MenuComponent> MenuCompPtr;

    virtual void add(MenuCompPtr comp) = 0;
    virtual void del(MenuCompPtr comp) = 0;

    virtual const std::string& getName() = 0;
    virtual const std::string& getDescription() = 0;
    virtual bool isVegetarian() = 0;
    virtual double getPrice() = 0;

    virtual Iterator<MenuComponent>::IterPtr createIterator() = 0;

    virtual void print(int lvl=0) = 0;
};


#endif //COMPOSITE_MENUCOMPONENT_H
