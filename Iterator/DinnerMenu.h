//
// Created by switch on 6/2/17.
//

#ifndef ITERATOR_DINNERMENU_H
#define ITERATOR_DINNERMENU_H


#include "Menu.h"
#include "MenuItem.h"

class DinnerMenu: public Menu {
public:
    DinnerMenu();
    void addItem(std::string, std::string, bool, double);
    //MenuItem* getMenuItems();
    Iterator *createIterator();

private:
    static const int MAX_ITEMS = 6;
    MenuItem menuItems[MAX_ITEMS];
    int numOfItems;
};


#endif //ITERATOR_DINNERMENU_H
