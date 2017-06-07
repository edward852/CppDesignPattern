//
// Created by switch on 6/5/17.
//

#include <iostream>
#include "Menu.h"
#include "MenuIterator.h"
#include "CompositeIterator.h"

using namespace std;

Menu::Menu(const std::string &n, const std::string &d)
    :name{n}, desc{d}
{

}

Menu::~Menu() {
    cout<<__func__<<" called. name:"<<name<<endl;
}

const std::string &Menu::getName() {
    return name;
}

const std::string &Menu::getDescription() {
    return desc;
}

void Menu::add(MenuCompPtr pComp) {
    components.push_back(pComp);
}

void Menu::del(MenuCompPtr pComp) {
    components.remove(pComp);
}

void Menu::print(int lvl) {
    cout<<string(lvl, '\t') <<"[" <<name<<"]"<<endl;
    cout<<string(lvl, '\t') <<"description: " <<desc<<endl;

    for (MenuCompIter it = components.begin();
         it != components.end();
         it++)
    {
        (*it)->print(lvl+1);
    }

}

Iterator<MenuComponent>::IterPtr Menu::createIterator() {
    Iterator<MenuComponent>::IterPtr pMenuIter(new MenuIterator(components.begin(),components.end()));

    return Iterator<MenuComponent>::IterPtr(new CompositeIterator(pMenuIter));
}
