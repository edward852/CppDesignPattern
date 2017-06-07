//
// Created by switch on 6/2/17.
//

#include <iostream>
#include "DinnerMenu.h"
#include "DinnerMenuIterator.h"

using namespace std;

DinnerMenu::DinnerMenu()
        :numOfItems{0}
{
    addItem("Dinner menu item1",
            "Dinner menu item1 description",
            true, 2.99);
    addItem("Dinner menu item2",
            "Dinner menu item2 description",
            false, 2.99);
    addItem("Dinner menu item3",
            "Dinner menu item3 description",
            false, 3.29);
    addItem("Dinner menu item4",
            "Dinner menu item4 description",
            false, 3.05);
}

void DinnerMenu::addItem(std::string name, std::string desc, bool vegetarian, double price) {
    if (MAX_ITEMS <= numOfItems)
    {
        cout<<"Sorry, menu is full! Can't add item to menu"<<endl;
        return ;
    }

    menuItems[numOfItems++] = MenuItem(name, desc, vegetarian, price);
}

Iterator *DinnerMenu::createIterator() {
    return new DinnerMenuIterator(menuItems, numOfItems);
}

