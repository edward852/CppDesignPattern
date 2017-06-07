//
// Created by switch on 6/2/17.
//

#ifndef ITERATOR_LUNCHMENU_H
#define ITERATOR_LUNCHMENU_H

#include <vector>
#include "Menu.h"
#include "MenuItem.h"

class LunchMenu: public Menu {
public:
    LunchMenu();
    void addItem(const std::string&, const std::string&, bool, double);
    Iterator* createIterator();

private:
    std::vector<MenuItem> menuItems;
};


#endif //ITERATOR_LUNCHMENU_H
