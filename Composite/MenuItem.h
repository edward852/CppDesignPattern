//
// Created by switch on 6/5/17.
//

#ifndef COMPOSITE_MENUITEM_H
#define COMPOSITE_MENUITEM_H

#include <iostream>
#include <string>
#include "MenuComponent.h"

class MenuItem: public MenuComponent {
public:
    MenuItem(const std::string&, const std::string&, bool, double);
    ~MenuItem();

    const std::string& getName();
    const std::string& getDescription();
    bool isVegetarian();
    double getPrice();
    void print(int lvl=0);
    Iterator<MenuComponent>::IterPtr createIterator();

    void add(MenuCompPtr){}
    void del(MenuCompPtr){}

private:
    std::string name;
    std::string desc;
    bool vegetarian;
    double price;
};


#endif //COMPOSITE_MENUITEM_H
