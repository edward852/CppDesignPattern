//
// Created by switch on 6/2/17.
//

#include "MenuItem.h"

const std::string& MenuItem::getName() {
    return name;
}

std::string MenuItem::getDescription() {
    return desc;
}

bool MenuItem::isVegetarian() {
    return vegetarian;
}

double MenuItem::getPrice() {
    return price;
}

MenuItem::MenuItem(const std::string& n, const std::string& d, bool v, double p) {
    name = n;
    desc = d;
    vegetarian = v;
    price = p;
}

MenuItem::MenuItem()
    :vegetarian{false}, price{0}
{

}
