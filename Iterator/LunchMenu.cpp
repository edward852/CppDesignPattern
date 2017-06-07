//
// Created by switch on 6/2/17.
//

#include "LunchMenu.h"
#include "LunchMenuIterator.h"

LunchMenu::LunchMenu() {
    addItem("Lunch menu item1",
            "Lunch menu item1 description",
            true, 2.99);
    addItem("Lunch menu item2",
            "Lunch menu item2 description",
            false, 2.99);
    addItem("Lunch menu item3",
            "Lunch menu item3 description",
            true, 3.49);
    addItem("Lunch menu item4",
            "Lunch menu item4 description",
            true, 3.59);
}

void LunchMenu::addItem(const std::string& name, const std::string& desc, bool vegetarian, double price) {
    menuItems.push_back(MenuItem(name, desc, vegetarian, price));
}

Iterator *LunchMenu::createIterator() {
    return new LunchMenuIterator(menuItems);
}

