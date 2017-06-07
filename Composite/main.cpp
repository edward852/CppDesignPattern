#include <iostream>

//#include "MenuComponent.h"
#include "MenuItem.h"
#include "Menu.h"
#include "CompositeIterator.h"
#include "MenuComponent.h"
#include "NullIterator.h"

using namespace std;

int main() {
#if 0
    Iterator<MenuComponent>* it = new NullIterator();
    cout<<"hasNext: "<<it->hasNext()<<endl;
    cout<<"next: "<<it->next()<<endl;
    //delete((NullIterator*)it);
    delete(it);
#else
    Menu allMenu{ "All Menu", "All Menu" };
    MenuComponent::MenuCompPtr pLunchMenuItem1(new MenuItem("Lunch menu item1",
                                                      "Lunch menu item1 description",
                                                      true, 2.99));
    MenuComponent::MenuCompPtr pDinnerMenuItem1(new MenuItem("Dinner menu item1",
                                                      "Dinner menu item1 description",
                                                      false, 3.09));
    MenuComponent::MenuCompPtr pLunchMenu(new Menu("Lunch Menu", "Menu for lunch"));
    MenuComponent::MenuCompPtr pDinnerMenu(new Menu("Dinner Menu", "Menu for dinner"));

    allMenu.add(pLunchMenu);
    allMenu.add(pDinnerMenu);

    pLunchMenu->add(pLunchMenuItem1);
    pDinnerMenu->add(pDinnerMenuItem1);

    //allMenu.print();
    cout<<string(40, '-')<<endl<<endl;

    Iterator<MenuComponent>::IterPtr ptr1 = allMenu.createIterator();

    while (ptr1->hasNext())
    {
        MenuComponent::MenuCompPtr pComp = ptr1->next();

        if (nullptr != pComp)
        {
            cout<<pComp->getName()<<endl;
        }
    }
#endif

    return 0;
}