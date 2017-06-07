//
// Created by switch on 6/2/17.
//

#ifndef ITERATOR_MENUITEM_H
#define ITERATOR_MENUITEM_H

#include <string>

class MenuItem {
public:
    MenuItem();
    MenuItem(const std::string&, const std::string&, bool, double);
    const std::string& getName();
    std::string getDescription();
    bool isVegetarian();
    double getPrice();
    //virtual ~MenuItem(){};

private:
    std::string name;
    std::string desc;
    bool vegetarian;
    double price;
};


#endif //ITERATOR_MENUITEM_H
