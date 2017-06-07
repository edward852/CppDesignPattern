//
// Created by switch on 6/5/17.
//

#ifndef COMPOSITE_MENU_H
#define COMPOSITE_MENU_H

#include <list>
#include <string>
#include "MenuComponent.h"

class Menu: public MenuComponent {
public:
    Menu(const std::string&, const std::string&);
    ~Menu();

    const std::string& getName();
    const std::string& getDescription();
    void add(MenuCompPtr);
    void del(MenuCompPtr);
    void print(int lvl=0);
    Iterator<MenuComponent>::IterPtr createIterator();

    bool isVegetarian(){ return false; }
    double getPrice(){ return 0;}

private:
    typedef std::list<MenuCompPtr>::iterator MenuCompIter;

    std::string name;
    std::string desc;
    std::list<MenuCompPtr> components;
};


#endif //COMPOSITE_MENU_H
