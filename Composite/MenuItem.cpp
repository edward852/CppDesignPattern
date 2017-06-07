//
// Created by switch on 6/5/17.
//
#include <iostream>

#include "MenuItem.h"
#include "NullIterator.h"

using namespace std;

MenuItem::MenuItem(const std::string &n, const std::string &d, bool v, double p)
    : name{n}, desc{d}, vegetarian{v}, price{p}
{

}

const std::string &MenuItem::getName() {
    return name;
}

const std::string &MenuItem::getDescription() {
    return desc;
}

bool MenuItem::isVegetarian() {
    return vegetarian;
}

double MenuItem::getPrice() {
    return price;
}

void MenuItem::print(int lvl) {
    cout <<string(lvl, '\t') <<"[" <<name<<"]" <<endl;
    cout <<string(lvl+1, '\t') <<"description: " <<desc <<endl;
}

MenuItem::~MenuItem() {
    cout<<__func__<<" called. name:"<<name<<endl;
}

Iterator<MenuComponent>::IterPtr MenuItem::createIterator() {
    return shared_ptr<Iterator<MenuComponent>>(new NullIterator);
}

